//#include<iostream>
//#include<cmath>  //abs
//#include<malloc.h>  //malloc
//#include<algorithm>  // reverse
//#include<string>   // string
//#include<sstream>  // stringstream
//#include<cmath>  // pow
//#include "windows.h"
//#define PLUS 1    // 正
//#define MINUS -1   // 负
//#define SYMBOLNUM 1   // 符号位长度
//#define WORD_LENGTH 8  // 机器字长
//#define MIN (-(1<<(WORD_LENGTH-SYMBOLNUM))+1)   // 最小取值范围，注意取不到 -2^(n-1)了
//#define MAX ((1<<(WORD_LENGTH-SYMBOLNUM))-1)  // 最大取值范围
//using namespace std;
//typedef struct Integer *Number;
//struct Integer{        // 定义一个结构体，把该数的各种码放进去
//	string input;  // 输入的带符号十进制整数
//	string binary;  // 二进制真值
//	string yuan_code;   // 原码
//	int symbol;  // 符号位
//	int decimal; // 十进制整数
//};
///* 准备工作
//1.检查输入是否合法
//2.确定输入十进制数的正负
//3.将 string 类型转换成 int 类型
//4.确定输入十进制数的范围
//*/
//void prepare(Number num){
//	// 验证输入合法性，确定该十进制整数的正负
//	for (int i = 0; i<(num->input.size()); i++){
//		if (num->input[0] == '+' && !i){    // 如果第一个字符为 +
//			num->symbol = PLUS;    // 记录符号为 +
//		}
//		else if (num->input[0] == '-' && !i){  //如果第一个字符为 -
//			num->symbol = MINUS;   // 记录符号为 -
//		}
//		else if (!((num->input[i] >= '0' || num->input[i] <= '9') && i)){  // 如果不是第一个字符，且不在 0~9 之间
//			cout << "输入不合法，请重新启动！\n" << endl;
//			exit(0);            // 提示并结束程序
//		}
//	}
//	// 转换输入十进制整数的类型
//	stringstream container;   // 转换容器
//	container << num->input.substr(1);      // "吞"进输入的十进制整数 
//	container >> num->decimal;      // 再将容器中的数"吐"出来
//	num->decimal *= num->symbol;  // 带上符号
//
//	//确定输入十进制数的范围
//	if (num->decimal < MIN || MAX < num->decimal){  // 如果取值比最小值还小，或者比最大值还大，说明超出表示范围了
//		cout << "超出表示范围，请重新启动！\n" << endl;
//		exit(0);     // 提示并结束程序
//	}
//}
//// 转二进制
//void tranfer(Number num){
//	int tmpDecimal = abs(num->decimal);
//	// 特殊情况 0 
//	// 如果 decimal 为 0，初始化字符串为 0，否则初始化为空
//	num->binary = (tmpDecimal == 0 ? "0" : "");
//	while (tmpDecimal){
//		num->binary += tmpDecimal % 2 + '0';
//		tmpDecimal /= 2;
//	}
//	reverse(num->binary.begin(), num->binary.end());  // 逆转字符串
//}
//// 转换成原码
//void ToYuan_code(Number num){
//	//确定原码数值位
//	num->yuan_code += num->binary;  // 原码数值位和二进制相等
//}
//
//// 输出每行的 A 和 C
//void output(string A, string C, int len, bool yw){
//	cout << (yw ? "" : "     ") << A;
//	// 填充格式的空格个数
//	for (int kg = A.size(); kg <= 11; kg++)
//		cout << " ";
//	for (int i = 0; i<len; i++)
//		cout << C[i];
//	// 设置颜色为红色
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
//	for (int i = len; i<C.size(); i++)
//		cout << C[i];
//	cout << endl;
//	// 设置回原来的青色
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |
//		FOREGROUND_BLUE);
//}
//// 加法实现
//void Add_method(string &A, string B){
//	int jw = 0; // 进位
//	for (int j = A.size() - 1; j >= 0; j--){
//		A[j] = (A[j] - '0') + (B[j] - '0') + jw;
//		if (A[j] >= 2){
//			jw = 1;
//			A[j] -= 2;
//		}
//		else{
//			jw = 0;
//		}
//		A[j] += '0';
//	}
//}
//void Add(string &A, string &B, string &C, int i){
//	if (C[C.size() - 1] == '1'){    // 如果最低位是 1
//		cout << "+|X| " << B << endl;
//		// 分割线
//		cout << "-----------------------------" << endl;
//		// 得到结果
//		Add_method(A, B);
//		output(A, C, i, false);
//	}
//	else if (C[C.size() - 1] == '0'){  // 如果最低位是 0
//		cout << "+ 0  ";
//		for (int j = 0; j<B.size(); j++)
//			cout << "0";
//		cout << endl;
//		// 分割线
//		cout << "-----------------------------" << endl;
//		// 得到结果
//		output(A, C, i, false);
//	}
//}
//// 移位操作
//void shift(string &A, string &C, int i){
//	// 先把 C 移一位
//	// 在 C 最前面插入 A 的最后一位，再从 0 开始截取 C 的长度-1
//	C.insert(0, A.substr(A.size() - 1));
//	C = C.substr(0, C.size() - 1);
//
//	// 再移动 A
//	// 把 A 符号位后插入 0，再从符号位后(1) 开始截取 A 的长度-1 
//	A.insert(1, "0");
//	A = A.substr(0, A.size() - 1);
//	cout << ">>   ";
//	output(A, C, i + 1, true);
//}
//// 初始化
//void Init(string &A, string &B, string &C, Number X, Number Y){
//	A = "00";   // 存放积的高位
//	B = X->yuan_code;  // 被乘数
//	C = Y->yuan_code;   // 乘数，存放积的低位
//	// 被乘数 x 乘数  = 积
//	// 输出提示信息
//	cout << "    |X| = " << B << "→B，    |Y| = " << C << "→C，    0→A" << endl;
//	// 把A的位数补足（两位符号位00 + X 的数值位）
//	for (int i = 0; i<X->yuan_code.size(); i++)
//		A += "0";
//	B = "00" + B;  // 加上符号位
//	cout << "     部分积A     乘数C     被乘数B " << B << endl;
//	output(A, C, 0, false);
//}
//// 符号位
//void getSymobl(Number X, Number Y, string &symbol){
//	cout << "符号位：";
//	// 如果两符号位相等，为正
//	if (X->symbol == Y->symbol){
//		if (X->symbol == PLUS)
//			cout << PLUS << "⊕" << PLUS << "=0" << endl;
//		else
//			cout << "0⊕0=0" << endl;
//		symbol = "0";
//	}
//	else{  // 否则为负 
//		if (X->symbol == PLUS)
//			cout << PLUS << "⊕0=1" << endl;
//		else
//			cout << "0⊕1=1" << endl;
//		symbol = "1";
//	}
//}
//// 结果
//void result(string A, string C, string symbol){
//	// 把 A 前面的 0 去掉
//	for (int i = 0; i<A.size(); i++)
//		if (A[i] == '1'){
//		A = A.substr(i);
//		break;
//		}
//	// 得到积
//	string result = A + C;
//	cout << "[X × Y]原 = " << symbol << result << endl;
//	// 符号位从 0 1 转变为 - 或者空
//	symbol = ((symbol == "1") ? "-" : "");
//	cout << "即：X × Y = " << symbol << result << " = ";
//	int sum = 0;
//	// 逆转，方便转回真值
//	reverse(result.begin(), result.end());
//	for (int i = 0; i<result.size(); i++)
//		if (result[i] == '1')
//			sum += pow(2.0, i);
//	cout << symbol << sum << endl;
//}
//// 原码一位乘
//void mul(Number X, Number Y){
//	string A;
//	string B;
//	string C;
//	string symbol;
//	// 初始化 A B C，并打印相关提示信息
//	Init(A, B, C, X, Y);
//	// 加法和移位的次数和乘数的数值位长度相等
//	for (int i = 0; i<Y->yuan_code.size(); i++){
//		// 先 + 
//		Add(A, B, C, i);
//		// 再移位
//		shift(A, C, i);
//	}
//	cout << endl;
//	// 得到符号位
//	getSymobl(X, Y, symbol);
//	// 得到最终答案
//	result(A, C, symbol);
//}
//int main(){
//	Number X = new Integer();
//	Number Y = new Integer();
//	// 颜色设置为青色
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |
//		FOREGROUND_BLUE);
//	cout << "请输入" << MIN << "~+" << MAX << "范围内的带符号十进制整数：";
//	cin >> X->input;
//	cout << "请输入" << MIN << "~+" << MAX << "范围内的带符号十进制整数：";
//	cin >> Y->input;
//	prepare(X);  // 准备
//	tranfer(X);  // 转换为二进制
//	ToYuan_code(X);
//	prepare(Y);  // 准备
//	tranfer(Y);  // 转换为二进制
//	ToYuan_code(Y);
//	mul(X, Y);
//	free(X);
//	free(Y);
//	system("pause");
//	return 0;
//}
