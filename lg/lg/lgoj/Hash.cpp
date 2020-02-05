//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define OK 1
//#define ERROR 0
//#define OVERFLOW 0
//#define SUCCESS 1
//#define UNSUCCESS 0
//
//
//typedef int KeyType;
//typedef int Status;
//typedef struct {
//	KeyType key;
//	int value;
//}RcdType;
//typedef struct{
//	RcdType *rcd; //记录存储基址，动态分配数组   
//	int size;     //哈希表容量
//	int count;    //当前表中含有的记录的个数
//	int *tag;     //标记，0：空；1：有效；-1：已经删除
//	//int (*hash)(KeyType key, int hashSize); //函数指针变量，选取的哈希函数
//	//void (*collision)( int &HashValue, int count, int hashSize);//函数指针变量，用于处理冲突的函数
//
//}HashTable;
//
//int InsertHash(HashTable &H, RcdType e);
//Status ResizeHash(HashTable &H, int resize);
////线性探索处理冲突
///*
//count ：第几次处理冲突 ,从1开始
//hashSize : 哈希表长度；
//
//*/
//void collision(int firstHashValue,int &newHashValue ,int count, int hashSize){
//	int d;
//	if (count % 2 == 1){
//		d = (count / 2 + 1) * (count / 2 + 1);
//	}
//	else{
//		d = -((count / 2 )* (count / 2));
//	}
//	newHashValue = (firstHashValue + d) % hashSize;
//	if (newHashValue < 0)newHashValue += hashSize;
//}
//
//int hash(KeyType key, int hashSize){
//	return (3 * key) % hashSize;
//
//}
////初始化
//Status InitHash(HashTable &H, int size){
//	int i;
//	//分配长度为size的存储空间
//	H.rcd = (RcdType *)malloc(size * sizeof(RcdType));
//
//	//分配对应的标记数组
//	H.tag = (int *)malloc(size * sizeof(int));
//
//	if (NULL == H.rcd || NULL == H.tag)return OVERFLOW;
//
//	//成功操作
//	for (i = 0; i < size; i++)H.tag[i] = 0;
//	H.size = size;
//	//printf("%d",H.size);
//	// H.hash = hash;
//	// H.collision = collision;
//	H.count = 0;
//
//	return OK;
//
//}
//
////销毁
//Status DestroyHash(HashTable &H){
//	free(H.rcd);
//	free(H.tag);
//	H.count = H.size = 0;
//	return OK;
//
//}
//
//
//
////在哈希表H中查找关键字位key的记录
//Status SearchHash(HashTable H, KeyType key, int &p, int &c){
//	int no = 0, first;
//	int count = 1;
//	p = hash(key, H.size);
//	int oldHash = p;
//	while (H.tag[p] != 0 && (H.rcd[p].key != key || H.tag[p] == -1)){
//
//		if (H.tag[p] == -1 && no == 0){
//			first = p;
//			no = 1;
//
//		}
//		collision(oldHash, p, count, H.size);
//		count++;
//		c++;
//	//	if (c >= H.size / 2)break;
//
//	}
//	if (H.rcd[p].key == key)return SUCCESS;
//	else{
//		if (no == 1)p = first;
//		return UNSUCCESS;
//	}
//
//}
////在哈希表中插入e
//int InsertHash(HashTable &H, RcdType e){
//	int c = 0, j;
//	if (SUCCESS == SearchHash(H, e.key, j, c)){
//		return -1;
//	}
//	else{
//		H.rcd[j] = e;
//		H.tag[j] = 1;
//		++H.count;
//	}
//	//printf("%d c \n",c);
//	if (c >= H.size / 2){
//		ResizeHash(H, 10);
//	}
//	return c;
//}
////扩容
//Status ResizeHash(HashTable &H, int resize){
//	RcdType *newbase = NULL;
//	RcdType *temp = NULL;
//	int *newtag = NULL;
//
//	newbase = (RcdType *)malloc((H.size + resize) * sizeof(RcdType));
//	newtag = (int *)realloc(H.tag, (H.size + resize) * sizeof(int));
//	if (NULL == newbase || newtag == NULL)return OVERFLOW;
//
//	H.tag = newtag;
//	temp = H.rcd;
//	H.rcd = newbase;
//
//	//成功操作
//	int i;
//	printf("从%d扩容到", H.size);
//	for (i = H.size; i < H.size + resize; i++)H.tag[i] = 0;
//	H.size += resize;
//	for (i = 0; i < H.size; i++){
//		if (H.tag[i] == 1){
//			InsertHash(H, temp[i]);
//		}
//	}
//
//	//printf("xxx");
//	//H.rcd = newbase;
//	printf("%d\n\n", H.size);
//	free(temp);
//	return OK;
//}
////构造哈希函数
//Status CreateHash(HashTable &H, int *key){
//	int i = 0;
//
//	RcdType HashValue[100];
//	for (i = 0; i < 8; i++){
//		HashValue[i].key = key[i];
//		HashValue[i].value = i + 1;
//		if (InsertHash(H, HashValue[i]) == -1){
//			printf("失败了\n\n");
//		}
//	}
//	return SUCCESS;
//}
//
//
//
//
//
////在哈希表H中删除关键字为key的记录
//Status DeleteHash(HashTable &H, KeyType key, RcdType &e){
//	int j, c;
//	if (UNSUCCESS == SearchHash(H, key, j, c)){
//		return UNSUCCESS;
//	}
//	else{
//		e = H.rcd[j];
//		H.tag[j] = -1;
//		H.count--;
//		return SUCCESS;
//	}
//
//}
//int main(){
//	HashTable Ha;
//	InitHash(Ha, 2);
//
//	//srand((unsigned)time(NULL)); //用时间做种，每次产生随机数不一样
//
//	int key[8] = {22,41,53,46,30,13,12,67};
//	int i = 0;
//	CreateHash(Ha, &key[0]);
//	int p, c = 0;
//	printf("  H(key) key\n\n");
//	for (i = 0; i < 8; i++){
//		SearchHash(Ha, key[i], p, c);
//		if (Ha.tag[p] == 1){
//			printf("  %d      ", p);
//			printf("%d ", Ha.rcd[p].key);
//			printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}