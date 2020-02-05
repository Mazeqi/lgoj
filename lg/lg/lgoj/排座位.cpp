//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//int main()
//{
//	int m, n, k, l,d;
//	int num[10000][4] = { 0 };
//	int out1[10000] = {0};
//	int out2[10000] = {0};
//	scanf("%d%d%d%d%d",&m,&n,&k,&l,&d);
//	for (int i = 0; i <d; i++)
//	{
//		for (int j = 0; j <4; j++)
//		{
//			scanf("%d",&num[i][j]);
//		}
//		if (num[i][1] == num[i][3])
//		{
//			if (num[i][0] > num[i][2])
//			{
//				out1[num[i][2]]++;
//			}
//			else
//			{
//				out1[num[i][0]]++ ;
//			}
//		}
//		else if (num[i][0] == num[i][2])
//		{
//			if (num[i][1] > num[i][3])
//			{
//				out2[num[i][3]]++ ;
//			}
//			else
//			{
//				out2[num[i][1]]++ ;
//			}
//		}
//	}
//
//	int top[10000] = { 0 };
//	//—°‘Ò≈≈–Ú
//	int size = 0;
//	for (int i = 1; i <=k; i++)
//	{
//		int t = i;
//		for (int j =1; j <=m; j++)
//		{
//			if (out1[t] < out1[j])
//			{
//				t = j;
//			}
//			
//		}
//		out1[t] = 0;
//		top[size++] =t;
//	
//	}
//	sort(top, top + k);
//	int top2[10000] = { 0 };
//	size = 0;
//	for (int i = 1; i <=l; i++)
//	{
//		int t = i;
//		for (int j =1; j <=n; j++)
//		{
//			if (out2[t] < out2[j])
//			{
//				t = j;
//			}
//		}
//		out2[t] = 0;
//	    top2[size++] =t;
//	
//	}
//	sort(top2, top2 +l);
//	for (int i = 0; i <k; i++)
//	{
//	
//		printf("%d ",top[i]);
//
//	}
//	printf("\n");
//	for (int i = 0; i < l; i++)
//	{
//	  printf("%d ",top2[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}