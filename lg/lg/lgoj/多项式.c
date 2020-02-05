//#include <stdio.h>
//int main()
//{
//	int n;
//	int x[101] = {0};
//	scanf("%d",&n);
//	for (int i = 0; i <= n; i++)
//	{
//		scanf("%d",&x[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (x[i] >0)
//		{
//			if (i != 0)
//			{
//				if (x[i] == 1)
//				{
//					if (n - i != 1)
//					{
//						printf("+x^%d", n - i);
//					}
//					else
//					{
//						printf("+x");
//					}
//					
//				}
//				else
//				{
//					if (n - i != 1)
//					{
//						printf("+%dx^%d", x[i], n - i);
//					}
//					else
//					{
//						printf("+%dx", x[i]);
//					}
//					
//				}
//			}
//			else
//			{
//				if (x[i] == 1)
//				{
//					if (n - i != 1)
//					{
//						printf("x^%d", n - i);
//					}
//					else
//					{
//						printf("x");
//					}
//					
//				}
//				else
//				{
//					if (n - i != 1)
//					{
//						printf("%dx^%d", x[i], n - i);
//					}
//					else
//					{
//						printf("%dx", x[i]);
//					}
//					
//				}
//				
//			}
//		}
//		else if (x[i] < 0)
//		{
//			if (x[i] == -1)
//			{
//				if (n - i != 1)
//				{
//					printf("-x^%d", n - i);
//
//				}
//				else
//				{
//					printf("-x");
//				}
//				
//			}
//			else
//			{
//				if (n - i != 1)
//				{
//					printf("%dx^%d", x[i], n - i);
//				}
//				else
//				{
//					printf("%dx", x[i]);
//				}
//				
//			}
//			
//		}
//	}
//	if (x[n] > 0)
//	{
//		printf("+%d\n", x[n]);
//	}
//	else if (x[n] < 0)
//	{
//		printf("%d\n", x[n]);
//	}
//	
//	system("pause");
//	return 0;
//}