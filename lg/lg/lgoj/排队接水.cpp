//#include<cstdio>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
//struct person
//{
//	int Ti;
//	int num;
//}people[1001];
//int cmp(struct person a, struct person b)
//{
//	return a.Ti < b.Ti;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d",&people[i].Ti);
//		people[i].num = i;
//	}
//	double time = 0;
//	sort(people + 1, people + 1 + n,cmp);
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%d ",people[i].num);
//	}
//	printf("\n");
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i - 1; j++)
//		{
//			time += people[j].Ti;
//		}
//	}
//	printf("%0.2lf\n",time/n);
//	system("pause");
//	return 0;
//}