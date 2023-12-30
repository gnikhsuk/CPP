#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    int i,j;
    for(i=2;i<=n;i++){
        for( j=2;j<=i;j++){
        if(i%j==0){
            //cout<<"Not prime";
            break;
        }
        }
    if(i==j)
         cout<<i<<endl;
    }
    //if(i==n/2){
           
      //  }
    return 0;
}