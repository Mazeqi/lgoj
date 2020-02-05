//#include <iostream>
//using namespace std;
//typedef int KeyType;
//typedef int Status;
//#define OK 1
//#define OVERFLOW 0
//#define SUCCESS 1
//#define UNSUCCESS 0
//typedef struct{
//	KeyType key;
//}RcdType;
//typedef struct{
//	RcdType *rcd;
//	int size;
//	int count;
//	int increment; //扩容变量
//	int *tag;
//	int(*hash)(KeyType key, int hashSize);
//	void(*collision)(int FhashValue, int &NHashValue, int count, int hashSize);
//}HashTable;
//
//int hash_t(KeyType key, int size){
//	return key%size;
//}
//
//void collision_t(int p, int &q, int count, int size){
//	int d;
//	if (count % 2 == 1)
//		d = (count / 2 + 1)*(count / 2 + 1);
//	else
//		d = -((count / 2)*(count / 2));
//	q = (p + d) % size;
//	if (q<0)
//		q += size;
//}
//
//Status InitHash(HashTable &H, int size, int increment, int(*hash)(KeyType, int),
//	void(*collision)(int, int &, int, int)){
//	H.rcd = (RcdType*)malloc(size*sizeof(RcdType));
//	H.tag = (int *)malloc(size*sizeof(int));
//	if (NULL == H.rcd || NULL == H.tag)
//		return OVERFLOW;
//	for (int i = 0; i<size; i++)
//		H.tag[i] = 0;
//	H.size = size;
//	H.count = 0;
//	H.increment = increment;
//	H.hash = hash;
//	H.collision = collision;
//	return OK;
//}
//
//Status SearchHash(HashTable H, KeyType key, int &p, int &c){
//	p = H.hash(key, H.size);
//	int flag = 0, first; //first用来记录第一次出现-1标记的哈希地址
//	int firsthash = p;//记下第一次的哈希地址
//	while ((H.tag[p] == 1 && H.rcd[p].key != key) || -1 == H.tag[p]){
//		if (flag == 0 && H.tag[p] == -1){
//			flag = 1;
//			first = p;
//		}
//		c++;
//		
//		H.collision(firsthash, p, c, H.size);
//	}
//	if (H.rcd[p].key == key && 1 == H.tag[p])
//		return SUCCESS;
//	else{
//		if (flag == 1) //判断探索过程中是否有被删除过的位置
//			p = first;
//		return UNSUCCESS;
//	}
//}
//
//int InsertHash(HashTable &H, RcdType e){
//	int c = 0, p;
//	if (SUCCESS == SearchHash(H, e.key, p, c))
//		return -1;
//	else{
//		H.rcd[p] = e;
//		H.tag[p] = 1;
//		H.count++;
//		return c;
//	}
//}
//
//Status DeleteHash(HashTable &H, KeyType key, RcdType &e){
//	int c = 0, p;
//	if (UNSUCCESS == SearchHash(H, key, p, c))
//		return UNSUCCESS;
//	else{
//		e = H.rcd[p];
//		H.tag[p] = -1;
//		H.count--;
//		return SUCCESS;
//	}
//}
//
//Status DestroyHash(HashTable &H){
//	free(H.rcd);
//	free(H.tag);
//	H.size = H.count = 0;
//	//H.hash = H.collision = NULL;
//	return SUCCESS;
//}
//
//Status RebuildHash(HashTable &H){
//	RcdType *nrcd;
//	nrcd = (RcdType *)realloc(H.rcd, (H.size + H.increment)*sizeof(RcdType));
//	int *ntag;
//	ntag = (int *)realloc(H.tag, (H.size + H.increment)*sizeof(int));
//	if (NULL == nrcd || NULL == ntag)
//		return OVERFLOW;
//	H.rcd = nrcd;
//	H.tag = ntag;
//	for (int i = H.size; i<H.size + H.increment; i++)
//		H.tag[i] = 0;
//	H.size += H.increment;
//	return SUCCESS;
//}
//
//void PrintHash(HashTable H){
//	int i = 0;
//	for (; i<H.size; i++){
//		if (H.tag[i] == 1)
//			printf("%d ", H.rcd[i].key);
//		else
//			printf("NaN ");
//	}
//}
//int main()
//{
//	HashTable H;
//	InitHash(H, 1, 1, hash_t, collision_t);
//	RcdType a[10] = { 36, 12, 22, 32, 42, 52, 62, 72, 82, 92 };
//	int i = 0, c;
//	while (i<10){
//		c = InsertHash(H, a[i]);
//		if (c>=H.size/2)
//			RebuildHash(H);
//		i++;
//	}
//	PrintHash(H);
//	system("pause");
//}
//
