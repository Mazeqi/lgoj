//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a[5] = { 10,3,1,11,8 };
//	int b[3] = { 8,6,7 };
//	int *p=NULL;
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = 0; j < 7-i; j++)
//		{
//			if (j < 4 )
//			{  
//				p = &a[j+1];
//				if (a[j] < *p)
//				{
//					int t = a[j];
//					a[j] = *p;
//					*p = t;
//				}
//			}
//			else if (j >= 4)
//			{
//				if (*p < b[j - 4])
//				{
//					int t = *p;
//					*p = b[j - 4];
//					b[j - 4] = t;
//				}
//				p = &b[j - 4];
//			}
//			
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ",a[i]);
//	}
//	for (int j = 0; j < 3; j++)
//	{
//		printf("%d ",b[j]);
//	}
//
//	system("pause");
//	return 0;
//}