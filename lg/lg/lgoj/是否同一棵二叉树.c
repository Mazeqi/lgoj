//#include<stdio.h>
//#include<stdlib.h>
//
////定义二叉搜索树
//typedef struct TreeNode *Tree;
//struct TreeNode {
//	int v;
//	Tree Left, Right;
//	int flag;//flag用来判断是否已经遍历过
//};
//int check(Tree T,int V)
//{
//	//首先得判断当前节点是否已经被遍历过，才可以向左向右
//	if (T->flag)
//	{
//		if (V > T->v)return check(T->Right, V);
//		else if (V < T->v)return check(T->Left, V);
//		else return 0;//如果当前节点已经遍历过，且还有相等的则说明出现了问题
//	}
//	
//	else
//	{
//		if (T->v == V)
//		{
//			T->flag = 1;
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//
//	}
//}
//Tree NewNode(int V)
//{
//	Tree T = (Tree)malloc(sizeof(struct TreeNode));
//	T->v = V;
//	T->Left = T->Right = NULL;
//	T->flag = 0;
//	return T;
//}
//
//Tree Insert(Tree T, int V)
//{
//	if (!T)T = NewNode(V);
//	else
//	{
//		if (V > T->v)
//			T->Right = Insert(T->Right, V);
//		else
//			T->Left = Insert(T->Left, V);
//	}
//	return T;
//}
//void ResetT(Tree T)
//{
//	if (T->Left)ResetT(T->Left);
//	if (T->Right)ResetT(T->Right);
//	T->flag = 0;
//}
//void FreeTree(Tree T)
//{
//	if (T->Left)FreeTree(T->Left);
//	if (T->Right)FreeTree(T->Right);
//	free(T);
//}
//
//
//Tree MakeTree(int N)
//{
//	Tree T;
//	int i, V;
//
//	scanf("%d",&V);
//	T = NewNode(V);
//	for (i = 1; i < N; i++)
//	{
//		scanf("%d",&V);
//		T = Insert(T, V);
//	}
//	return T;
//
//}
////插入节点
//
//int Judge(Tree T, int N)
//{
//	int i, V, flag = 0;//flag 表面还未遍历
//
//	scanf("%d", &V);
//	if (V != T->v)flag = 1;
//	else T->flag = 1;
//
//	for (i = 1; i < N; i++)
//	{
//		scanf("%d", &V);
//		if ((!flag) && (!check(T, V)))flag = 1;
//	}
//	if (flag)return 0;
//	else return 1;
//
//}
//
//
//
//
//int main()
//{
//	int N, L, i;
//	Tree T;
//
//	scanf("%d",&N);
//	while (N)
//	{
//		scanf("%d",&L);
//		T = MakeTree(N);
//		for (i = 0; i < L; i++)
//		{
//			if (Judge(T, N))printf("Yes\n");
//			else printf("No\n");
//			ResetT(T);
//		}
//		FreeTree(T);
//		scanf("%d",&N);
//	}
//	system("pause");
//	return 0;
//}