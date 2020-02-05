//#include<stdio.h>
//#include<stdlib.h>
//
//#define OK 1
//#define ERROR 0
//#define TRUE 1
//#define FALSE 0
//#define OVERFLOW 0
//typedef int Status;
//
//typedef char ElemType;
//
//typedef struct LNode {
//	ElemType data;     // 数据域
//	struct LNode *next;     // 指针域
//} LNode, *LinkList;
//LinkList  L; // L 为单链表的头指针
////
//
//Status InitList_L(LinkList &L) { // 初始化一个只含头结点的空单链表L
//	if (NULL == (L = (LNode*)malloc(sizeof(struct LNode)))) // 生成新结点
//		return OVERFLOW;
//	L->next = NULL;
//	return OK;
//}
///*
//Status ClearList_L(LinkList &L){
//	// 将单链表Ｌ重置为空表
//	LNode *p = NULL;
//	LNode *head = L->next;
//	while (head){
//		p = head;
//		head = head->next;
//		free(p);
//	}
//	return OK;
//}
//Status DestroyList_L(LinkList  &L){  // 销毁单链表L 
//	ClearList_L(L);
//	free(L);
//	L = NULL;
//	return OK;
//}
//*/
//
//
//int ListLength_L(LinkList L){ // 求单链表L的表长
//	LinkList p = L->next;
//	int len = 0;
//	while (p != NULL){
//		len++;
//		p = p->next;
//	}
//	return len;
//}
//int ListLength_L1(LinkList L){ // 求不带头结点单链表L的表长
//	LinkList p = L;
//	int len = 0;
//	while (p != NULL){
//		len++;
//		p = p->next;
//	}
//	return len;
//}
//
//LNode* MakeNode_L(ElemType e) { // 构造数据域为e的单链表结点
//	LNode *p;
//	p = (LNode*)malloc(sizeof(struct LNode)); // 分配结点空间
//	if (p != NULL) p->data = e;
//	p->next = NULL;
//	return p;
//}
//
//LNode* Search_L(LinkList L, ElemType e) {
//	LNode *p;
//	if (NULL == L->next) return NULL; // L是空表
//	p = L->next;
//	while (p->data != e && p->next != NULL) p = p->next; // 查找值为e的结点
//	if (p->data == e) return p;
//	return NULL; //未找到
//}
//
//LNode* NextElem_L(LNode *p) {  // 返回指向p结点的后继结点指针
//	if (NULL == p->next) return NULL;
//	return p->next;
//}
//
//Status InsertAfter_L(LNode *p, LNode *q) {  // 在p结点之后插入q结点
//	if (NULL == p || NULL == q) return ERROR;  // 参数不合理
//	q->next = p->next;    // 修改q结点的指针域
//	p->next = q;            //  修改p结点的指针域
//	return OK;
//}
//
//Status DeleteAfter_L(LNode *p, ElemType &e) {
//	LNode *q;
//	if (NULL == p || NULL == p->next) return ERROR;
//	q = p->next;   p->next = q->next;   e = q->data;
//	free(q);
//	return OK;
//}
//
//Status CreatList_L(LinkList &L, int n, ElemType *A) {
//	// 建立一个长度为n的单链表，数组A[]提供n个元素值,这里用了头插法
//	LNode *p = NULL;
//	//InitList_L(L);
//	for (int i = 0; i < n; i++){
//		p = MakeNode_L(A[i]);
//		InsertAfter_L(L,p);
//	}
//	return OK;
//
//}
//Status EnFirst_L(LinkList &L, ElemType e) {
//	//完成功能：带头结点单链表中 插入首元素
//	if (L == NULL){
//		return ERROR;
//	}
//	LNode *node = MakeNode_L(e);
//	InsertAfter_L(L,node);
//}
//Status DelFirst_L(LinkList &L, ElemType &e) {
//	//完成功能：带头结点单链表中 删除首元素
//	if (L == NULL || L->next == NULL){
//		return ERROR;
//	}
//	LNode *p = L->next;
//	L->next = L->next->next;
//	free(p);
//	return OK;
//}
//Status CreatList_L1(LinkList &L, int n, ElemType *A) {
//	// 建立一个长度为n的单链表，数组A[]提供n个元素值,这里用了头插法
//	LNode *p = NULL;
//	InitList_L(L);
//	L->data = A[0];
//	for (int i = 1; i < n; i++){
//		p = MakeNode_L(A[i]);
//		InsertAfter_L(L, p);
//	}
//	return OK;
//}
//Status EnFirst_L1(LinkList &L, ElemType e) {
//	//完成功能：不带头结点单链表 插入首元素
//	LNode *node = NULL;
//	node = MakeNode_L(e);
//	node->next = L;
//	L = node;
//	return OK;
//}
//Status DelFirst_L1(LinkList &L, ElemType &e) {
//	//完成功能：不带头结点单链表 删除首元素
//	LNode *head = L;
//	L = L->next;
//	e = head->data;
//	free(head);
//	return OK;
//
//}
//
//Status  printElement(ElemType e){//打印元素
//	printf("%c ", e);
//	return OK;
//}
//
//
//void ListTraverse_L(LinkList L, Status(*visit)(ElemType e)){
//	// 遍历单链表L 
//	LNode *p;
//	p = L->next;
//	while (p != NULL) {
//		visit(p->data);
//		p = p->next;
//	}
//}
//void ListTraverse_L1(LinkList L, Status(*visit)(ElemType e)){
//	// 遍历不带头结点的单链表L 
//	LNode *p;
//	p = L;
//	while (p != NULL) {
//		visit(p->data);
//		p = p->next;
//	}
//}
//
//void main(){
//	ElemType e;
//	InitList_L(L);
//	char A[] = { 'D', 'C', 'A', 'F', 'E' };
//	//构造带头结点的单链表L
//	CreatList_L(L, 5, A);
//	printf("%d ", ListLength_L(L));
//	//完成操作并测试：带头结点单链表 插入首元素 （值为 T）
//	printf("\n插入前：\n");
//	ListTraverse_L(L, printElement);
//	EnFirst_L(L, 'T');
//	printf("\n插入后：\n");
//	ListTraverse_L(L, printElement);
//	//DestroyList_L(L);
//	//完成操作并测试测试：带头结点单链表 删除首元素
//	DelFirst_L(L, e);
//	printf("\n删除后：\n");
//	ListTraverse_L(L, printElement);
//
//	//构造不带头结点的单链表L
//	printf("\n\n不带头结点：");
//	CreatList_L1(L, 5, A);
//	printf("\n%d ", ListLength_L1(L));
//
//	//完成操作并测试：不带头结点单链表 插入首元素 （值为 T）
//	printf("\n插入前：\n");
//	ListTraverse_L1(L, printElement);
//	EnFirst_L1(L, 'T');
//	printf("\n插入后：\n");
//	ListTraverse_L1(L, printElement);
//	//完成操作并测试测试：不带头结点单链表 删除首元素
//	//DestroyList_L(L);
//	DelFirst_L1(L, e);
//	printf("\n删除后：\n");
//	ListTraverse_L1(L, printElement);
//
//
//	LNode *p;
//	p = Search_L(L, 'A');
//	printf("\n查找结果：%c ", p->data);
//	system("pause");
//}
