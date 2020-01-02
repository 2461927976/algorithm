#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class A{
	public:
		A(){
			cout<<"A";
		}
		~A(){
			cout<<"~A";
		}
};

class B:public A{
	A *p;
	public:
	B(){
		cout<<"B";p=new A();
	}
	~B(){
		cout<<"~B";
		delete p;
	}
};

int main(int argc, char** argv) {
	B obj;
	return 0;
}
