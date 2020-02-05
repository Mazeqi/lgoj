//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int Adigit[1000000];
//int main()
//{
//	int n;
//	scanf("%d",&n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d",&Adigit[i]);
//	}
//	sort(Adigit+1, Adigit +n+1);
//	int sample = -1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (sample!=Adigit[i])
//		{
//			sum++;
//			sample = Adigit[i];
//		}
//	}
//	printf("%d\n",sum);
//	sample = -1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (sample != Adigit[i])
//		{
//			sample = Adigit[i]; 
//			printf("%d ",Adigit[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}