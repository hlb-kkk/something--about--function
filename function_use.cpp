#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include "swap.h"

using namespace std;

int main()
{
	int a = 23;
	int b = 45;

	swap(a, b);


	int arr1[5] = { 0,1,2,3,4 };
	int arr2[5] = { 5,6,7,8,9 };

	swaparr( arr1,  arr2);//这边只能用arr1这种形式，不能用arr1[]或arr1[1]这种形式，因为这样会与
	//我们在函数中的定义不符，函数中给参数是数组形式
	//而arr1这种是单指数组中的某个值

	system("pause");
	return 0;
}