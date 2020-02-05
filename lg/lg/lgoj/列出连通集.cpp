//#include<algorithm>
//#include<cstdio>
//#include<iostream>
//#include<queue>
//#include<string.h>
//
//using namespace std;
//queue<int>que;
//int vistag[100] = { 0 };
//int map[100][100] = { 0 };
//
//void dfs(int i, int n){
//	printf(" %d",i);
//	vistag[i] = 1;
//	for (int j = 0; j < n; j++){
//		if (vistag[j] == 0 && map[i][j]){
//			dfs(j, n);
//		}
//	}
//}
//
//void bfs(int i, int n){
//	
//	vistag[i] = 1;
//	que.push(i);
//	while (que.empty() == false){
//		int vis = que.front();
//		printf(" %d",vis);
//		que.pop();
//		for (int j = 0; j < n; j++){
//			if (vistag[j] == 0 && map[i][j]){
//				vistag[j] = 1;
//				que.push(j);
//			}
//		}
//	}
//	
//}
//int main(){
//	int N, E;
//	int v, u;
//	while (scanf("%d%d", &N, &E) != EOF){
//		memset(vistag, 0, sizeof(vistag));
//		memset(map, 0, sizeof(map));
//
//		for (int i = 0; i < E; i++){
//			scanf("%d%d", &v, &u);
//			map[v][u] = 1;
//			map[u][v] = 1;
//		}
//		for (int i = 0; i < N; i++){
//			if (vistag[i] == 0){
//				printf("{");
//				dfs(i, N);
//				printf(" }\n");
//			}
//		}
//		memset(vistag, 0, sizeof(vistag));
//		for (int i = 0; i < N; i++){
//			if (vistag[i] == 0){
//				printf("{");
//				bfs(i, N);
//				printf(" }\n");
//			}
//		}
//
//	}
//	system("pause");
//	return 0;
//}
//	