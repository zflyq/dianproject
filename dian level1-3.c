#include<stdio.h>
int main() {
	int  b = 0, c = 0, d = 0;
	char a;
	printf("�����������ڷŵĻ������ࡢͨ�����۸�����\n");
	//scanf_s("%c %d %d %d", &a, &b, &b, &d);
	scanf("%c %d %d %d", &a,&b,&c,&d);
	static int j = 0;
	do{
		int  e = 0, f = e * c; 
		printf("��ѡ���㹺��Ļ���������\t");
		scanf ("%d", &e);
		//while (scanf("%d", &e)) {
			//while (getchar() != '\n');
			//printf("�������������������\n");
		//}//�����ų���������
		j += e;
		if (j <= d) {
			f = c * e;
			printf("������Ļ�����Ϊ��%d\n", f);
			printf("��Ͷ�Ҹ�Ǯ:");
			static int g = 0;
			int h;
			do {
				scanf_s("%d", &h);
				g += h;
			} while (g <= f);
			printf("��Ǯ�ɹ���");
			int i = g - f;
			printf("����%dԪ", i);
		}else{ printf("��Ʒ����"); }
		
	} while (j <= d);
	return 0;
}
