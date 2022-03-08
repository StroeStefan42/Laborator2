#include <iostream>
#include "console.h"
using namespace std;
void function1(int n, int v[], int a, int b, int& start, int& end)
{
	int i, secvi, secvmax, secv;
	secvmax = 0;
	secv = 0;
    secvi = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] >= a and v[i] <= b)
        {
            secv++;
        }
        if (secv > secvmax)
        {
            secvmax = secv;
            secvi = i;
        }
        if (v[i]<a or v[i]>b)
        {
            secv = 0;
        }
    }
    start = secvi - secvmax + 1;
    end = secvi;
}

void function2(int n, int v[], int& start, int& end)
{
    int i, secvi, secvmax, secv;
    secvmax = 0;
    secv = 0;
    secvi = 0;
    for (i = 0; i < n - 2; i++)
    {
        if (v[i] * v[i + 1] < 0 and v[i + 1] * v[i + 2] < 0)
        {
            secv++;
        }
        if (v[i] * v[i + 1] >= 0 or v[i + 1] * v[i + 2] >= 0)
        {
            secv = 0;
        }
        if (secv > secvmax)
        {
            secvi = i + 2;
            secvmax = secv;
        }
    }
    start = secvi - 1 - secvmax;
    end = secvi;
}