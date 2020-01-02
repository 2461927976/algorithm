// 信息的加密与解密.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
using namespace std;
const int MAX=200;
char Key[MAX];
void bitcode(char src[],char obj[],int len){
	for (int i = 0; i < len; i++)
	{
		obj[i]=src[i]^Key[i];
	}
	obj[len]=0;
}
void makeKey(int len){
	for (int i = 0; i < len; i++)
	{
		Key[i]=rand()%10+'0';
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	char srcstr[]={"How are you?这是测试。"};
	char objstr[23];
	int length=strlen(srcstr);
	srand(time(NULL));
	makeKey(length);
	bitcode(srcstr,objstr,length);
	cout<<"密文："<<objstr<<endl;
	bitcode(objstr,srcstr,length);
	cout<<"原文："<<srcstr<<endl;
	system("pause");
	return 0;
}

