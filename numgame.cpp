#include<cstdlib>
#include<time.h>
#include<iostream>
using namespace std;
void guess(int n);
int main(){
    int n=100;
    
    guess(n);
    
    return 0;
}
void guess(int n){
        int number,guessnum,numofguess=0;
        srand(time(0));
        number= rand()%n;
        cout<<"Enter number that i have in my mind:";
        
        do{
            
            cin>>guessnum;
            if(numofguess>10){
                cout<<"You lose!!!"<<endl<<"BETTER LUCK NEXT TIME!"<<endl;
                break;
                }
            if(guessnum>number){
                cout<<"TOO HIGH!!!"<<endl;
            }
            if(guessnum<number){
                cout<<"TOO LOW!!!"<<endl;
            }  
            if(guessnum==number){
                cout<<"You guess right in " <<numofguess<<" attempts"<<endl;
                break;
            }
            numofguess++;

        }while(1);

}
