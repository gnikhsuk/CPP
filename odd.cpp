#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%2==0){
           continue;
           
        }
        else
        cout<<i<<endl;
    
        
        
    }
    return 0;
}