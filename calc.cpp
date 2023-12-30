#include<iostream>
using namespace std;
int main(){
                                     // SIMPLE CALCULATOR //
    
    
    float a,b;
    char op;
    cout<<"Enter numbers:"<<endl;
    cin>>a>>b;
    cout<<"Enter operator:";
    cin>>op;
   
   
    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    default:
        cout<<"!!INVALID INPUT!!";
        break;
    }

return 0;
}