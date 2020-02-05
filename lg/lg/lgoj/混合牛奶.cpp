//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//typedef struct milk
//{
//	int pi;
//	int Ai;
//}Node;
//
//Node cattle[5001];
//
//int cmp(Node a, Node b)
//{
//	if (a.pi == b.pi)
//	{
//		return a.Ai > b.Ai;
//	}
//	return a.pi < b.pi;
//}
//int main()
//{
//	int N,M;
//	scanf("%d%d",&N,&M);
//
//	for (int i = 1; i <= M; i++)
//	{
//		scanf("%d%d",&cattle[i].pi,&cattle[i].Ai);
//	}
//	sort(cattle + 1, cattle + M + 1, cmp);
//
//	int sum = 0;
//	int money=0;
//	int i = 0;
//	while (sum < N)
//	{
//		if (cattle[i].Ai != 0)
//		{
//			sum += 1;
//			cattle[i].Ai--;
//			money+=cattle[i].pi;
//		}
//		else
//		{
//			i++;
//		}
//		
//	}
//	printf("%d\n",money);
//
//	system("pause");
//	return 0;
//}