//#include<cstdio>
//#include<stdlib.h>
//
//#define OK 1
//#define ERROR 0
//#define TRUE 1    
//#define FALSE 0
//#define OVERFLOW 0
//typedef int Status;
//typedef char ElemType;
//typedef struct{  //do：完成类ss型定义
//	ElemType *elem; //存储空间的地址
//	int top;        //栈顶元素的下s一个位置s
//	int size;
//	int increment;
//} SqStack;
//
//Status InitStack_Sq(SqStack &S, int size, int increment){ // do: 初始化空的顺序栈S
//	S.elem = (ElemType *)malloc(size * sizeof(ElemType));
//	if (NULL == S.elem)return OVERFLOW;
//	S.top = 0;
//	S.size = size;
//	S.increment = increment;
//	return OK;
//}
//
//Status StackEmpty_Sq(SqStack S){  // do: 判空，若为空则返回TURE，否则返回FALSE 
//	if (S.top == 0){
//		return TRUE;
//	}
//	return FALSE;
//}
//
//Status Push_Sq(SqStack &S, ElemType e) { // do:元素e入栈
//	ElemType *newbase;
//	//超过界限时的操作
//	if (S.top >= S.size){
//		newbase = (ElemType *)realloc(S.elem, (S.size + S.increment) * sizeof(ElemType));
//		if (NULL == newbase)return OVERFLOW;
//		S.elem = newbase;
//		S.size += S.increment;
//	}
//	S.elem[S.top++] = e;
//	return OK;
//}
//
//Status ClearStack_Sq(SqStack &S){ // do:清空栈S 
//	S.top = 0;
//	return OK;
//}
//
//Status GetTop_Sq(SqStack S, ElemType &e) { // do:取栈S的栈顶元素，用e返回
//	if (S.top == 0 || S.elem == NULL){
//		return ERROR;
//	}
//	e = S.elem[S.top - 1];
//	return OK;
//}
//
//Status Pop_Sq(SqStack &S, ElemType &e) { // do:栈S的栈顶元素出栈，并用e返回
//	if (S.top == 0 || S.elem == NULL){
//		return ERROR;
//	}
//	S.top--;
//	e = S.elem[S.top];
//	return OK;
//}
//
//Status DestroyStack_Sq(SqStack &S) {   //do:销毁栈
//	free(S.elem);
//	S.elem = NULL;
//	S.size = 0;
//	S.increment = 0;
//	return OK;
//}
//
//void Converstion(int N) { //do:借助栈将十进制数N转化为八进制数并输出
//	SqStack S;
//	ElemType e;
//	InitStack_Sq(S, 10, 5);
//	while (N != 0){
//		Push_Sq(S, N % 8);
//		N /= 8;
//	}
//	while (FALSE == StackEmpty_Sq(S)){
//		Pop_Sq(S, e);
//		printf("%d",e);
//	
//	}
//	printf("\n");
//}
//
//Status Matching(char *exp, int n) { //do:判断括号匹配，若匹配返回TURE，否则返回FLASE
//	int i = 0;
//	ElemType e;
//	SqStack S;
//	InitStack_Sq(S, n, 5);
//	while (i < n){
//		switch (exp[i]){
//			case '(':
//			case '[':Push_Sq(S, exp[i]); i++; break;
//			case ')':
//			case ']':
//				if (TRUE == StackEmpty_Sq(S))
//					return ERROR;
//				else{
//					GetTop_Sq(S, e);
//					if ((exp[i] == ')' && e == '(') || (exp[i] == ']' && e == '[')){
//						Pop_Sq(S, e);
//						i++;
//					}
//					else
//						return ERROR;
//				}
//				break;
//		}	
//	}
//	if (TRUE == StackEmpty_Sq(S))return OK;
//	else return ERROR;
//}
//
//
//
//void main(){
//
//	SqStack S1;
//	SqStack S2;
//	SqStack S3;
//
//	//do:测试栈的初始化操作
//	InitStack_Sq(S1, 10, 10);
//	InitStack_Sq(S2, 10, 10);
//	InitStack_Sq(S3, 10, 10);
//
//
//	//do:测试数据的生成,构造一个空栈、满栈和非空非满的栈,并完成输出栈的工作
//	if (StackEmpty_Sq(S1)){
//		printf("栈S1为空\n");
//	}
//
//	int cs[10] = { 1, 3, 4, 11, 22, 2300, 100, 23, 20323, 13 };
//	for (int i = 0; i < 10; i++){
//		Push_Sq(S2, cs[i]);
//	}
//
//	for (int j = 0; j < 9; j++){
//		Push_Sq(S3, cs[j]);
//	}
//
//	while (StackEmpty_Sq(S2) != TRUE){
//		ElemType e;
//		Pop_Sq(S2, e);
//		printf("S2的元素为%d\n", e);
//	}
//
//	printf("\n");
//	while (StackEmpty_Sq(S3) != TRUE){
//		ElemType e2;
//		Pop_Sq(S3, e2);
//		printf("S3的元素为%d\n", e2);
//	}
//
//	printf("\n");
//
//	//do:测试进栈出栈操作
//
//	//do:测试数值转换和括号串的匹配
//	char test[3] = {'(',')','['};
//	if (Matching(test, 3) == OK){
//		printf("OK\n");
//	}
//	else{
//		printf("ERROR\n");
//	}
//
//	char test2[4] = { '(', ')', '[',']'};
//	if (Matching(test2, 4) == OK){
//		printf("OK\n");
//	}
//	else{
//		printf("ERROR\n");
//	}
//	printf("\n");
//	printf("Conversion : \n");
//	Converstion(10);
//	Converstion(100);
//	printf("\n");
//
//	
//	system("pause");
//}
//
