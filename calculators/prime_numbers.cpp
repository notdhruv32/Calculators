#include<iostream>
using namespace std;

int main() {
    long int num, result, i = 2;
    char willu;
    
    cout<<"AI: HI I will determine whether a number is prime or not."<<endl;
    
    do
    {
    cout<<"AI: Enter a number. "<<endl;  
    //can eat ur whole ram and crash ur system in case of really high numbers.
    
    cout<<"YOU: ";
    cin>>num;
    
    for( i; i < 999999999999999; i++){
        result = num%i;
        
        if(i == num){
            continue;
        }
        
        else if(i > 999999999999990){
            cout<<"AI: "<<num<<" is prime.";
            return 0;
        }

        else if(result == 0){
            break;
        }

    }
    cout<<"AI: "<<num<<" is divisble by "<<i<<" so its not prime."<<endl;
    cout<<"AI: "<<i<<" X "<<num/i<<" = "<<num;
    cout<<endl<<"AI: Do you want to ask another about no. ?[y/n]";
    cout<<endl<<"YOU: ";
    cin>>willu;
    cout<<"------------------------------------------\n";
    } while (willu != 'n');
    cout<<"exiting..";
    
    

return 0;
}