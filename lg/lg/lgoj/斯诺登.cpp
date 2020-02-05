//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<cstring>
//
//using namespace std;
//
//unsigned long long int a[11];
//
//char num[30][20] = { "zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty","a","both","another","first","second","third" };
//
//int atoin[30] = { 0,1,4,9,16,25,36,49,64,81,00,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9 };
//
//char obama[100];
//int main()
//{
//	int top = 0;
//
//	for (int i = 1; i <= 6; i++)
//	{
//		scanf("%s",obama);
//
//		for (int j = 1; j <=26; j++)
//		{
//			if (strcmp(num[j], obama) == 0)
//			{
//				a[top++]=atoin[j];
//				break;
//			}
//		}
//	}
//	sort(a,a+top);
//	int flag = 0;
//	for (int i = 0; i < top; i++)
//	{
//		if (flag)
//		{
//			printf("%.2d",a[i]);
//		}
//		else
//		{
//			if (a[i] != 0)
//			{
//				printf("%d",a[i]);
//				flag = 1;
//			}
//		}
//
//	}
//
//	//È«¶¼ÊÇ0
//	if (flag == 0)
//	{
//		printf("0");
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}