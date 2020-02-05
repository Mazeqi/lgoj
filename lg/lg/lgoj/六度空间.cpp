//#include<cstdio>
//#include<algorithm>
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//int vis[1001] = { 0 };
////int num[100] = { 0 };//存放每个点距离不超过六的节点数量
//int map[1001][1001] = { 0 };
//void dfs(int i, int n,int len,double *count){
//	if (len == 0)return;
//	vis[i] = 1;
//	len--;
//	for (int j = 1; j <= n; j++){
//		if (vis[j] == 0 && map[i][j] == 1){
//			if (len >= 1){
//				(*count)++;
//			}
//			dfs(j, n,len,count);
//		}
//	}
//}
//int main(){
//	int N, M;
//	int v, u;//两个相连接的点
//	
//	while (scanf("%d%d", &N, &M) != EOF){
//		memset(vis, 0, sizeof(vis));
//		memset(map, 0, sizeof(map));
//		//memset(num, 0, sizeof(num));
//		for (int i = 0; i < M; i++){
//			scanf("%d%d",&v,&u);
//			map[v][u] = map[u][v] = 1;
//		}
//		for (int i = 1; i <= N; i++){
//			int len = 7;
//			double count = 1;
//			memset(vis, 0, sizeof(vis));
//			dfs(i, N, len,&count);
//
//			count = count / N;
//			printf("%d: %.2f%%\n",i,count*100);
//		}
//		
//	}
//
//	system("pause");
//	return 0;
//}