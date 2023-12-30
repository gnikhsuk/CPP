#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;

int i=2;
while (i<n/2)
{
    if(n%i==0){
        cout<<"Not prime";
        break;
    }
    i++;
    
}
if(i==n/2){
    cout<<"Prime";
}

return 0;
}