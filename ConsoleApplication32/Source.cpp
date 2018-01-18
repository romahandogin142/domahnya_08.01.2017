#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{
#define sizeArr 12
	setlocale(LC_ALL, "Rus");
	int tm, nz;
	do
	{
		system("cls");
		cout << " Что бы выйти введите 200'" << endl;
		cout << "Введите номер задания: ";
		cin >> tm;
		switch (tm)
		{

		case 1:
		{
			cout << "Создайте одномерный массив целого типа заданного размера M." << endl;
			cout << "Задайте значения элементов с помощью генератора случайных чисел. Распечатайте массив." << endl;
			int mas[17];
			unsigned long long summa = 0;
			for (int i = 0; i < 10; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << "  " << endl;
			}

		}break;


		case 2:
		{
			cout << "Массив предназначен для хранения значений весов двадцати человек." << endl;
			cout << "С помощью датчика случайных чисел заполнить массив целыми значениями, " << endl;
			cout << "лежащими в диапазоне от 50 до 100 включительно" << endl;
			int mas[20];
			unsigned long long summa = 0;
			for (int i = 0; i < 10; i++)
			{
				mas[i] = 50 + rand() % 100;
				cout << mas[i] << "  " << endl;
			}

		}break;


		case 3:
		{
			cout << "Заполнить массив из восьми элементов таким образом, чтобы значения элементов при просмотре массива слева направо образовывали: " << endl;
			cout << "b.	возрастающую последовательность" << endl;
			int mas[sizeArr];
			int per;
			int per1;
			for (int i = 0; i < sizeArr; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << "   " << endl;
			}
			int chet = 0;
			int chet1 = 0;

			for (int i = 0; i < sizeArr; i++)
			{
				for (int h = (sizeArr - 1); h > i; h--)
				{
					if (mas[h - 1] > mas[h])
					{
						per = mas[h - 1];
						mas[h - 1] = mas[h];
						mas[h] = per;
						chet++;
					}
				}
			}
			for (int i = 0; i < sizeArr; i++)
			{
				cout << "возрастающую последовательность " << mas[i] << endl;
			}








		}break;

		case 4:
		{
			cout << "Дан массив целых чисел. Выяснить: " << endl;
			cout << "является ли s-й элемент массива положительным числом" << endl;
			cout << "является ли k-й элемент массива четным числом" << endl;
			cout << "какой элемент массива больше: k-й или s-й." << endl;
			int mas[20], s, k, sox, sox1;
			for (int i = 0; i < 20; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << "Index " << i << " === " << mas[i] << "   " << endl;
			}
			do
			{
				cout << "Ведите число S" << endl;
				cin >> s;
				cout << "Ведите число K" << endl;
				cin >> k;

			} while ((s < 0 || s > 19) && (k < 0 || k > 19));

			for (int i = 0; i < 20; i++)
			{

				if (i == s)
				{
					sox = mas[i];
					if (mas[i] > 0)
						cout << "элемент массива положительным числом" << s << endl;
					else if (mas[i] < 0)
						cout << "элемент массива не положительное число" << s << endl;
				}

				else if (i == k)
				{
					sox1 = mas[i];
					if (mas[i] % 2 == 0)
						cout << "элемент массива является  четным числом" << k << endl;
					else if (mas[i] % 2 != 0)
						cout << "элемент массива является не  четным числом" << k << endl;
				}
			}
			if (sox > sox1)
				cout << "K меньше S  " << endl;
			else
				cout << "S меньше K  " << endl;






		}break;


		case 5:
		{
			cout << "5.	Дан массив. Все его элементы:" << endl;
			cout << "	a.уменьшить на 20" << endl;
			cout << "b.умножить на последний элемент" << endl;
			cout << "c.увеличить на число В." << endl;
			int mas[15], umno = 1, uvel = 0;
			cout << "Masiv= " << endl;
			for (int i = 0; i < 15; i++)
			{
				mas[i] = 1 + rand() % 100;
				cout << mas[i] << "";
				mas[i] = mas[i] - 20;
				cout << " - 20= " << mas[i] << endl;

			}
			cout << "умножить на последний элемент " << endl;
			for (int i = 0; i < 15; i++)
			{
				umno = mas[14] * mas[i];
				cout << mas[14] << "  *  " << mas[i] << " = " << umno << endl;
			}
			int b;
			cout << "Ведите  число В  ";
			cin >> b;
			for (int i = 0; i < 15; i++)
			{
				uvel = mas[i] + b;
				cout << mas[i] << " + " << b << " = " << uvel << endl;;
			}




		}break;

		case 6:
		{
			cout << "	Дан массив. Вывести на экран сначала его неотрицательные элементы, затем отрицательные" << endl;
			int mas[10];

			for (int i = 0; i < 10; i++)
			{
				mas[i] = -10 + rand() % 20;
				cout << mas[i] << "" << endl;
			}
			cout << "неотрицательные элементы=" << endl;
			for (int i = 0; i < 10; i++)
			{
				if (mas[i] < 0)
				{
					cout << mas[i] << endl;
				}
			}
			cout << "отрицательные элементы= " << endl;
			for (int i = 0; i < 10; i++)
			{
				if (mas[i] > 0)
				{
					cout << mas[i] << endl;
				}
			}

		}break;

		case 7:
		{
			cout << "В массиве хранится информация о количестве побед, одержанных 20 футбольными командами." << endl;
			cout << "Определить номера команд, имеющих меньше трех побед." << endl;
			int mas[20], count = 0;
			for (int i = 0; i < 20; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout << mas[i] << "" << endl;


			}
			for (int i = 0; i < 20; i++)
			{

				if (mas[i] <= 3)
				{
					count++;
					cout << count << " komanda WIN-" << mas[i] << endl;
				}
			}
		}break;

		case 8:
		{
			cout << "Ввести массив, состоящий из 14 элементов целого типа. Найти количество элементов четных по значению." << endl;
			int mas[14];
			for (int i = 0; i < 14; i++)
			{
				mas[i] = 1 + rand() % 10;
				cout << mas[i] << "" << endl;
			}
			cout << "четных по значению = " << endl;
			for (int i = 0; i < 14; i++)
			{
				if (mas[i] % 2 == 0)
				{
					cout << mas[i] << endl;
				}
			}


		}break;


		case 9:
		{
			cout << "Ввести массив, состоящий из 12 элементов целого типа." << endl;
			cout << "Получить новый массив, заменив значение пятого элемента среднеарифметическим исходного массива" << endl;
			const int size = 12;
			int array[size];
			int array2[size];
			int sum = 0;

			for (int i = 0; i < 12; i++)
			{
				array[i] = 1 + rand() % 12;
				cout << array[i] << "" << endl;
				array2[i] = array[i];
				sum += array[i];

			}
			cout << "Summa = " << sum / size << endl;

			array2[4] = sum / size;

			cout << " новый массив " << endl;

			for (int i = 0; i < size; i++)
			{
				cout << " " << array2[i] << endl;
			}
		}break;


		case 10:break;
		{
			cout << "Задан массив, состоящий из 15 элементов вещественного типа." << endl;
			cout << "Определить количество элементов, значения которых больше первого элемента" <<  endl;
			int mas[15];
			for (int i = 0; i < 15; i++)
			{
				mas[i] = 1 + rand() % 15;
				cout << mas[i] << "" << endl;
			}
			cout << " значения которых больше первого " << endl;
			for (int i = 0; i < 15; i++)
			{
				if (mas[0] < mas[i])
					cout << mas[i] << endl;
			}
		}


		}

		system("pause");

	} while (tm != 200);



}