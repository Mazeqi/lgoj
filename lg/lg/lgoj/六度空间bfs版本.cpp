//#include<cstdio>
//#include<string.h>
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int map[1001][1001] = { 0 };
//int vis[1001] = { 0 };
//void bfs(int i, int n,double *count){
//	int len = 6;
//	queue<int>que;
//	que.push(i);
//	vis[i] = 1;
//	int tail = -1;//当前层数的最后一个元素
//	int last = i;
//	while (que.empty() == false){
//		int vist = que.front();
//		que.pop();
//		for (int j = 1; j <= n; j++){
//			if (vis[j] == 0 && map[vist][j] == 1){
//				if (len >= 1){
//					(*count)++;
//				}
//				vis[j] = 1;
//				que.push(j);
//				tail = j;
//			}
//		}
//		//当last等于上一层的最后一个元素时，要更新last为当前层的最后一个元素
//		if (last == vist){
//			len--;
//			last = tail;
//		}
//	}
//
//}
//int main(){
//	int N, M;
//	int v, u;
//	while (scanf("%d%d", &N, &M) != EOF){
//		memset(vis, 0, sizeof(vis));
//		memset(map, 0, sizeof(map));
//		for (int i = 0; i < M; i++){
//			scanf("%d%d",&v,&u);
//			map[v][u] = map[u][v] = 1;
//		}
//		for (int i = 1; i <= N; i++){
//			double count = 1;
//			memset(vis, 0, sizeof(vis));
//			bfs(i, N,&count);
//			count = count / N;
//			printf("%d: %.2f%%\n",i,count*100);
//		}
//
//	}
//
//
//	system("pause");
//	return 0;
//}