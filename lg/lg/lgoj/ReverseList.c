//#include<stdio.h>
//#include<stdlib.h>
//typedef int ElementType;
//
//typedef struct Node *PtrToNode;
//typedef PtrToNode List;
//typedef PtrToNode Position;
//struct Node {
//	ElementType Element;
//	Position Next;
//};
//List Read()
//{
//	List T = (List)malloc(sizeof(PtrToNode));
//	T->Next = NULL;
//	List later = T;
//	
//	int N;
//	scanf("%d",&N);
//
//	for (int i = 0; i < N; i++)
//	{
//		List Node = (List)malloc(sizeof(PtrToNode));;
//		Node->Next = NULL;
//		scanf("%d",&Node->Element);
//		later->Next = Node;
//		later = Node;
//	}
//
//	return T;
//}
//void Print(List L)
//{
//	List P = L->Next;
//
//	while (P)
//	{
//		printf("%d ",P->Element);
//		P = P->Next;
//	}
//	printf("\n");
//}
//List Reverse(List L)
//{
//	List head = L->Next;
//	List newhead = NULL, temp;
//	while (head != NULL)
//	{
//		temp = head->Next;
//		head->Next = newhead;
//		newhead = head;
//		head = temp;
//	}
//	L->Next = newhead;
//	return L;
//}
//
//int main()
//{
//	List L1, L2;
//	L1 = Read();
//	L2 = Reverse(L1);
//	Print(L1);
//	Print(L2);
//	system("pause");
//	return 0;
//}