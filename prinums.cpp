#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter numbers:";
    cin>>a>>b;
    int i,j;
    for(i=a;i<=b;i++){
        for(j=2;j<=i;j++){
        if(i%j==0){
            break;
        }
        }
        if(i==j)
        cout<<i<<endl;
    }
}