#include <iostream>
#include "problem.h"
#include "functions.h"
using namespace std;
void console(int ok)
{
	int k = 0, v[100];
	char option;
	while (ok == 1)
	{

		cout << "1.Cititi numarul de elemente si vectorul" << endl;
		cout << "2.Afisati vectorul" << endl;
		cout << "3.Afisati cea mai lunga secventa (problema 6)" << endl;
		cout << "4.Afisati cea mai lunga secventa (problema 8)" << endl;
		cout << "5.Iesire" << endl;
		cin >> option;
		switch (option)
		{
		case '1':
		{
			k = readData();
			readList(k, v);
			break;
		}
		case '2':
		{
			printList(k, v);
			break;
		}
		case '3':
		{
			int a, b, start, end;
			cout << "Cititi capetele intervalului"<<endl;
			cin >> a >> b;
			start = 0; end = 0;
			function1(k, v, a, b, start, end);
			printSequence(k, v, start, end);
			break;
		}
		case '4':
		{
			int start, end;
			start = 0; end = 0;
			function2(k, v, start, end);
			printSequence(k, v, start, end);
			break;
		}
		case '5':
		{
			ok = 0;
			break;
		}
		default:
			cout << "Variabila gresita! Reincercati!" << endl;
		}
	}
}