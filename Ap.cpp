#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter hight of pyramid:";
    cin>>n;
    
for(int i=0;i<n;i++){
    for(int j=0;j<2*n;j++){
        
        if(j==n){
           cout<<"*";
        }
        else if(j>=n-i&&j<=n+i){
            cout<<"*";
        }
        else
        cout<<" ";
    }
    cout<<endl;
}
    return 0;
}