//#include<cstdio>
//#include<string>
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int once[26] = { 0 };
//	int every[26] = { 0 };
//	int every2[26] = { 0 };
//	int siz = 0;
//	string s1, s2, s3;
//	cin >> s1 >> s2 >> s3;
//
//	if (s1.size() < 26)
//	{
//		printf("Failed\n");
//	}
//	else
//	{
//		for (int i = 0; i < s1.size(); i++)
//		{
//			if (every[s1[i] - 'A'] == 0 && once[s1[i] - 'A'] == 0&&every2[s2[i]-'A']==0)
//			{
//				every[s1[i] - 'A'] = s2[i];
//				once[s1[i] - 'A'] = 1;
//				every2[s2[i] - 'A'] = 1;
//				siz++;
//			}
//			else if (every[s1[i] - 'A'] != s2[i] && once[s1[i] - 'A'] != 0)
//			{
//				printf("Failed\n");
//				return 0;
//			}
//		}
//
//		if (siz != 26)
//		{
//			printf("Failed\n");
//		}
//		else
//		{
//			for (int i = 0; i < s3.size(); i++)
//			{
//				printf("%c",every[s3[i]-'A']);
//			}
//		}
//
//	}
//
//	
//
//	
//
//
//	system("pause");
//
//
//	return 0;
//}