#include <iostream>
using namespace std;
int readData()
{
	int n;
	cin >> n;
	return n;
}
void readList(int n, int v[])
{
	int i;
	for (i = 0; i < n; i++)
		cin >> v[i];
}
void printList(int n, int v[])
{
	int i;
	for (i = 0; i < n; i++)
		cout << v[i] << " ";
	cout << endl;
}

void printSequence(int n, int v[], int start, int end)
{
	int i;
	for (i = start; i <= end; i++)
		cout << v[i] << " ";
	cout << endl;
}