#include <stdio.h>

int main(void) {
	/*여러줄주석*/
	//한줄주석//
	//정수형//
	int age = 28;
	printf("%d \n",age);
	//실수형//
	float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.21f\n", d);
	//상수:변하지 않는수,값변경x//
	const int YEAR = 1972;
	printf("C언어가 발표된 연도 : %d\n", YEAR);
	//연산//
	printf("%d + %d = %d\n", 30, 70, 30 + 70);
	//scanf//
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);
	//문자형//
	char c = 'A';
	printf("%c\n", c);
	char str[256];
	//문자열 입력받기//
	scanf_s("%s", str,sizeof(str));
	printf("%s\n", str);
	return 0;
} 