#include<iostream>
using namespace std;
void fib(int n){
    int f,t1=1,t2=-1;
    for(int i=0;i<n;i++){
        f=t1+t2;
        t2=t1;
        t1=f;
        
        cout<<f<<" ";
    }
    
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    fib(n);
return 0;
}