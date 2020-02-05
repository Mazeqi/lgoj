//#include<stdio.h>
//#include<stdlib.h>
//
//typedef char AtomType;
//typedef enum{
//	ATOM,LIST
//}ElemTag;
//
//typedef struct GLNode{
//	ElemTag tag;//区分原子节点和表节点
//	union{
//		AtomType atom;//tag == atom时，本项有意义，存放原子节点值
//		struct { //tag == list时，本项有意义
//			struct GLNode *hp;
//			struct GLNode *tp;
//		}ptr;//表节点的指针域，其中ptr.hp指向表头；ptr.tp指向表尾
//	}un;
//
//}GLNode,*GList;//广义表
//
//GLNode *MakeAtom(AtomType e);	 	 //创建一个原子节点e
//void InitGList(GList &L);			 //创建一个空的广义表
////int DestroyGList(GList &L);		     //销毁一个广义表
////GList GetTail(GList L);				 //求广义表L的表尾
////GLNode *GetHead(GList L);			 //求广义表的表头
//int Append(GList &L, GLNode *p);	 //再广义表的末尾加入p元素
//int GListDepth1(GList ls);			 //求广义表的深度
//void InitGList(GList &L);
//int GListDepth2(GList ls);
//int GListLength1(GList L);			 //求广义表L的长度
//int GListLength2(GList L);
//void CreateB(GList &L);
//void CreateA(GList &L);
//GList GetTail(GList L);
//void OutAtom(GList A, int layer, void(*Out2)(char, int));
//void Out2(char atom,int layer);
//int main(){
//	GList L;
//	InitGList(L);
//	CreateA(L);
//	
//	GList L2;
//	InitGList(L2);
//	CreateB(L2);
//
//
//	system("pause");
//	return 0;
//}
//void Out2(char atom, int layer){
//	printf("\natom = %c  ",atom);
//	printf("layer = %d\n",layer);
//}
//void OutAtom(GList A, int layer, void(*Out2)(char, int))
///* 递归地用函数Out2输出广义表的原子及其所在层次,layer表示当前层次 */
//{
//
//	int relayer = layer;
//	if (A == NULL){
//		return;
//	}
//	if (A->tag == ATOM){
//		Out2(A->un.atom, layer);
//	}
//	else{
//		if (A->un.ptr.hp != NULL){
//			OutAtom(A->un.ptr.hp, ++layer, Out2);
//		}
//		if (A->un.ptr.tp != NULL){
//			OutAtom(A->un.ptr.tp, relayer, Out2);
//		}
//	}
//}
//GList GetTail(GList L){
//	//在广义表的表尾添加新的表节点，并将参数赋予p赋予其表头指针
//	GLNode *tail;
//
//	if (L == NULL)tail = NULL;
//	else{
//		//定位到最后一个节点
//		for (tail = L; tail->un.ptr.tp != NULL; tail = tail->un.ptr.tp);
//	}
//	return tail;
//}
//void CreateA(GList &L){
//	char lis[3] = { 'a', ' ', 'b' };
//	GLNode *p;
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		if (lis[i] != ' '){
//			p = MakeAtom(lis[i]);
//			Append(L, p);
//		}
//		else{
//			Append(L, NULL);
//		}
//	}
//	int depth1 = GListDepth1(L);
//	int depth2 = GListDepth2(L);
//	int len1 = GListLength1(L);
//	int len2 = GListLength2(L);
//	printf("测试1：\n");
//	printf("len1 = %d\n", len1);
//	printf("len2 = %d\n", len2);
//	printf("depth1 = %d\n", depth1);
//	printf("depth2 = %d\n", depth2);
//	int layer = 0;
//	OutAtom(L,layer, Out2);
//}
//void CreateB(GList &L){
//	char a = 'a';
//	char b = 'b';
//	GLNode *A = MakeAtom(a);
//	GLNode *B = MakeAtom(b);
//
//	Append(L, A);
//	Append(L, NULL);
//	GList tail = GetTail(L);
//	Append(tail->un.ptr.hp, NULL);
//	GList tail2 = tail->un.ptr.hp;
//	Append(tail2->un.ptr.hp, NULL);
//	GList tail3 = tail2->un.ptr.hp;
//	Append(tail3->un.ptr.hp, B);
//	
//
//	int depth1 = GListDepth1(L);
//	int depth2 = GListDepth2(L);
//	int len1 = GListLength1(L);
//	int len2 = GListLength2(L);
//	printf("\n测试2：\n");
//	printf("len1 = %d\n", len1);
//	printf("len2 = %d\n", len2);
//	printf("depth1 = %d\n", depth1);
//	printf("depth2 = %d\n", depth2);
//	int layer = 0;
//	OutAtom(L, layer, Out2);
//}
//GLNode *MakeAtom(AtomType e){
//	GLNode *p;
//	p = (GList)malloc(sizeof(GLNode));
//	if (p == NULL)return NULL;
//	p->tag = ATOM;
//	p->un.atom = e;
//	return p;
//}
//
//void InitGList(GList &L){
//	L = NULL;
//}
//int Append(GList &L, GLNode *p){
//	//在广义表的表尾添加新的表节点，并将参数赋予p赋予其表头指针
//	GLNode *pp;
//	GList tail;
//
//	tail = (GList)malloc(sizeof(GLNode));
//	if (NULL == tail)return -1;
//	tail->tag = LIST;
//	tail->un.ptr.hp = p;
//	tail->un.ptr.tp = NULL;
//	if (NULL == L) L = tail;
//	else{
//		for (pp = L; pp->un.ptr.tp != NULL; pp = pp->un.ptr.tp);
//		//定位到最后一个节点
//		pp->un.ptr.tp = tail;
//	}
//	return 1;
//
//}
//
//int GListDepth1(GList ls)
///* Return the depth of list */
//{
//	if (NULL == ls)return 1;
//	if (ATOM == ls->tag)return 0;
//	int max = 0;
//	int depth = 0;
//	GList p;
//	for ( p = ls; p != NULL; p = p->un.ptr.tp){
//		//表表分成若干个表，分别计算其深度
//		depth = GListDepth1(p->un.ptr.hp);
//		if (max < depth){
//			max = depth;
//		}
//	}
//	return max + 1;
//}
//
//int GListDepth2(GList ls)
///* Return the depth of list */
//{
//	//第二种解法
//	int h1, h2;
//	if (NULL == ls)return 1;
//	if (ATOM == ls->tag)return 0;
//	//计算表头的深度
//	h1 = GListDepth2(ls->un.ptr.hp) + 1;
//	//表尾的深度 表尾深度 = 当前表的深度
//	h2 = GListDepth2(ls->un.ptr.tp);
//	return h1 >= h2 ? h1 : h2;
//}
//
//int GListLength1(GList L){
//	int len;
//	if (NULL == L)len = 0;
//	else if (NULL == L->un.ptr.tp)len = 1;
//	else len = 1 + GListLength1(L->un.ptr.tp);
//	return len;
//}
//int GListLength2(GList L){
//	int len = 0;
//	GLNode *p;
//	if (NULL == L)return 0;
//	for (len = 1, p = L->un.ptr.tp; p != NULL; p = p->un.ptr.tp)len++;
//	return len;
//}