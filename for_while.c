#include <stdio.h>

For�� ����_!���ϱ�
int main()
{
	int total = 0;
	int i, num;
	printf("0���� num������ ����, num��? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("%d!�� ��: %d \n", num, total);
	return 0;
}

������ for�� ����
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

if�� ����_IfBasic.c
int main()
{
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num < 0)//num�� 0���� ������ �Ʒ��� ���� ����
		printf("�Է� ���� 0���� �۴�. \n");
	if (num > 0)//num�� 0���� ũ�� �Ʒ��� ���� ����
		printf("�Է� ���� 0���� ũ��. \n");
	if (num == 0)//num�� 0�̸� �Ʒ��� ���� ����
		printf("�Է� ���� 0�̴�. \n");

	return 0;
}

���� ���� if��_CalOne.c
int main()
{
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.�ʴ��� \n");
	printf("����? ");
	scanf_s("%d", &opt);
	printf("�� ���� �Ǽ� �Է�: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("���: %f \n", result);
	return 0;
}

���ǹ� �ݺ��� Ȱ��_Mul3Mul4.c
int main()
{
	int num;

	for (num = 1; num < 100; num++) 
	{
		if (num % 3 == 0 || num % 4 == 0)
			printf("3 �Ǵ� 4�� ���: %d \n", num);
	}
	return 0;
}

if-else��_CalTwo.c
 it esls���� if���� ������ ��� ���Ͽ� ���� ���� �� ���������� if else���� ������.
int main()
{
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����? ");
	scanf_s("%d", &opt);
	printf("�� ���� �Ǽ� �Է�: ");
	scanf_s("%lf %lf", &num1, &num2);
	
	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else // else�� ���� �ʿ� No
		result = num1 / num2;

	printf("���: %f \n", result);
	return 0;
}

ThreeOperand.c
int main()
{
	int num, abs;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("���찪: %d \n", abs);
	return 0;
}

RealMean.c
Ȯ�� �غ���
int main()
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0;) {
		total += input;
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}

	printf("���: %f \n", total / (num - 1));
	return 0;

}

����1
int main(void)//���1
{
	int i = 1;

	while (i < 100) {
		if (i % 7 == 0 || i % 9 == 0)
			printf("%2d is 7�� ��� �Ǵ� 9�� ���\n", i);
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
			printf("100������ 7�� 9�� �����? %d �� %d\n", I, J);
			num++;
			I = i * num;
			J = j * num;
		}

	}

	return 0;
}

Whenover5000.c
int main(void)
{
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;//break�� ����! �� �ݺ��� Ż��
		num++;
	}

	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	return 0;
}

ExceptMul2Mul3.c
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

���� ���� ������+Ư������
���1
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
			if (cur % 2 == 0 )// �߰� ���� �ʿ�
			{
				printf("%d x %d = %d \n", cur, is, cur * is);
				if (cur == is) break;
			}
		printf("\n");
	}
	return 0;
}

switch.c �⺻ ����
���1
int main(void)
{
	int score = 0;
	do {
		printf("������ �Է��ϼ��� : ");
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
	printf("������ �Է��ϼ��� : ");
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
		printf("0���� 100������ ���� �Է��Ͻÿ�.");
	}
	
	return 0;
}
