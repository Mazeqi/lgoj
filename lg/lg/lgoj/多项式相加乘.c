//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct PolyNode *Polyminal;
//struct PolyNode
//{
//	int coe;//系数
//	int index;//指数
//	Polyminal next;
//};
//
////插入值
//void Attach(int c, int e, Polyminal *rear)
//{
//	if (rear == NULL)
//	{
//		return;
//	}
//	else
//	{
//		Polyminal node = (Polyminal)malloc(sizeof(struct PolyNode));
//		node->coe = c;
//		node->index = e;
//		node->next = NULL;
//		(*rear)->next = node;
//		*rear = node;
//	}
//}
////构造多项式
//Polyminal setPoly()
//{
//	int N;
//	scanf("%d",&N);
//	int c,e;
//	
//	Polyminal rear,p,t;
//	p=rear = (Polyminal)malloc(sizeof(struct PolyNode));
//	rear->next = NULL;
//
//	if (N == 0)
//	{
//		return NULL;
//	}
//	else
//	{
//		while (N--)
//		{
//			scanf("%d",&c);
//			scanf("%d",&e);
//			Attach(c, e, &rear);
//		}
//	}
//	t = p;
//	p = p->next;
//	free(t);
//	return p;
//	
//}
//
///*
//  比较两个多项式的指数，分三种情况
//*/
//int compare(Polyminal p1,Polyminal p2)
//{
//	if (p1->index > p2->index)
//	{
//		return 1;
//	}
//	else if (p1->index<p2->index)
//	{
//		return -1;
//	}
//	else if (p1->index == p2->index)
//	{
//		return 0;
//	}
//
//}
//Polyminal add(Polyminal p1, Polyminal p2)
//{
//	
//	//这里用了哑节点
//	Polyminal p, rear;
//	p = (Polyminal)malloc(sizeof(struct PolyNode));
//	p->next = NULL;
//	rear = p;
//
//	//对p1,p2进行一项一项地插入到p中去
//	while (p1&&p2)
//	{
//		switch (compare(p1, p2))
//		{
//			//1是p1指数大，指数大的要排在前面
//			case 1:
//			{
//				Attach(p1->coe,p1->index,&rear);
//				p1 = p1->next;
//				break;
//			}
//			case -1:
//			{
//				//-1是p2指数大
//				Attach(p2->coe,p2->index,&rear);
//				p2 = p2->next;
//				break;
//			}
//			case 0:
//			{
//				//指数相等的时候要进行判断，判断系数相加是否为零，为零则不用插入
//				if (p1->coe + p2->coe)
//				{
//					Attach(p1->coe+p2->coe,p1->index,&rear);
//				}
//				p1 = p1->next;
//				p2 = p2->next;
//				break;
//			}
//		}
//	}
//	//可能出现情况是两个多项式的长度不一致
//	for (; p1 != NULL; p1 = p1->next)
//	{
//		Attach(p1->coe, p1->index, &rear);
//	}
//	for (; p2 != NULL; p2 = p2->next)
//	{
//		Attach(p2->coe, p2->index, &rear);
//	}
//	Polyminal t = p;
//	p = p->next;
//	free(t);
//
//
//	return p;
//}
//
//
//Polyminal mutly(Polyminal p1, Polyminal p2)
//{
//	if (!p1 || !p2)
//	{
//		return NULL;
//	}
//	Polyminal t1, t2;
//	t1 = p1;
//	t2 = p2;
//
//	//新构造一条多项式
//	Polyminal newp,p;
//	newp = (Polyminal)malloc(sizeof(struct PolyNode));
//	newp->next = NULL;
//	p = newp;
//
//	//先把t2的第一项跟t1所有的项相乘，构成一条基础链
//	while (t1)
//	{
//		int c = t1->coe*t2->coe;
//		int e = t1->index + t2->index;
//		Attach(c, e, &p);
//		t1 = t1->next;
//	}
//	t2 = t2->next;
//	while (t2)
//	{
//		t1 = p1;
//		p = newp;
//		while (t1)
//		{
//			int e = t2->index+t1->index;
//			int c = t1->coe*t2->coe;
//			//找到比e小的位置
//			while (p->next&&p->next->index > e)
//			{
//				p = p->next;
//			}
//			//当指数相等的时候
//			if (p->next&&p->next->index == e)
//			{
//				if (c + p->next->coe)
//				{
//					p -> next->coe += c;
//				}
//				else
//				{
//					Polyminal t = p->next;
//					p->next = t->next;
//					free(t);
//				}
//			}
//			else
//			{
//				//没有指数相等的项就直接把相乘之后的指数项插入
//				Polyminal t = (Polyminal)malloc(sizeof(struct PolyNode));
//				t->coe = c;
//				t->index = e;
//				t->next = p->next;
//				p->next = t;
//				p = p->next;
//			}
//			t1 = t1->next;
//		}
//		t2 = t2->next;
//	}
//	Polyminal t = newp;
//	newp = newp->next;
//	free(t);
//	return newp;
//}
//
//void printPoly(Polyminal p)
//{
//	//用来判断是否是第一个
//	int flag = 0;
//
//	if (!p)
//	{
//		printf("0 0\n");
//		return;
//	}
//	else
//	{
//		while (p)
//		{
//			//是第一个就不用空格
//			if (!flag)
//			{
//				flag = 1;
//			}
//			else
//			{
//				printf(" ");
//			}
//			printf("%d %d",p->coe,p->index);
//			p = p->next;
//		}
//	}
//	printf("\n");
//}
//int main()
//{
//	Polyminal p1 = setPoly();
//	Polyminal p2 = setPoly();
//	Polyminal Polymul = mutly(p1, p2);
//	printPoly(Polymul);
//	Polyminal padd = add(p1, p2);
//	printPoly(padd);
//	system("pause");
//	return 0;
//}