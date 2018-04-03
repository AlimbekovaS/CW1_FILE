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
		cout << "\nкакое задание? ";
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
				printf("Файл создан!");

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
				printf("Файл закрылся успешно!");
			}
			else
			{
				printf("ошибка закрытия потока");
			}
		}
		if (z == 2)
		{
			//1.	Создать типизированный файл и записать в него:
			/*a.число 500
			b.число 4, 5
			c.слово Привет*/
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
				printf("Файл создан!\n");
				system("chcp 1251");
				int k = 500;
				fprintf(f, "%d\n", k);
			}
			if (fclose(f) == 0)
			{
				printf("Файл закрылся успешно!");
			}
			else
			{
				printf("ошибка закрытия потока");
			}

		}
		if (z == 3)
		{
			//2.	Создать типизированный файл и записать в него (Записываемые числа и слова вводятся с клавиатуры)
			/*a.	5 одинаковых целых чисел
				b.	5 одинаковых вещественных чисел
				c.	5 одинаковых слов*/
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
				printf("Файл создан!\n");
				system("chcp 1251");
				int b[5];
				double g[5];
				for (int i = 0;i < 5;i++)
				{
					printf("Введите число: ");
					scanf("%d", &b[i]);
					fprintf(f, "%d\n", b[i]);
				
				}
				cout << "вещественные числа\n";
				for (int i = 0;i < 5;i++)
				{
					printf("Введите число: ");
					scanf("%lf", &g[i]);
					fprintf(f, "%2.1lf\n", g[i]);
				}
			/*	char *u;
				u=char(char*)malloc(30*sizeof(char))*/
			}
			if (fclose(f) == 0)
			{
				printf("Файл закрылся успешно!");
			}
			else
			{
				printf("ошибка закрытия потока");
			}


		}
		if (z == 4)
		{
			//3.	Дан массив из двадцати вещественных чисел. Записать все числа массива в типизированный файл в том же порядке
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
				printf("Файл создан!\n");
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