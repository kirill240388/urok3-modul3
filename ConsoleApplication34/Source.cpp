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
		/*/1.	������������ ������ ��� �����. ����������, ����� �� ��� �����, � ���� ���, ������� �� �� �����
		� ������� �����������.*/

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
			/*/2.	������������ � ���������� ������ 5 ������ ��������. ����������, ������� �� ������� � ��������.
			������� �������� ������, ���� ��� ������� ���� 4 ����� � ����*/
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
			/*/2.	������������ � ���������� ������ 5 ������ ��������. ����������, ������� �� ������� � ��������.
			������� �������� ������, ���� ��� ������� ���� 4 ����� � ����*/
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
			/*/4.	�������� ���������-�����������. ������������ ������ ��� ����� � �������� �������������� ��������.
			������� �� ����� ���������*/
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
			/*/5.	�������� ���������, ������� �� ������ ������������ ������ ���� ����������� ����������.
			������������ ����� ������� ���� ������ � ���� ����*/
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
			/*/6.	�������� ���������, ������� �� ������ ������������ �������� ��������� �� ����� � ������� �� �������
			�� ������� ������������*/
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
			/*/7.	� ��� ��� �� ��������� ������������ ��������� ��� ���������� �����, ��������� �� ������ ��������,
			� ������� ��� �� �������� ���������. �������� ����������, ��� ���������� ����� � ������ ���������� ������,
			� ������ ���������� ����� ���������� ���, ����� � ������ ��������� ���� ������� ����������.
			��������� �� ����������� ����� � ���� ���������� ����������, ����� ���������� ���������� ����������
			��������� ��� ���� ���������� (���� ��� ������ ��������)*/
		{
			int a, b, c, d,x,y,z,v;
			cin >> a;
			cin >> b;
			cin >> c;
			
				d = (a + b + c);
				if (d % 3 == 0)
				{
					/*/  d/3-������� (�.�. ����� �����, ������� ������ ���������� � ������ ���������)
					a+x=d/3 x- ����� ����� ������� ������ ����/������ � ������� 1
					b+y=d/3 �- ����� ����� ������� ������ ����/������ � ������� 2
					c+z=d/3 z- ����� ����� ������� ������ ����/������ � ������� 3
					����� min �� x,y,z- ����������� ����� ����� ������� ������� �������, ����� ��������� � ������ 2 ��������.
					*/
					x = d / 3 - a;
					y = d / 3 - b;
					z = d / 3 - c;
					v = abs(min(min(x,y),z));
					cout << "� 1-� ����� ������/������ " << x << endl;
					cout << "��2-� ����� ������/������ " << y << endl;
					cout << "� 3 - � ����� ������ / ������ " << z << endl;
					cout << " ����� ����� ������ "<<v << endl;
					
				}
				if(d%3!=0)
				{
					cout << "����� ������ ���������� ������������" << endl;
				}
			
					
		}


	system("pause");
	return 0;
}