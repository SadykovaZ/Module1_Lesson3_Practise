#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL));

	int n = 0;

	printf("������� ����� �������:\t");
	scanf("%d", &n);

	if (n == 1)
	{
		//1.	�������� �������, ������� �������� ��������, ����� ������ ���� �� ����� X, Y � Z ������ ����.

		int x = 0, y = 0, z = 0;

		x = 1 + rand() % 1000;
		y = 1 + rand() % 1000;
		z = 1 + rand() % 1000;


		if (x % 5 == 0 && y % 5 != 0 && z % 5 != 0)
		{
			printf("������� �������� ��������, ������ ����� ������� ���� = %d\n", x);
		}
		else if (x % 5 != 0 && y % 5 == 0 && z % 5 != 0)
		{
			printf("������� �������� ��������, ������ ����� ������� ���� = %d\n", y);

		}
		else if (x % 5 != 0 && y % 5 != 0 && z % 5 == 0)
		{

			printf("������� �������� ��������, ������ ����� ������� ���� = %d\n", z);
		}
		else
		{
			printf("������� �� �������� ��������.\n");
		}
	}

	else if (n == 2)
	{
		//2.	�������� �������, ������� �������� ��������, ����� ���� �� ���� �� ����� X, Y � Z ������ 80

		int x = 0, y = 0, z = 0;

		x = 1 + rand() % 1000;
		y = 1 + rand() % 1000;
		z = 1 + rand() % 1000;

		printf("\n%d, %d, %d\n", x, y, z);
		if (x > 80 || y > 80 || z > 80)
		{
			printf("������� �������� ��������.\n");
		}

		else
		{
			printf("������� �� �������� ��������.\n");
		}

	}

	else if (n == 3)
	{
		//3.	�������� ���������� ���������, ������� ����������, ��� ����� � �� �����������   ���������  �� -10 �� -1 ��� ��������� �� 2 �� 15.

		int A = 0;

		A = -9 + rand() % 15;

		printf("\n%d\n", A);

		if (A < -10 || A > -1)
		{
			printf("����� � �� ����������� ���������  �� -10 �� -1 = %d\n", A);
		}

		else if (A < 2 || A > 15)
		{
			printf("����� � �� �����������   ���������  �� 2 �� 15 = %d\n", A);
		}
		else
		{
			printf("����� � �� ����������� ��������� �� -10 �� -1 � �� ����������� ��������� �� 2 �� 15.\n");
		}
	}

	else if (n == 4)
	{
		//4.	�������� ���������� ���������, ������� ����������, ��� ����� � �������� ��������������, �� �� ����� 4999.

		int A = 0;

		A = 1 + rand() % 10000;
		printf("\n%d\n", A);

		if (A >= 1000 && A < 10000 && A != 4999)
		{
			printf("����� � �������� ��������������, �� �� ����� 4999. \n");
		}

		else
		{
			printf("����� � �� �������� ��������������.\n");
		}
	}

	else if (n == 5)
	{
		//5.	�������� ���������� ���������, ������������ ����� ����� ������ �/B ��� C/D

		float A = 0, B = 0, C = 0, D = 0, Res = 0;

		A = 1 + rand() % 1000;
		B = 1 + rand() % 1000;
		C = 1 + rand() % 1000;
		D = 1 + rand() % 1000;

		printf("\n%f, %f, %f, %f\n", A, B, C, D);

		if (A / B > C / D)
		{
			Res = A / B;
			printf("����� �/B ������ = %f\n", Res);
		}

		else if (C / D > A / B)
		{
			Res = C / D;
			printf("����� C/D ������ = %f\n", Res);
		}

	}

	else if (n == 6)
	{
		//6.	���� ���������� ���� ��������� ����� �, � (����� �����, ������� � ��������� 1-8) ��������, ��� ����� ������ ���� ����� (1,1) 
		//      �������� ������, ��������� ���������� ������������: ������� ���� �������� �����

		int x, y;

		x = 1 + rand() % 10;
		y = 1 + rand() % 10;

		printf("\n%d, %d\n", x, y);

		if ((x >= 1 && x <= 8) && (y >= 1 && y <= 8))
		{
			if (x % 2 == 0)
			{
				if (y % 2 == 0)
				{
					printf("������ ���� �������� ������\n");
				}
				else
				{
					printf("������ ���� �������� �����\n");
				}
			}
			else if (x % 2 != 0)
			{
				if (y % 2 != 0)
				{
					printf("������ ���� �������� ������\n");
				}
				else
				{
					printf("������ ���� �������� �����\n");
				}
			}
		}
		else
		{
			printf("�� ������ � �������� (1-8)\n");
		}
	}

	else if (n == 7)
	{
		//7.	���� ���������� ���� ������ ����� ��������� ����� �1, �1, y2, �2 (����� �����, ������� � ��������� 1-8). 
		//      ��������� ���������� ������������: ������ �� ���� ��� ����� ������� � ������ ���� �� ������

		int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

		x1 = 1 + rand() % 10;
		y1 = 1 + rand() % 10;

		x2 = 1 + rand() % 10;
		y2 = 1 + rand() % 10;


		printf("\n%d-%d ����� �� %d-%d\n", x1, y1, x2, y2);

		if (((x1 >= 1 && x1 <= 8) && (y1 >= 1 && y1 <= 8)) && ((x2 >= 1 && x2 <= 8) && (y2 >= 1 && y2 <= 8)))
		{
			if ((x1 == x2) || (y1 == y2))
			{
				printf("����� �� ���� ��� ����� ������� � ������ ���� �� ������\n");
			}

			else
			{
				printf("������\n");
			}
		}
		else
		{
			printf("�� ������ � �������� (1-8)\n");
		}
	}

	else if (n == 8)
	{
		//8.	��������� �������� ����������� ��������� ��� ��������� ��������� ���������� ������� �, � � �: � = ������, � = ����, � = ����:
		//a.� ��� � � �� �;
		//b.�� � � �� �;
		//c.��(� � �) ��� �;
		//d.� � �� � ��� �;
		//e.� ���(��(� � �)).

		int A = 1, B = 0, C = 0;

		if (A || B && !C)
		{
			printf("��\n");
		}
		else
		{
			printf("����\n");
		}
		if (!A && !B)
		{
			printf("��\n");
		}
		else
		{
			printf("����\n");
		}
		if (!(A && C) || B)
		{
			printf("��\n");
		}
		else
		{
			printf("����\n");
		}
		if (A && !B || C)
		{
			printf("��\n");
		}
		else
		{
			printf("����\n");
		}
		if (A || !(B && C))
		{
			printf("��\n");
		}

		else
		{
			printf("����\n");
		}

	}

	else if (n == 9)
	{
		//9.	��������� �������� ����������� ���������:
		//a.	(x >= 0) ���(y2 != 4) ��� x = 1, y = 2;
		//b.	(x >= 0) �(y2 != 4) ��� x = 1, y = 2;
		//c.	(x � � != 0) �(� > x) ��� x = 2, y = 1;
		//d.	(x � � != 0) ���(� < x) ��� x = 2, y = 1;

		int x = 1, y = 2;
		if (x >= 0 || pow(y, 2) != 4)
		{
			printf("������\n");
		}
		else
		{
			printf("False\n");
		}

		if (x >= 0 && pow(y, 2) != 4)
		{
			printf("������\n");
		}

		else
		{
			printf("False\n");
		}


		x = 2, y = 1;

		if ((x*y) != 0 && y > x)
		{

			printf("������\n");
		}
		else
		{
			printf("False\n");
		}



		if ((x*y) != 0 || y < x)
		{

			printf("������\n");
		}
		else
		{
			printf("False\n");
		}

	}



}

