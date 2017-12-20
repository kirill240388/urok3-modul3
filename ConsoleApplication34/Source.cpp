#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int task;
	cout << "vvedite # zadaniya " << endl;
	cin >> task;
	if (task == 1)
		/*/1.	Пользователь вводит два числа. Определить, равны ли эти числа, и если нет, вывести их на экран
		в порядке возрастания.*/

	{

		int a, b;
		cin >> a;
		cin >> b;
		if (a != b)
		{

			cout << min(a, b) << max(a, b) << endl;

		}
	}
		if (task == 2)
			/*/2.	Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену.
			Студент получает допуск, если его средний балл 4 балла и выше*/
		{

			int a, b, c, d, e;
			cin >> a;
			cin >> b;
			cin >> c;
			cin >> d;
			cin >> e;
			if (a + b + c + d + e / 5 > 4)
			{
				cout << "dopusk" << endl;
			}

			else
			
				cout << "ne dopuschen" << endl;
			
		}
	
		if(task==3)
			/*/2.	Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену.
			Студент получает допуск, если его средний балл 4 балла и выше*/
		{

			int a, b, c, d, e;
			cin >> a;
			cin >> b;
			cin >> c;
			cin >> d;
			cin >> e;
			if (a + b + c + d + e / 5 > 4)
			{
				cout << "dopusk" << endl;
			}

			else

				cout << "ne dopuschen" << endl;

		}

		if (task == 4)
			/*/4.	Написать программу-калькулятор. Пользователь вводит два числа и выбирает арифметическое действие.
			Вывести на экран результат*/
		{
			int a, b, c,d;
			cout << "vvedite chisla a,b " << endl;
			cin >> a;
			cin >> b;
			cout << "vyberite deistvie" << endl;
			cout << "1=(+),2=(-),3=(*),4=(/)" << endl;
			cin >> c;
			if (c == 1)
			{
				d = a + b;
				cout << d << endl;
			}
			else if (c == 2)
			{
				d = a - b;
				cout << d << endl;
			}
			else if (c == 3)
			{
				d = a*b;
				cout << d << endl;
			}
			else if (c == 4)
			{
				d = a / b;
				cout << d << endl;
			}

		}

		if (task == 5)
			/*/5.	Написать программу, которая по выбору пользователя меняет цвет консольного приложения.
			Пользователь может выбрать цвет шрифта и цвет фона*/
		{
			int a, b,c;
			cout << "vvedite chislo" << endl;
			cin >> c;
			cout << "vyberite cvet fona" << endl;
			cout << "1-siniy, 2-zeleniy" << endl;
			cin >> a;
			cout << "vyberite cvet shrifta" << endl;
			cout << "1-siniy, 2-zeleniy" << endl;
			cin >> b;
			if (a == 1 && b == 2)
			{
				system("color 12");
				cout << c << endl;
			}
			else if (a == 2 && b == 1)
			{
				system("color 21");
				cout << c << endl;
				cout << "1, 2, 3" << endl;
			}
			else
				cout << "cvet bukv i fon sovpadayut!"<<endl;

		}
		if (task == 6)
			/*/6.	Написать программу, которая по выбору пользователя возводит введенное им число в степень от нулевой
			до седьмой включительно*/
		{
			int a, b, c;
			cout << "vvedite chislo" << endl;
			cin >> a;
			cout << "vvedite stepen" << endl;
			cin >> b;
			c = pow(a, b);
			cout << c << endl;

		}
		if (task == 7)
			/*/7.	В час пик на остановку одновременно подъехали три маршрутных такси, следующие по одному маршруту,
			в которые тут же набились пассажиры. Водители обнаружили, что количество людей в разных маршрутках разное,
			и решили пересадить часть пассажиров так, чтобы в каждой маршрутке было поровну пассажиров.
			Требуется по количествам людей в трех маршрутках определить, какое наименьшее количество пассажиров
			придаться при этом пересадить (если это вообще возможно)*/
		{
			int a, b, c, d,x,y,z,v;
			cin >> a;
			cin >> b;
			cin >> c;
			
				d = (a + b + c);
				if (d % 3 == 0)
				{
					/*/  d/3-среднее (т.е. число людей, которое должно находиться в каждой маршрутке)
					a+x=d/3 x- число людей которое должно уйти/прийти в автобус 1
					b+y=d/3 у- число людей которое должно уйти/прийти в автобус 2
					c+z=d/3 z- число людей которое должно уйти/прийти в автобус 3
					Тогда min из x,y,z- минимальное число людей которое покинет автобус, чтобы пересесть в другие 2 автобуса.
					*/
					x = d / 3 - a;
					y = d / 3 - b;
					z = d / 3 - c;
					v = abs(min(min(x,y),z));
					cout << "с 1-й людей придет/выйдет " << x << endl;
					cout << "со2-й людей придет/выйдет " << y << endl;
					cout << "с 3 - й людей придет / выйдет " << z << endl;
					cout << " всего людей выйдет "<<v << endl;
					
				}
				if(d%3!=0)
				{
					cout << "людей нельзя равномерно распределить" << endl;
				}
			
					
		}


	system("pause");
	return 0;
}