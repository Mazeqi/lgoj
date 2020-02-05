//#include<stdio.h>
//#include<stdlib.h>
//
//void selection_sort(int a[],int n)
//{
//	if (n == 0)
//	{
//		return;
//	}
//	int index = 0;//记住最大数的下标
//	for (int i = 1; i <= n; i++)
//	{
//		//一旦遇到最大数就记住他的下标
//		if (a[i] > a[index])
//		{
//			index = i;
//		}
//	}
//	//跟最后一个数交换
//	int temp = a[index];
//	a[index] = a[n];
//	a[n] = temp;
//
//	//递归调用
//	selection_sort(&a[0], n - 1);
//
//
//}
//
//int main()
//{
//	int a[10000];
//	int n;//输入多少个
//	printf("输入多少个整数 ： ");
//	scanf("%d",&n);
//	printf("请输入%d个整数 ：",n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	selection_sort(&a[0], n - 1);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ",a[i]);
//	}
//
//	system("pause");
//	return 0;
//}