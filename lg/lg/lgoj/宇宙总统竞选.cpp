//#include<cstdio>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
//struct presid
//{
//	char socre[105];
//	int len;
//	int ID;
//}p[25];
//bool cmp(struct presid a, struct presid b)
//{
//	if (a.len > b.len)
//	{
//		return 1;
//	}
//	if (a.len == b.len&&strcmp(a.socre, b.socre) > 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s",p[i].socre);
//		p[i].len = strlen(p[i].socre);
//		p[i].ID = i + 1;
//	}
//	sort(p, p + n, cmp);
//	printf("%d\n", p[0].ID);
//	printf("%s\n",p[0].socre);
//	system("pause");
//	return 0;
//}