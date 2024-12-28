#include<iostream>
using namespace std;

int main() {
    double num1 , num2, result;
    char opt;
    cout<<"This is a basic IO calculator."<<endl;
    cout<<"Enter the 1st number: ";
    cin>>num1;
    cout<<"Enter the operator: ";
    cin>>opt;
    cout<<"Enter the second no.: ";
    cin>>num2;

    if(opt == '+'){
        result = num1 + num2;
        cout<<num1<<" + "<<num2<<" = "<<result<<endl;
    }

    else if(opt == '-'){
        result = num1 - num2;
        cout<<num1<<" - "<<num2<<" = "<<result<<endl;
    }

    else if(opt == '*'){
        result = num1 * num2;
        cout<<num1<<" X "<<num2<<" = "<<result<<endl;
    }

    else if(opt == '/'){
        result = num1 / num2;
        cout<<num1<<" / "<<num2<<" = "<<result<<endl;
    }

    else{
        cout<<"error: choose from the desired input";
    }
    return 0;
}