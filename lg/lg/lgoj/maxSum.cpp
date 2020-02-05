//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	int K;
//	scanf("%d",&K);
//	int N[100001];
//	for (int i = 0; i < K; i++)
//	{
//		scanf("%d",&N[i]);
//	}
//	int ThisSum=0, MaxSum=0;
//	for (int i = 0; i < K; i++)
//	{
//		ThisSum += N[i];
//		if (ThisSum > MaxSum)
//		{
//			MaxSum = ThisSum;
//		}
//		else if (ThisSum < 0)
//		{
//			ThisSum = 0;
//		}
//	}
//	printf("%d\n",MaxSum);
//	system("pause");
//	return 0;
//}