//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//
//	int left, right, mid;
//
//	left = 0;
//	right = 4;
//	int search = 5;
//	while (left <= right)
//	{
//		mid = (int)(left + 0.618*(right - left));
//		if (a[mid] > search)
//		{
//			right = mid;
//		}
//		else if (a[mid] < search)
//		{
//			left = mid;
//		}
//		else
//		{
//			printf("%d",mid);
//			break;
//		}
//	}
//	system("pause");
//
//	return 0;
//}