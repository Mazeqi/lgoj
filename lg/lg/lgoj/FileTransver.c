//#include<stdio.h>
//#include<stdlib.h>
//
//#define MaxSize 1000
//
//typedef int ElementType;
//typedef int SetName;//默认用根节点的下标作为集合名名称
//typedef ElementType SetType[MaxSize];
//
//void Initialization(SetType S,int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		S[i] = 0;
//	}
//}
//
////找到根
//int Find(SetType S, int x)
//{
//	
//	if (S[x] < 0)
//	{
//		return x;
//	}
//	else
//		return S[x] = Find(S, S[x]);
//}
//
////并集
//int Union(SetType S,int root1, int root2)
//{
//	//根上的数是负数，用于记录树的长度
//	if (S[root1] < S[root2])
//	{
//		S[root2] = root1;
//	}
//	else
//	{
//		if (S[root1]==S[root2])S[root2]--;
//
//		S[root1] = root2;
//	}
//}
//
//void Input_connection(SetType S)
//{
//	int c1, c2;
//	scanf("%d %d\n",&c1,&c2);
//
//	int root1, root2;
//	//查询要插入的数是否在树中
//	root1 = Find(S, c1-1);
//	root2 = Find(S, c2-1);
//
//	if (root1 != root2)
//	{
//		Union(S, root1, root2);
//	}
//}
//
//void Check_connection(SetType S)
//{
//	int c1, c2;
//	scanf("%d %d\n", &c1, &c2);
//
//	int root1 = Find(S, c1-1);
//	int root2 = Find(S, c2-1);
//
//	if (root1 != root2)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("yes\n");
//	}
//}
////查询网络
//void Check_network(SetType S, int n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (S[i] < 0)
//		{
//			sum++;
//		}
//	}
//	if (sum == 1)
//	{
//		printf("The network is connected.\n");
//	}
//	else
//	{
//		printf("There are %d components.\n",sum);
//	}
//}
//
//
//int main()
//{
//	SetType S;
//	int n;
//	char in;
//	scanf("%d\n",&n);
//	Initialization(S, n);
//	do {
//		scanf("%c",&in);
//		switch (in)
//		{
//			case 'I':Input_connection(S); break;
//			case 'C':Check_connection(S); break;
//			case 'S':Check_network(S, n); break;
//		}
//	} while (in != 'S');
//
//	system("pause");
//	return 0;
//}