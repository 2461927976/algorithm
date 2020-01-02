#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int v1,v2,t,s,l;
	cin>>v1>>v2>>t>>s>>l;
	int maxtime=l/v2;  
    int time;  
    int l1=0,l2=0;  
    for(time=0;time<maxtime;time++){  
        if(l1-l2>=t){  
            l2=l2+v2*s;  
                time=time+s-1;  
            if(l2>=l) {  
                cout<<"R"<<endl; 
				cout<<time+1; break;  
            }  
            continue ;  
        }  
        else{  
            l1=l1+v1;  
            l2=l2+v2;  
            if(l1>l&&l2<l) {  
                cout<<"T"<<endl;
				cout<<time+1; break;  
            }  
            if(l1>l&&l2>l) {  
              if(((l-l1)/v1-(l-l2)/v2)>0){  
                cout<<"T"<<endl;
				cout<<time+(l-l1)/v1;break;  
            }  
            else{  
            cout<<"R"<<endl;
			cout<<time+(l-l2)/v2; break;    
                  
            }  
            }  
          
          
                if(l2>l&&l1<l) {  
                cout<<"R"<<endl;
				cout<<time+1; break;  
            }  
            if(l2==l2&&l1==l){  
                cout<<"D"<<endl;
				cout<<time+1; break;  
            }  
        }  
    }
	return 0;
}
