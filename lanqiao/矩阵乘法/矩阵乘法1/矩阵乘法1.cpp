// ����˷�1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

void ����˷�(double *A,double *B,double *C,int m,int k,int n){
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
void ��ʾ����(double *M,int row,int col){
	for(int i=0;i<row*col;i++){
		cout<<*M<<" ";
		M++;
		if((i+1)%col==0){
			cout<<endl;
		}
	}
} 
void �������(double *M,int row,int col,ifstream& infile){
	for(int i=0;i<row*col;i++){
		infile>>*M++;
	}
} 

int main()
{
	cout<<"����˷�C=AB"<<endl;
	int m,n,k;
	double *A,*B,*C;
	ifstream in("��������.txt");
	if(in==0){
		cout<<"���ļ�ʧ��,����..."<<endl;
		return 0;
	} 
	in>>m>>k;
	A=new double[m*k];
	�������(A,m,k,in);
	int temp=k;
	in>>k>>n;
	B=new double[k*n];
	�������(B,k,n,in);
	cout<<"����A:"<<endl;
	��ʾ����(A,m,k);
	cout<<"����B:"<<endl;
	��ʾ����(B,k,n);
	in.close();
	if(k==temp){
		C=new double[m*n];
		����˷�(A,B,C,m,k,n);
		cout<<"����C:"<<endl;
		��ʾ����(C,m,n);
		delete[] C; 
	} 
	else{
		cout<<"������˷�����\n";
	}
	delete[] A;
	delete[] B;
	system("pause");
	return 0;
}

