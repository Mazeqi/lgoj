//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//int main()
//{
//	int p1, p2, p3;
//	int i = 0;
//	char ch[300];
//	scanf("%d%d%d%s",&p1,&p2,&p3,ch);
//	while (ch[i])
//	{
//	
//			if (ch[i]=='-'&&ch[i + 1]>ch[i-1]&&((ch[i+1]<='z'&&ch[i-1]>='a')||(ch[i+1]<='9'&&ch[i-1]>='0')))
//			{
//				if (ch[i - 1] >= 'a')
//				{
//					if (p1 == 1)
//					{
//						for (char c = (p3 == 1) ? ch[i - 1] + 1 : ch[i + 1] - 1; p3 == 1 ? c<ch[i + 1] : c>ch[i - 1]; p3 == 1 ? c++ : c--)
//						{
//							for (int j = 0; j < p2; j++)
//							{
//								printf("%c", c);
//							}
//						}
//					}
//					else if (p1 == 2)
//					{
//
//						for (char c = (p3 == 1 ? ch[i - 1] - 32 + 1 : ch[i + 1] - 32 - 1); p3 == 1 ? c < ch[i + 1] - 32 : c>ch[i - 1] - 32; p3 == 1 ? c++ : c--)
//						{
//							for (int j = 0; j < p2; j++)
//							{
//								printf("%c", c);
//							}
//						}
//
//					}
//					else
//					{
//
//						for (char c = ch[i - 1] + 1; c < ch[i + 1]; c++)
//						{
//							for (int j = 0; j < p2; j++)
//							{
//								printf("*");
//							}
//						}
//					}
//				}
//				else
//				{
//					if (p1 == 3)
//					{
//						for (char c = ch[i - 1] + 1; c < ch[i + 1]; c++)
//						{
//							for (int j = 0; j < p2; j++)
//							{
//								printf("*");
//							}
//						}
//					}
//					else
//					{
//						for (char c = ch[i - 1] + 1; c < ch[i + 1]; c++)
//						{
//							for (int j = 0; j < p2; j++)
//							{
//								printf("%c",c);
//							}
//						}
//					}
//				}
//			}
//	       else
//		   {
//			  printf("%c",ch[i]);
//		   }
//		i++;
//	}
//
//	system("pause");
//	return 0;
//}