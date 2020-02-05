//#include<iostream>
//#include<string>
//using namespace std;
//int money(int score, int classcore, bool sci, bool western, bool classeb)
//{
//	int mon = 0;
//	if (score > 80 && sci)mon += 8000;
//	if (score > 85 && classcore > 80)mon += 4000;
//	if (score > 90)mon += 2000;
//	if (score > 85 && western)mon += 1000;
//	if (classcore > 80 && classeb)mon += 850;
//
//	return mon;
//}
//
//
//int main()
//{
//	int N;
//	scanf("%d",&N);
//	string name[101];
//	int sci, score, classcore;
//	char classeb, western;
//	int stu[101] = {0};
//	int max = 0;
//	int sum = 0;
//	int id;
//	for (int i = 1; i <= N; i++)
//	{
//		cin>>name[i]>>score>>classcore>>classeb>>western>>sci;
//		stu[i] = money(score,classcore,sci>=1,western=='Y',classeb=='Y');
//		sum += stu[i];
//		if (stu[i] > max)
//		{
//			max = stu[i];
//			id = i;
//		}
//	}
//	cout <<name[id]<<"\n"<< stu[id]<<endl << sum <<endl;
//	
//	
//	system("pause");
//	return 0;
//}