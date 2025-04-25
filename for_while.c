#include <stdio.h>

//For문 예제_!구하기
int main()
{
	int total = 0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("%d!의 값: %d \n", num, total);
	return 0;
}

//구구단 for문 구현
int main()
{
	int cur, is;

	for (cur = 2; cur < 10; cur++)
	{
		for (is = 1; is < 10; is++)
			printf("%d x %d = %d \n", cur, is, cur * is);
		printf("\n");
	}
	return 0;
}

//if문 예제_IfBasic.c
int main()
{
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num < 0)//num이 0보다 작으면 아래의 문장 실행
		printf("입력 값은 0보다 작다. \n");
	if (num > 0)//num이 0보다 크면 아래의 문장 실행
		printf("입력 값은 0보다 크다. \n");
	if (num == 0)//num이 0이면 아래의 문장 실행
		printf("입력 값은 0이다. \n");

	return 0;
}

//계산기 기초 if문_CalOne.c
int main()
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.너눗셈 \n");
	printf("선택? ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("결과: %f \n", result);
	return 0;
}

//조건문 반복문 활용_Mul3Mul4.c
int main()
{
	int num;

	for (num = 1; num < 100; num++) 
	{
		if (num % 3 == 0 || num % 4 == 0)
			printf("3 또는 4의 배수: %d \n", num);
	}
	return 0;
}

//if-else문_CalTwo.c
//it esls장점 if문은 조건을 계속 비교하여 비교적 느림 즉 순차제어인 if else문이 빠르다.
int main()
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택? ");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);
	
	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else // else는 조건 필요 No
		result = num1 / num2;

	printf("결과: %f \n", result);
	return 0;
}

ThreeOperand.c
int main()
{
	int num, abs;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("절댁값: %d \n", abs);
	return 0;
}

//RealMean.c
//확인 해보기
int main()
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0;) {
		total += input;
		printf("실수 입력(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}

	printf("평균: %f \n", total / (num - 1));
	return 0;

}

//예제1
int main(void)//답안1
{
	int i = 1;

	while (i < 100) {
		if (i % 7 == 0 || i % 9 == 0)
			printf("%2d is 7의 배수 또는 9의 배수\n", i);
		i++;
	}

	return 0;
}
int main()
{
	int num;
	int i=7, j=9;
	int I, J;

	for (num = 1; num < 100; num++)
	{
		while (I < 100 && J < 100) {
			printf("100이하의 7과 9의 배수는? %d 와 %d\n", I, J);
			num++;
			I = i * num;
			J = j * num;
		}

	}

	return 0;
}

//Whenover5000.c
int main(void)
{
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;//break문 실행! 즉 반복문 탈출
		num++;
	}

	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	return 0;
}

//ExceptMul2Mul3.c
int main(void)
{
	int num;
	printf("start! ");

	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d ", num);
	}
	printf("end! \n");
	return 0;
}

//예제 문제 구구단+특정조건
//답안1
int main(void)
{
	int i, j;
	for (i = 2; i <= 9; i++) {
		if (i % 2 != 0) continue;
		for (j = 1; j <= 9; j++) {
			printf("%2d x %2d = %2d\n", i, j, i * j);
			if (i == j) break;
		}
		printf("\n");
	}
}
int main()
{
	int cur, is;

	for (cur = 2; cur < 10; cur++)
	{
		for (is = 1; is < 10; is++)
			if (cur % 2 == 0 )// 추가 수정 필요
			{
				printf("%d x %d = %d \n", cur, is, cur * is);
				if (cur == is) break;
			}
		printf("\n");
	}
	return 0;
}

//switch.c 기본 예제
//답안1
int main(void)
{
	int score = 0;
	do {
		printf("성적을 입력하세요 : ");
		scanf_s("%d", &score);
	} while (score < 0 || score > 100);

	switch (score) {
	case 100: case 99: case 98:
	case 97: case 96: case 95:
		printf("%d : A+\n", score);
		break;
	case 94: case 93: case 92: case 91: case 90:
		printf("%d : A\n", score);
		break;
	case 89: case 88: case 87: case 86: case 85:
		printf("%d : B+\n", score);
		break;
	case 84: case 83: case 82: case 81: case 80:
		printf("%d : B\n", score);
		break;
	case 79: case 78: case 77: case 76: case 75:
		printf("%d : C+\n", score);
		break;
	case 74: case 73: case 72: case 71: case 70:
		printf("%d : C\n", score);
		break;
	case 69: case 68: case 67: case 66: case 65:
		printf("%d : D+\n", score);
		break;
	case 64: case 63: case 62: case 61: case 60:
		printf("%d : D\n", score);
		break;
	default:
		printf("%d : F\n", score);
		break;
	}
	return 0;
}

int main(void)
{
	int score = 0;
	printf("성적을 입력하세요 : ");
	scanf_s("%d", &score);
	
	if (score <= 100 && score >= 0) {
		switch (score) {
		case 100: case 99: case 98:case 97: case 96: case 95:
			printf("%d : A+\n", score);
			break;
		case 94: case 93: case 92:case 91: case 90:
			printf("%d : A\n", score);
			break;
		case 89: case 88: case 87:case 86: case 85:
			printf("%d : B+\n", score);
			break;
		case 84: case 83: case 82:case 81: case 70:
			printf("%d : B\n", score);
			break;
		case 69: case 68: case 67:case 66: case 65:
			printf("%d : C+\n", score);
			break;
		case 64: case 63: case 62:case 61: case 60:
			printf("%d : C\n", score);
			break;
		default:
			printf("%d : F\n", score);
		}
	}
	else {
		printf("0부터 100이하의 수를 입력하시오.");
	}
	
	return 0;
}
