// SOLID PATTERN OF FRAME //
#include<iostream>
using namespace std;
int main(){
    int l,w,i,j;
    cout<<"Enter length and width of frame:";
    cin>>l>>w;
    
for(i=0;i<l;i++){
    for(j=0;j<w;j++){
        if(i==0||i==l-1||j==0||j==w-1){
            cout<<"*";
        }
        else
        cout<<" ";
        
        
        }
    cout<<endl;
}
return 0;
}