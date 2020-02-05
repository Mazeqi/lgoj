//#include<cstdio>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//struct person
//{
//	int id;
//	int score1;
//	int score2;
//	int score3;
//	int sum;
//}peo[10000];
//int cmp(struct person a, struct person b)
//{
//	if (a.sum > b.sum)
//	{
//		return 1;
//	}
//	else if (a.sum == b.sum)
//	{
//		if (a.score1 > b.score1)
//		{
//			return 1;
//		}
//		else if (a.score1 == b.score1)
//		{
//			if (a.id < b.id)
//			{
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		peo[i].id = i;
//		cin >> peo[i].score1 >> peo[i].score2 >> peo[i].score3;
//		peo[i].sum = peo[i].score1 + peo[i].score2 + peo[i].score3;
//	}
//	sort(peo + 1, peo + 1 + n, cmp);
//	for (int i = 1; i <= 5; i++)
//	{
//		cout << peo[i].id << " " << peo[i].sum << endl;
//	}
//	system("pause");
//	return 0;
//}