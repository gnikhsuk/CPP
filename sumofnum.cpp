#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
int rem,sum=0;
for(int i=n;n>0;n=n/10){
    rem = n%10;
    sum+=rem;
}
cout<<sum<<endl;
return 0;
}