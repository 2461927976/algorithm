// 矩阵乘法1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

void 矩阵乘法(double *A,double *B,double *C,int m,int k,int n){
	for(int i=0;i<m;i++){
		for(int j=0,sum;j<n;j++){
			sum=i*n+j;
			C[sum]=0.0;
			for(int t=0;t<k;t++){
				C[sum]+=A[i*k+t]*B[t*n+j];
			}
		}
	}
} 
void 显示矩阵(double *M,int row,int col){
	for(int i=0;i<row*col;i++){
		cout<<*M<<" ";
		M++;
		if((i+1)%col==0){
			cout<<endl;
		}
	}
} 
void 读入矩阵(double *M,int row,int col,ifstream& infile){
	for(int i=0;i<row*col;i++){
		infile>>*M++;
	}
} 

int main()
{
	cout<<"矩阵乘法C=AB"<<endl;
	int m,n,k;
	double *A,*B,*C;
	ifstream in("矩阵数据.txt");
	if(in==0){
		cout<<"打开文件失败,返回..."<<endl;
		return 0;
	} 
	in>>m>>k;
	A=new double[m*k];
	读入矩阵(A,m,k,in);
	int temp=k;
	in>>k>>n;
	B=new double[k*n];
	读入矩阵(B,k,n,in);
	cout<<"矩阵A:"<<endl;
	显示矩阵(A,m,k);
	cout<<"矩阵B:"<<endl;
	显示矩阵(B,k,n);
	in.close();
	if(k==temp){
		C=new double[m*n];
		矩阵乘法(A,B,C,m,k,n);
		cout<<"矩阵C:"<<endl;
		显示矩阵(C,m,n);
		delete[] C; 
	} 
	else{
		cout<<"不满足乘法条件\n";
	}
	delete[] A;
	delete[] B;
	system("pause");
	return 0;
}

