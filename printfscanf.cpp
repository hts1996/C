#include <stdio.h>

int main(void) {
	/*�������ּ�*/
	//�����ּ�//
	//������//
	int age = 28;
	printf("%d \n",age);
	//�Ǽ���//
	float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.21f\n", d);
	//���:������ �ʴ¼�,������x//
	const int YEAR = 1972;
	printf("C�� ��ǥ�� ���� : %d\n", YEAR);
	//����//
	printf("%d + %d = %d\n", 30, 70, 30 + 70);
	//scanf//
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);
	//������//
	char c = 'A';
	printf("%c\n", c);
	char str[256];
	//���ڿ� �Է¹ޱ�//
	scanf_s("%s", str,sizeof(str));
	printf("%s\n", str);
	return 0;
} 