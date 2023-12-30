//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

#include<iostream>
using namespace std;
float fact(int n){
    float fact=1;                                
    for(int i=1;i<=n;i++){                       
        fact=fact*i;                             
    }                                            
return fact;                                     
}
float ncr(int n,int r){
    float ncr = fact(n)/(fact(n-r)*fact(r));
    return ncr;
}


int main(){
    int n,r;
    cout<<"Enter numnber of row:";
    cin>>n;
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<ncr(i,j)<<" ";
    }                                            
    cout<<endl;
   }
    
return 0;    
}