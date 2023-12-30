#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int num=n;
int i,p=0;
for(i=num;num>0;num=num/10){
    p++;
}

int armsum=0,rem;
for(int j=n;j>0;j=j/10){
    rem=j%10;
    armsum=armsum+pow(rem,p);
    
}

if(armsum==n){
    cout<<"Given number is armstrong number";
}
else
cout<<"Not a armstrong number";
return 0;
}