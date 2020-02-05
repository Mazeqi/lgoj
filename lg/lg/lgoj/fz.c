//#include<stdio.h>
//int max(int A, int B, int C)
//{
//	return A > B ? A > C ? A : C : B > C ? B : C;
//}
//int Dividednum(int list[], int left, int right)
//{
//    /*
//	  递归要有终止的条件
//	*/
//	int Leftnum;
//	int rightnum;
//	if (left == right)
//	{
//		if (list[left] > 0)
//		{
//			return list[left];
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	int center = (left + right) / 2;
//
//	/*
//	  计算出左边最大的那个
//	*/
//	Leftnum=Dividednum(list, left, center);
//	rightnum=Dividednum(list, center + 1, right);
//
//	int LeftBordernum=0;
//	int maxLeftBordernum=0;
//
//	//这里由于是跨越的,所以应当从中间开始
//	for (int i = center; i>=left; i--)
//	{
//		LeftBordernum += list[i];
//		if (LeftBordernum > maxLeftBordernum)
//		{
//			maxLeftBordernum = LeftBordernum;
//		}
//	}
//
//	int RightBordernum=0;
//	int maxRightBordernum = 0;
//	for (int i = center + 1; i <= right; i++)
//	{
//		RightBordernum += list[i];
//		if (RightBordernum > maxRightBordernum)
//		{
//			maxRightBordernum = RightBordernum;
//		}
//	}
//
//	return max(Leftnum, rightnum,maxLeftBordernum+maxRightBordernum );
//}
//int main()
//{
//	int a[5] = { -1,1,2,3 };
//	int b=Dividednum(a, 0,3);
//	printf("%d",b);
//	system("pause");
//	return 0;
//}