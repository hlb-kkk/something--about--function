#include "swap.h"//需要引用头文件，自定义.h文件引用需要用双引号。

//单元素交换
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}


//数组元素交换//数组这边给的是指针，类似于数组指针，给的是一个地址，不能用普通的值索引
void swaparr(int arr1[], int arr2[])//这边注意[]中不要给值，这个值从main函数中去获取
{
	for (int i = 0; i < 5; i++)
	{
		int temp = 0;
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}

	for (int j = 0; j < 5; j++)
	{
		cout << arr1[j] << " "; 
	
	}
	cout << endl;

	for (int u = 0; u < 5; u++)
	{
		cout << arr2[u] <<" ";
	}
	cout << endl;

}