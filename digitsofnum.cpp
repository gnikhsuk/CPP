#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
int rem,rev=0;
for(int i=n;n>0;n=n/10){
    rem = n%10;
    rev=rev*10+rem;
}

for(int i=rev;i>0;i=i/10){
    cout<<i%10<<" ";
}

return 0;
}