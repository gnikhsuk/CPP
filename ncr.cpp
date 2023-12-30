#include<iostream>
using namespace std;
float fact(int n){
    float fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
return fact;
}
float ncr(int n,int r){
    float ncr = fact(n)/(fact(n-r)*fact(r));
    return ncr;
}


int main(){
    int n,r;
    cout<<"Enter value of n and r to get nCr:";
    cin>>n>>r;
   if(n<r){
     cout<<"Invalid input";
    }
    else
    cout<<ncr(n,r);
return 0;    
}