//#include<cstdio>
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
//struct person
//{
//	int score;
//	int ID;
//};
//struct person people[100000];
//bool comparsion(struct person a , struct person b)
//{
//	if (a.score > b.score)return 1;
//	else if (a.score == b.score)
//	{
//		if (a.ID < b.ID)return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d",&n,&m);
//	m = m * 1.5;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d",&people[i].ID,&people[i].score);
//	}
//	sort(people, people + n, comparsion);
//	
//	int scoreline = people[m- 1].score;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (people[i].score >= scoreline)
//			sum += 1;
//	}
//	printf("%d %d\n",scoreline,sum);
//	for (int i = 0; i<sum; i++)
//	{
//		printf("%d %d\n",people[i].ID,people[i].score);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}