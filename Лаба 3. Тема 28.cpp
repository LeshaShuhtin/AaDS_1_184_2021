#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double y, a, b, Xn, aX, Xk;

	system("color 02");
	cout << "��� ��������� ������ ��� ������� y = (sin((a + b * x)^ 3.5)) / (1 + cos(log10(a+b*x)))\n";
	printf("\n������� A:\n");
	cout << "������� ������������: \n";
	cout << "����������� a: "; cin >> a; // a = 2.5;
	cout << "����������� b: "; cin >> b; // b = 4.6;
	cout << "����������� Xn: "; cin >> Xn; // Xn = 1.15;
	cout << "����������� Xk: "; cin >> Xk; // Xk = 3.05;
	cout << "����������� aX: "; cin >> aX; // aX = 0.38;
	for (double i = Xn; i <= Xk;) 
	
	{
		if (a + b * i < 0) { cout << "ERROR #1 '�������� ������������ �������� �������� ����������� ��������� � 0' "; }
		else {
			y = (sin(pow((a + b * i), 3.5))) / (1 + cos(log10(a + b * i)));
			cout << "��������� ������� ��� x=" << i << " ����� "<< y << endl;
		}

		i = i + aX;
	}
	system("pause");
	system("cls");
	system("color 04");
	printf("������� B :\n");
	
	double x = 1.2;
	
	for (int i = 1; i <= 5; ++i) 
	
	{
		if (i == 2) x += 0.16;
		if (i == 3) x += 0.21;
		if (i == 4) x += 0.36;
		if (i == 5) x += 0.32;
		if (a + b * x < 0) { cout << "ERROR #1 '�������� ������������ �������� �������� ����������� ��������� � 0' "; }
		else {
			y = (sin(pow((a + b * x), 3.5))) / (1 + cos(log10(a + b * x)));
			cout << "��������� ������� ��� x=" << x << " �����" << y << endl;
		}
	}
}

