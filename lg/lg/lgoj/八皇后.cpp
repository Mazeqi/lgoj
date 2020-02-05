//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//using namespace std;
//
////计算解的个数
//int sum = 0;

////n皇后
//int n = 0;

////输出前三种解法
//int out = 3;

////用来存放每一行的皇后
//int c[13];
//void search(int cur)
//{
//	//sum记录的是答对的次数
//	if (cur == n)
//	{
//		sum++;
//
//		if (out)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				printf("%d ",c[i]+1);
//			}
//			out--;
//			printf("\n");
//		}
//
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			int ok = 1;
//			//在对应的行的每一列尝试
//			c[cur] = i;
//			for (int j = 0; j < cur; j++)
//			{
//				//利用y=x 跟 y=-x 
//				if (c[cur] == c[j] || j - c[j] == cur - c[cur] || j + c[j] == cur + c[cur])
//				{
//					ok = 0;
//					break;
//				}
//			}
//			//如果经过循环后可以
//			if (ok)
//			{
//				search(cur + 1);
//			}
//
//		}
//	}
//}
//
//int vis[3][100] = {0};
//
//void searchb(int cur)
//{
//	if (cur == n) 
//	{
//		sum++;
//		if (out)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				printf("%d ", c[i] + 1);
//
//			}
//			out--;
//			printf("\n");
//		}
//	}
//	else
//	{
//		/*
//				判断		
//		*/
//		for (int i = 0; i < n; i++)
//		{
//			if (!vis[0][i] && !vis[1][cur + i] && !vis[2][cur - i + n])
//			{
//				c[cur] = i;
//				//用于将对角线跟所在的列做标记
//				vis[0][i] = vis[1][cur + i] = vis[2][cur - i + n] = 1;
//
//				searchb(cur + 1);
//
//				vis[0][i] = vis[1][cur + i] = vis[2][cur - i + n] = 0;
//
//			}
//		}
//	}
//}
//
//
//int main()
//{
//
//
//	scanf("%d",&n);
//
//	searchb(0);
//
//	printf("%d\n",sum);
//
//
//	system("pause");
//	return 0;
//}