#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int main(){
    cout<<"Enter numbers:";
    int x,y;
    cin>>x>>y;
    cout<<add(x,y);
    
return 0;
}