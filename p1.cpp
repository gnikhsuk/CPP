/* SOLID PATTERN 
     ***
     ***
     *** 
*/
#include<iostream>
using namespace std;
int main(){
    int n,i,j,m;
    cout<<"Enter number of rows and columns:";
    cin>>m>>n;
    
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cout<<"*";
    }
    cout<<endl;
}

return 0;
}
