// 21.12.2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	double a;
	cout << "Введіть число a ";
	cin >> a;
	int grn = a;
	int kop = int(a * 100) % 100;
	cout << grn << "грн." << kop << "коп." << endl;


	/*SetConsoleOutputCP(1251);

	double a;
	cout << "Введіть число a ";
	cin >> a;
	int grn = a;
	int kop = (a - grn) * 100;
	cout << grn << "грн." << kop << "коп." << endl;*/

	/*SetConsoleOutputCP(1251);

	int a, sec, sec1, god, god1, hv, hv1, sec2, god2, hv2;
	cout << "Введіть sec1 = ";
	cin >> sec1;
	cout << "Введіть hv1 = ";
	cin >> hv1;
	cout << "Введіть god1 = ";
	cin >> god1;
	cout << "Введіть sec2 = ";
	cin >> sec2;
	cout << "Введіть hv2 = ";
	cin >> hv2;
	cout << "Введіть god2 = ";
	cin >> god2;
	int t1 = god1 * 3600 + hv1 * 60 + sec1;
	int t2 = god2 * 3600 + hv2 * 60 + sec2;
	a = t2 - t1;
	sec = a % 60;
	hv = a / 60 % 60;
	god = a / 3600 % 24;
	cout << god << ":" << hv << ":" << sec << endl;*/

	/*SetConsoleOutputCP(1251);

	int a, sec, god, hv;
	cout << "Введіть a (секунди) = ";
	cin >> a;
	sec = a % 60;
	hv = a / 60 % 60;
	god = a / 3600 % 24;
	cout << god / 10 << god % 10 << ":" << hv / 10 << hv % 10 << ":" << sec / 10 << sec % 10 << endl;*/


	/*int a, sec, god, hv;
	cout << "Введіть a (секунди) = ";
	cin >> a;
	sec = a % 60;
	hv = a / 60 % 60;
	god = a / 3600 % 24;
	cout << "sec = " << sec << "hv = " << hv << "god" << god << endl;*/



	/*int a, o, d, s, sum, b;
	cout << "Введіть a = ";
	cin >> a;
	o = a % 10;
	d = a / 10 % 10;
	s = a / 100;
	sum = o + d + s;
	b = 100 * 0 + 10 * d + s;
	cout << sum;*/

	/*SetConsoleOutputCP(1251);

	int a, o, d, s, sum;
	cout << "Введіть a = ";
	cin >> a;
	o = a % 10;
	d = a / 10 % 10;
	s = a / 100;
	sum = o + d + s;
	cout << sum;*/




	/*SetConsoleOutputCP(1251);

	int a, b;
	cout << "Введіть a = ";
	cin >> a;
	b = a % 10;
	cout << b;*/


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file