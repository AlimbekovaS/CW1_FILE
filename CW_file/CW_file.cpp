#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<Windows.h>
#include<time.h>
unsigned short int z;
using namespace std;
void main() 
{
	srand(time(0));
	setlocale(LC_ALL, "ru");
	while (true)
	{
		cout << "\n����� �������? ";
		cin >> z;
		if (z == 1)
		{
			FILE * fp;

			if ((fp = fopen("test.txt", "r")) == NULL)
			{
				printf("Good bye!");
				printf("Error");
				exit(1);
				//exit(EXIT_FAILURE);
			}
			else

			{
				printf("���� ������!");

				system("chcp 1251");
				/*SetConsoleCP(1251);
				SetConsoleOutputCP(1251);*/
				/*for (int i = -128;i < 120;i++)
				{
				fputc(i, fp);
				}*/
				int ch = getc(fp);
				//while (ch != EOF)
				while (feof(fp) == 1)
				{
					printf(" -%c\n", ch);
					ch = fgetc(fp);
				}
			}
			//fclose(fp);
			if (fclose(fp) == 0)
			{
				printf("���� �������� �������!");
			}
			else
			{
				printf("������ �������� ������");
			}
		}
		if (z == 2)
		{
			//1.	������� �������������� ���� � �������� � ����:
			/*a.����� 500
			b.����� 4, 5
			c.����� ������*/
			FILE *f;
			if ((f = fopen("f.txt", "w")) == NULL)
			{
				printf("Good bye!");
				printf("Error");
				exit(1);
				//exit(EXIT_FAILURE);
			}
			else

			{
				printf("���� ������!\n");
				system("chcp 1251");
				int k = 500;
				fprintf(f, "%d\n", k);
			}
			if (fclose(f) == 0)
			{
				printf("���� �������� �������!");
			}
			else
			{
				printf("������ �������� ������");
			}

		}
		if (z == 3)
		{
			//2.	������� �������������� ���� � �������� � ���� (������������ ����� � ����� �������� � ����������)
			/*a.	5 ���������� ����� �����
				b.	5 ���������� ������������ �����
				c.	5 ���������� ����*/
			FILE *f;
			if ((f = fopen("f3.txt", "w")) == NULL)
			{
				printf("Good bye!");
				printf("Error");
				exit(1);
				//exit(EXIT_FAILURE);
			}
			else

			{
				printf("���� ������!\n");
				system("chcp 1251");
				int b[5];
				double g[5];
				for (int i = 0;i < 5;i++)
				{
					printf("������� �����: ");
					scanf("%d", &b[i]);
					fprintf(f, "%d\n", b[i]);
				
				}
				cout << "������������ �����\n";
				for (int i = 0;i < 5;i++)
				{
					printf("������� �����: ");
					scanf("%lf", &g[i]);
					fprintf(f, "%2.1lf\n", g[i]);
				}
			/*	char *u;
				u=char(char*)malloc(30*sizeof(char))*/
			}
			if (fclose(f) == 0)
			{
				printf("���� �������� �������!");
			}
			else
			{
				printf("������ �������� ������");
			}


		}
		if (z == 4)
		{
			//3.	��� ������ �� �������� ������������ �����. �������� ��� ����� ������� � �������������� ���� � ��� �� �������
			float m[20];
			for (int i = 0;i < 20;i++)
			{
				m[i] = (1.1 + rand() % 50) / 1.2 + rand() % 50;
				cout << m[i] << " ";
			}
			FILE *f;
			if ((f = fopen("f4.txt", "w")) == NULL)
			{
				printf("Good bye!");
				printf("Error");
				exit(1);
				//exit(EXIT_FAILURE);
			}
			else

			{
				printf("���� ������!\n");
				system("chcp 1251");

				for (int i = 0;i < 20;i++)
				{
					int ch = getc(f);
					//while (ch != EOF) 
					while (feof(f) == 1)
					{
						printf(" -%c\n", ch);
						ch = fgetc(f);
					}

				}
			}
		}
	}
	system("pause");
}