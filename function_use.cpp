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

	swaparr( arr1,  arr2);//���ֻ����arr1������ʽ��������arr1[]��arr1[1]������ʽ����Ϊ��������
	//�����ں����еĶ��岻���������и�������������ʽ
	//��arr1�����ǵ�ָ�����е�ĳ��ֵ

	system("pause");
	return 0;
}