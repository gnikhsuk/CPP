#include<iostream>
using namespace std;
int main(){
    char v;
    cout<<"Enter alphabet:";
    cin>>v;

    switch (v)
    {
    case 'a':
       cout<<"It is vowel";
        break;
    case 'e':
        cout<<"It is vowel";
        break;
    case 'i':
       cout<<"It is vowel";
        break;
    case 'o':
        cout<<"It is vowel";
        break;
    case 'u':
       cout<<"It is vowel";
        break;
          
    
    default:
        cout<<"It is consonent";
        break;
    }
    return 0;
}