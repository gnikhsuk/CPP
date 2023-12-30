#include<iostream>
using namespace std;
int main(){
int x;
        cout<<"enter num";
        cin>>x;
        int rem,num=0;
        for(int i=x;x>0;x=x/10){
            rem= x%10;
            num=num*10+rem; 
        }
        cout<<num;
        
        return 0;
}