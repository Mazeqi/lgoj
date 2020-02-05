//#include<algorithm>
//#include<cstdio>
//#include<iostream>
//
//using namespace std;
//
//typedef struct person
//{
//	int num;
//	int score;
//}Node;
//
//Node people[200001];
//
////A和B用来归并排序,A存放的是加过分的，B存放的是没有加过分的，都是排好序的
//Node A[100001];
//Node B[100001];
//
//
////每个人的实力
//int w[200001];
//
////2N个人  R轮比赛  我们关心的名词Q
//int N, R, Q;
//
////排序函数
//int cmp(Node a,Node b)
//{
//	if (a.score == b.score)
//	{
//		return a.num < b.num;
//	}
//	return a.score > b.score;
//}
//
//void Merge()
//{
//	int i = 1, j = 1, k = 1;
//	while (i <= N && j <= N)
//	{
//		if (cmp(A[i], B[j]))
//		{
//			people[k].num = A[i].num;
//			people[k].score = A[i].score;
//			k++;
//			i++;
//		}
//		else
//		{
//			people[k].num = B[j].num;
//			people[k].score = B[j].score;
//			k++;
//			j++;
//		}
//	}
//	while (i <= N)
//	{
//		people[k].num = A[i].num;
//		people[k].score = A[i].score;
//		k++;
//		i++;
//	}
//	while (j <= N)
//	{
//		people[k].num = B[j].num;
//		people[k].score = B[j].score;
//		k++;
//		j++;
//	}
//}
//
//int main()
//{
//	
//	scanf("%d%d%d",&N,&R,&Q);
//	
//	for (int i = 1; i <= 2 * N; i++)
//	{
//		scanf("%d",&people[i].score);
//		people[i].num = i;
//	}
//	for (int i = 1; i <= 2 * N; i++)
//	{
//		scanf("%d", &w[i]);
//	}
//	//快排一次，使得所有数据都有序，便于后边归并
//	sort(people + 1, people + 1 + 2 * N,cmp);
//	
//	for (int i = 1; i <= R; i++)
//	{
//		int tt = 1;
//		for (int j = 1; j <= 2 * N; j += 2)
//		{
//			if (w[people[j].num] > w[people[j + 1].num])
//			{
//				A[tt].score = people[j].score + 1;
//				A[tt].num = people[j].num;
//				B[tt].score = people[j+1].score;
//				B[tt].num = people[j+1].num;
//				tt++;
//			}
//			else
//			{
//				A[tt].score = people[j+1].score + 1;
//				A[tt].num = people[j+1].num;
//				B[tt].score = people[j].score;
//				B[tt].num = people[j].num;
//				tt++;
//			}
//		}
//		//归并排序
//		Merge();
//	}
//	printf("%d\n",people[Q].num);
//	system("pause");
//
//
//	return 0;
//}