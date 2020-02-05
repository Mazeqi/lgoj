//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
//#include"windows.h"
//
//#define PLUS 1           //正
//#define MINUS -1	    //负
//#define SYMBOLNUM 1    //符号位长度
//#define WORD_LENGTH 8  //机器字长
//#define MIN (-(1<<(WORD_LENGTH-SYMBOLNUM))+1)   // 最小取值范围，注意取不到 -2^(n-1)了
//#define MAX ((1<<(WORD_LENGTH-SYMBOLNUM))-1)   // 最大取值范围
//
////二进制数的结构体
//typedef struct Integer{
//	char input[100];      //输入的带符号十进制数
//	char binary[100];     //二进制真值	
//	char yuan_code[100];  //原码
//	int symbol;		      //符号位
//	int decimal;          //十进制整数
//
//}Node, *Number;
//
///* 准备工作
//1.检查输入是否合法
//2.确定输入十进制数的正负
//3.将 string 类型转换成 int 类型
//4.确定输入十进制数的范围
//*/
//void prepare(Number num){
//	// 验证输入合法性，确定该十进制整数的正负
//	for (int i = 0; i<strlen(num->input); i++){
//		if (num->input[0] == '+' && !i){    // 如果第一个字符为 +
//			num->symbol = PLUS;    // 记录符号为 +
//		}
//		else if (num->input[0] == '-' && !i){  //如果第一个字符为 -
//			num->symbol = MINUS;   // 记录符号为 -
//		}
//		else if (!((num->input[i] >= '0' || num->input[i] <= '9') && i)){  // 如果不是第一个字符，且不在 0~9 之间
//			printf(" 输入不合法，请重新启动！\n");
//			Sleep(1000);
//			exit(0);            // 提示并结束程序
//		}
//	}
//
//	// 转换输入十进制整数的类型
//	num->decimal = atoi(num->input);
//
//	//确定输入十进制数的范围
//	if (num->decimal < MIN || MAX < num->decimal){  // 如果取值比最小值还小，或者比最大值还大，说明超出表示范围了
//		printf("超出表示范围，请重新启动！\n");
//		Sleep(1000);
//		exit(0);     // 提示并结束程序
//	}
//}
//
//// 转二进制
//void tranfer(Number num){
//
//	//先取绝对值
//	int tmpDecimal = abs(num->decimal);
//
//	// 特殊情况 0 
//	// 如果 decimal 为 0，初始化字符串为 0，否则初始化为空
//	if (tmpDecimal == 0){
//		for (int i = 0; i < 100; i++){
//			num->binary[i] = '0';
//		}
//	}
//	else{
//		//测长度
//		int length = 0;
//		while (tmpDecimal){
//			length++;
//			tmpDecimal /= 2;
//		}
//		
//		//加上终止的位置
//		num->binary[length] = '\0';
//		tmpDecimal = abs(num->decimal);
//
//		while (tmpDecimal){
//			num->binary[length - 1] = tmpDecimal % 2 + '0';
//			length--;
//			tmpDecimal /= 2;
//		}
//	}
//}
//
//// 转换成原码
//void ToYuan_code(Number num){
//	for (int i = 0; i < strlen(num->binary); i++){
//		//确定原码数值位
//		num->yuan_code[i] = num->binary[i];  // 原码数值位和二进制相等
//	}
//	num->yuan_code[strlen(num->binary)] = '\0';
//
//	
//}
//
//// 输出每行的 A 和 C,A是部分积，C是乘数
//void output(char *A, char *C, int len, int yw){
//	if (yw){
//		printf("");
//	}
//	else{
//		printf("     ");
//	}
//	for (int i = 0; i < strlen(A); i++){
//		printf("%c", A[i]);
//	}
//	// 填充格式的空格个数
//	for (int kg = strlen(A); kg <= 11; kg++)
//		printf(" ");
//
//	for (int i = 0; i < len; i++)
//		printf("%c", C[i]);
//
//	// 设置颜色为红色
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
//	for (int i = len; i < strlen(C); i++)
//		printf("%c",C[i]);
//	
//	printf("\n");
//	// 设置回原来的青色
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |
//		FOREGROUND_BLUE);
//}
//
//// 加法实现
//void Add_method(char *A, char *B){
//	int jw = 0; // 进位
//	for (int i = strlen(A) - 1; i >= 0; i--){
//		A[i] = (A[i] - '0') + (B[i] - '0') + jw;
//		if (A[i] >= 2){
//			jw = 1;
//			A[i] -= 2;
//		}
//		else{
//			jw = 0;
//		}
//		A[i] += '0';
//	}
//
//}
//
//void Add(char *A, char *B, char *C, int i){
//	if (C[strlen(C) - 1] == '1'){    // 如果最低位是 1
//		printf("+|X| ");
//		for (int j = 0; j < strlen(B); j++){
//			printf("%c",B[j]);
//		}
//		printf("\n");
//		// 分割线
//		printf("------------------------------\n");
//		// 得到结果
//		Add_method(A, B);
//		output(A, C, i, 0);
//	}
//	else if (C[strlen(C) - 1] == '0'){  // 如果最低位是 0
//		printf("+0   ");
//		for (int j = 0; j < strlen(B); j++)
//			printf("0");
//		printf("\n");
//		// 分割线
//		printf("-----------------------------\n");
//		// 得到结果
//		output(A, C, i, 0);
//	}
//}
//// 移位操作
//void shift(char *A, char *C, int i){
//	// 先把 C 移一位
//	// 在 C 最前面插入 A 的最后一位，再从 0 开始截取 C 的长度-1
//	
//	for (int j = strlen(C) - 1; j >= 1; j--)
//		C[j] = C[j - 1];
//	C[0] = A[strlen(A) - 1];
//	
//
//	// 再移动 A
//	// 把 A 符号位后插入 0，再从符号位后(1) 开始截取 A 的长度-1 
//	for (int j = strlen(A) - 1; j >= 1; j--)
//		A[j] = A[j - 1];
//	A[1] = '0';
//	printf(">>   ");
//	output(A, C, i + 1, 1);
//}
//
//// 初始化
//void Init(char *A, char *B, char *C, Number X, Number Y){
//
//	// 存放积的高位
//	A[0] = '0';
//	A[1] = '0';
//
//	memcpy(B, X->yuan_code, strlen(X->yuan_code) + 1); // 被乘数
//
//	memcpy(C, Y->yuan_code, strlen(Y->yuan_code) + 1);  // 乘数，存放积的低位
//
//	// 被乘数 x 乘数  = 积
//	// 输出提示信息
//
//	printf("    |X| = ");
//	for (int i = 0; i < strlen(B); i++){
//		printf("%c",B[i]);
//	}
//
//	printf("→B， |Y| = ");
//	for (int i = 0; i < strlen(C); i++){
//		printf("%c", C[i]);
//	}
//	printf("→C，    0→A\n");
//
//	// 把A的位数补足（两位符号位00 + X 的数值位）
//	for (int i = 0; i < strlen(X->yuan_code); i++){
//		A[i + 2] = '0';
//	}
//		
//	for (int i = strlen(B); i >= 0; i--){
//		B[i + 2] = B[i];
//	}
//
//	//符号位
//	B[0] = '0';
//	B[1] = '0';
//	
//	printf("     部分积A     乘数C     被乘数B ");
//	for (int i = 0; i < strlen(B); i++){
//		printf("%c",B[i]);
//	}
//
//	printf("\n");
//	output(A, C, 0, 0);
//}
//
//// 符号位
//void getSymobl(Number X, Number Y, char *symbol){
//	printf("符号位：");
//
//	// 如果两符号位相等，为正
//	if (X->symbol == Y->symbol){
//		if (X->symbol == PLUS)
//			printf("%d⊕=0 \n", PLUS);
//		else
//			printf("0⊕0=0\n");
//		*symbol = '0';
//	}
//	else{  // 否则为负 
//		if (X->symbol == PLUS)
//			printf("%d⊕0 = 1\n", PLUS);
//		else
//			printf("0⊕1=1\n");
//		*symbol = '1';
//	}
//}
//// 结果
//void resultAC(char *A, char *C, char *symbol){
//	char Amid[100] = { '\0' };
//	int  copyA = 0;
//	int len = 0;
//	// 把 A 前面的 0 去掉
//	for (int i = 0; i <= strlen(A); i++){
//		if (A[i] == '1'){
//			copyA = 1;
//		}
//		if (copyA){
//			Amid[len++] = A[i];
//		}
//	}
//	if (copyA == 1){
//		for (int i = 0; i <= strlen(Amid); i++){
//			A[i] = Amid[i];
//		}
//	}
//	
//
//	char result[200] = { '\0' };
//	// 得到积
//	for (int i = 0; i <= strlen(A) + strlen(C); i++){
//		if (i < strlen(A)){
//			result[i] = A[i];
//		}
//		else{
//			result[i] = C[i - strlen(A)];
//		}
//	}
//
//	printf("[X × Y]原 = %c", *symbol);
//	for (int i = 0; i < strlen(result); i++){
//		printf("%c", result[i]);
//	}
//	printf("\n");
//	// 符号位从 0 1 转变为 - 或者空
//	*symbol = ((*symbol == '1') ? '-' : ' ');
//
//	printf("即：X × Y = %c", *symbol);
//	for (int i = 0; i < strlen(result); i++){
//		printf("%c", result[i]);
//	}
//	printf(" = ");
//	int sum = 0;
//	// 逆转，方便转回真值
//	for (int i = 0; i < strlen(result) / 2; i++){
//		char tmp = result[strlen(result) - 1 - i];
//		result[strlen(result) - 1 - i] = result[i];
//		result[i] = tmp;
//
//	}
//	for (int i = 0; i < strlen(result); i++)
//		if (result[i] == '1')
//			sum += pow(2.0, i);
//	printf("%c%d\n", *symbol, sum);
//	//cout << symbol << sum << endl;
//}
//
//// 原码一位乘
//void mul(Number X, Number Y){
//	char A[100] = { '\0' };
//	char B[100] = { '\0' };
//	char C[100] = { '\0' };
//	char symbol = '\0';
//	// 初始化 A B C，并打印相关提示信息
//	Init(A, B, C, X, Y);
//	
//	// 加法和移位的次数和乘数的数值位长度相等
//	for (int i = 0; i < strlen(Y -> yuan_code); i++){
//		// 先 + 
//		Add(A, B, C, i);
//		// 再移位
//		shift(A, C, i);
//	}
//	printf("\n");
//	
//	//cout << endl;
//	// 得到符号位
//	getSymobl(X, Y, &symbol);
//
//	// 得到最终答案
//	resultAC(A, C, &symbol);
//
//}
//
//
//
////主函数
//int main(){
//	Number X = (Number)malloc(sizeof(Node));
//	Number Y = (Number)malloc(sizeof(Node));
//
//	// 颜色设置为青色
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |
//		FOREGROUND_BLUE);
//
//	//初始化输入
//	printf("请输入 %d  ~ +%d范围内的带符号十进制整数：", MIN,MAX);
//	scanf("%s",X->input);
//	fflush(stdin);
//
//	printf("请输入 %d  ~ +%d范围内的带符号十进制整数：", MIN,MAX);
//	scanf("%s", Y->input);
//	fflush(stdin);
//
//	prepare(X);  // 准备
//	tranfer(X);  // 转换为二进制
//
//	ToYuan_code(X);
//	prepare(Y);  // 准备
//	tranfer(Y);  // 转换为二进制
//	ToYuan_code(Y);
//	
//	mul(X, Y);
//
//
//	free(X);
//	free(Y);
//	system("pause");
//	return 0;
//}
