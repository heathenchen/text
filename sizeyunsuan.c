#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int t=0;int n=0;
char Operator(){
int calculator;
calculator=rand()%4+1;
switch(calculator){
case 1:return '+';
	case 2:return '-';
		case 3:return '/';
			case 4:return '*';
}}

//用于随机生成运算符的函数
operation(int x,int y,char s){
float answer;
	switch(s){
	case '+': {answer=(float)x+(float)y;break;}
	case '-': {	answer=(float)x-(float)y;break;}
	case '*':{	answer=(float)x*(float)y;break;}
	case '/':{	answer=(float)x/(float)y;break;}
	}
	return answer;

}

//用于显示的函数
pf(float answer,float result,char s1,int z){
	float answer1;
	switch(s1){
	case '+': {answer1=answer+(float)z;
			if(answer1==result)
			{t++;printf("答对啦(*^▽^*)！\n");}

		else {n++;printf("做错了T T,答案是%.1f！\n",answer1);}break;}
	case '-': {	answer1=answer-(float)z;
			if(answer1==result)
		{n++;printf("答对啦(*^▽^*)！\n");}

		else {t++;printf("做错了T T,答案是%.1f！\n",answer1);
			  }break;}
	case '*':

		{answer1=answer*(float)z;
			if(answer1==result)
		{t++;printf("答对啦(*^▽^*)！\n");}

		else {n++;printf("做错了T T,答案是%.1f！\n",answer1);}break;}
	case '/':	answer1=answer/(float)z;
			if(answer1==result)
		{t++;printf("答对啦(*^▽^*)！\n");}

		else {n++;printf("做错了T T,答案是%.1f！\n",answer1);}break;}



}

 void main(){
   int enterNumber, i,x,y,z;

   printf("        **           **        \n");
    printf("    *       *     *       *    \n");
    printf("  *            *            *  \n");
    printf(" *                           * \n");
    printf(" *         小学鸡专用         * \n");
    printf(" *                            * \n");
    printf(" *                           * \n");
    printf("  *                         *  \n");
    printf("   *                       *   \n");
    printf("    *                     *    \n");
    printf("      *                 *      \n");
    printf("        *             *        \n");
    printf("          *         *          \n");
    printf("             *   *             \n");
    printf("               *               \n");


   printf("请输入题目数目:");
   scanf("%d",&enterNumber);
   for(i=0;i<enterNumber;i++){
   float  result,answer;
   char s, s1;
   srand( (unsigned)time( NULL ) );//以时间为种子，产生真随机数
    x=rand()%100+1;  //产生随机数
    y=rand()%100+1;
	z=rand()%100+1;
    s=Operator();    //利用函数产生随机运算符
    s1=Operator();
	if(s=='-'||s=='/'){
		while(x<y){
    x=rand()%100+1;      //若前后出现后者大于前者则重新产生随机数避免出现负数
    y=rand()%100+1;
		}

	}


printf("\n %d :%d%c%d%c%d=",i+1,x,s,y,s1,z);
scanf("%f",&result);
answer=operation(x,y,s);
 if(s1=='-'||s1=='/'){
	while(answer<z||answer<z){
	z=rand()%100+1;
	}
}
pf(answer,result,s1,z);

   }

 printf("\n当当当  ：你答对%d道，答错%d道，欢迎大爷下次再来玩\n",t,n);}
