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

//�����������������ĺ���
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

//������ʾ�ĺ���
pf(float answer,float result,char s1,int z){
	float answer1;
	switch(s1){
	case '+': {answer1=answer+(float)z;
			if(answer1==result)
			{t++;printf("�����(*^��^*)��\n");}

		else {n++;printf("������T T,����%.1f��\n",answer1);}break;}
	case '-': {	answer1=answer-(float)z;
			if(answer1==result)
		{n++;printf("�����(*^��^*)��\n");}

		else {t++;printf("������T T,����%.1f��\n",answer1);
			  }break;}
	case '*':

		{answer1=answer*(float)z;
			if(answer1==result)
		{t++;printf("�����(*^��^*)��\n");}

		else {n++;printf("������T T,����%.1f��\n",answer1);}break;}
	case '/':	answer1=answer/(float)z;
			if(answer1==result)
		{t++;printf("�����(*^��^*)��\n");}

		else {n++;printf("������T T,����%.1f��\n",answer1);}break;}



}

 void main(){
   int enterNumber, i,x,y,z;

   printf("        **           **        \n");
    printf("    *       *     *       *    \n");
    printf("  *            *            *  \n");
    printf(" *                           * \n");
    printf(" *         Сѧ��ר��         * \n");
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


   printf("��������Ŀ��Ŀ:");
   scanf("%d",&enterNumber);
   for(i=0;i<enterNumber;i++){
   float  result,answer;
   char s, s1;
   srand( (unsigned)time( NULL ) );//��ʱ��Ϊ���ӣ������������
    x=rand()%100+1;  //���������
    y=rand()%100+1;
	z=rand()%100+1;
    s=Operator();    //���ú���������������
    s1=Operator();
	if(s=='-'||s=='/'){
		while(x<y){
    x=rand()%100+1;      //��ǰ����ֺ��ߴ���ǰ�������²��������������ָ���
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

 printf("\n������  ������%d�������%d������ӭ��ү�´�������\n",t,n);}
