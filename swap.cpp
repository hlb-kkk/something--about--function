#include "swap.h"//��Ҫ����ͷ�ļ����Զ���.h�ļ�������Ҫ��˫���š�

//��Ԫ�ؽ���
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}


//����Ԫ�ؽ���//������߸�����ָ�룬����������ָ�룬������һ����ַ����������ͨ��ֵ����
void swaparr(int arr1[], int arr2[])//���ע��[]�в�Ҫ��ֵ�����ֵ��main������ȥ��ȡ
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