#include<stdio.h>


int main() 
{
	int  b[5], c[5], d[5];
	char a[5],js;
	int c1,c2,c3,c4,c5,d1,d2,d3,d4,d5;
	int i = 0,I=0;
	
	while ( i < 5&&js!='N') {
		
		printf("�����������ڷŵĻ������ࡢͨ�����۸�������\n");
		scanf("%c%c%d %d %d", &a[i],&js, &b[i],&c[i], &d[i]);
		getchar();//�Ե��س��� 
		switch(b[i]){
			case 1:c1=c[i];d1=d[i];break;
			case 2:c2=c[i];d2=d[i];break;
			case 3:c3=c[i];d3=d[i];break;
			case 4:c4=c[i];d4=d[i];break;
			case 5:c5=c[i];d5=d[i];break;
		
		}
		if(js=='a'&&I<=2){
			i--;
			I++;
			printf("�����������ڷŵĻ������ࡢͨ�����۸�������\n");
			scanf("%c%c%d %d %d", &a[i],&js, &b[i],&c[i], &d[i]);
			getchar();//�Ե��س��� 
			switch(b[i]){
			case 1:c1=c[i];d1=d[i];break;
			case 2:c2=c[i];d2=d[i];break;
			case 3:c3=c[i];d3=d[i];break;
			case 4:c4=c[i];d4=d[i];break;
			case 5:c5=c[i];d5=d[i];break;
			};}
		i++;
	} ;
	printf("��Ž���\n��ʼ����:\n");
	i=0;
	int B[5];
	js='\0';
	char hw;
	int D[5];
	static int pri=0;
	while(i<5&&js!='N'){
		scanf("%c%c%d %d",&hw,&js,&B[i],&D[i]);
		getchar();
		int f=0;
		switch(B[i]){
			case 1:f=c1*D[i];pri+=f;break;
			case 2:f=c2*D[i];pri+=f;break;
			case 3:f=c3*D[i];pri+=f;break;
			case 4:f=c4*D[i];pri+=f;break;
			case 5:f=c5*D[i];pri+=f;break;
		}
		if(js=='a'&&I<=2){
			I++;
			i--;
			printf("�����¹���\n");
			switch(B[i]){
			case 1:f=c1*D[i];pri+=f;break;
			case 2:f=c2*D[i];pri+=f;break;
			case 3:f=c3*D[i];pri+=f;break;
			case 4:f=c4*D[i];pri+=f;break;
			case 5:f=c5*D[i];pri+=f;break;
		}
		}
		i++;
		
	}
	printf("������Ļ�����Ϊ��%d\n", pri);
	printf("��Ͷ�Ҹ�Ǯ:\n");
	static int g = 0;
	int h;
	do {
		scanf_s("%d", &h);
		g += h;
	} while (g <= pri);
	printf("��Ǯ�ɹ���\n");
	int change = g - pri;
	printf("����%dԪ", change);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

//a����bͨ��c�۸�d����D��������

