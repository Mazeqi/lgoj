//#include<stdio.h>
//int qsort[1000001];
//int N;
//int main() 
//{
//	void quickSort(int left, int right);
//	scanf("%d",&N);
//	int i = 1;
//	while (i<=N)
//	{
//		scanf("%d",&qsort[i]);
//		i++;
//	}
//	quickSort(1, N);
//	i = 1;
//	while (i <= N)
//	{
//		printf("%d ", qsort[i]);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//
////以第一个为基准数会遇到大数据的时候可能会超时
//void quickSort(int left,int right)
//{
//	int i, j;
//	int temp;
//	//定位左右
//	i = left;
//	j = right;
//	temp = qsort[(left+right)/2];
//
//	while (i <= j)
//	{
//		while (temp < qsort[j])
//		{
//			j--;
//		}
//		while (temp > qsort[i])
//		{
//			i++;
//		}
//		//相同值也要交换,避免死循环
//		if (i <= j)
//		{
//			int t=qsort[i];
//			qsort[i] = qsort[j];
//			qsort[j] = t;
//			//此时的i,j已经处理过
//			i++;
//			j--;
//		}
//	}
//	if (j > left)
//	{
//		quickSort(left, j);
//	}
//	if (right > i)
//	{
//		quickSort(i, right);
//	}
//}