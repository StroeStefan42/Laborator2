#include <iostream>
#include <assert.h>
#include "functions.h"
using namespace std;
void test()
{
	int v2[] = { 2,4,-3,5,-6,-7,8 };
	int start2 = 0, end2 = 0;
	function2(7, v2, start2, end2);
	assert(start2 == 1);
	assert(end2 == 4);
	cout<< "Au rulat testele pentru functia 2" << endl;

	int v1[] = { -15,4,-1,-5,8,0,-1,6,-12 };
	int start = 0, end = 0, a=-4,b=7;
	function1(9, v1, a, b, start, end);
	assert(start == 5);
	assert(end == 7);
	cout << "Au rulat testele pentru functia 1"<<endl;
}