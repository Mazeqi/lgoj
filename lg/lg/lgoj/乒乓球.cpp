//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	char score;
//	long a1[2] = { 0 };
//	long a2[10000][2] = { 0 };
//	long a3[10000][2] = { 0 };
//	long temp[2] = { 0 };
//
//	int i = 0;
//	int j = 0;
//	while ((score=getchar())!='E')
//	{
//		if (score == 'W')
//		{
//			a1[0]++;
//			//用来记录21分的
//			temp[0] ++;
//		}
//		else if(score=='L')
//		{
//			a1[1]++;
//			temp[1]++;
//		}
//		if ((a1[0] >= 11 || a1[1] >= 11) && abs(a1[0] - a1[1]) >= 2)
//		{
//			a2[i][0] = a1[0];
//			a2[i][1] = a1[1];
//			a1[0] = 0;
//			a1[1] = 0;
//			i++;
//		}
//		if ((temp[0] >= 21 || temp[1] >= 21) && abs(temp[0] - temp[1]) >= 2)
//		{
//			a3[j][0] = temp[0];
//			a3[j][1] = temp[1];
//			temp[0] = 0;
//			temp[1] = 0;
//			j++;
//		}
//	}
//	for (int a = 0; a < i; a++)
//	{
//		printf("%ld:%ld\n",a2[a][0],a2[a][1]);
//	}
//	printf("%ld:%ld\n",a1[0],a1[1]);
//	printf("\n");
//	for (int a = 0; a < j; a++)
//	{
//		printf("%ld:%ld\n",a3[a][0],a3[a][1]);
//	}
//	printf("%ld:%ld\n",temp[0],temp[1]);
//
//	system("pause");
//	return 0;
//}