#include<iostream>
using namespace std;

main() {
    char value;
    int num1,num2;
    cout<<"enter first number :";
    cin>>num1;
    cout<<"what do u want :";
    cin>>value;
    cout<<"enter 2nd number :";
    cin>>num2;
    switch(value){
        case '+':cout<<"Addition :"<< num1 + num2;
        break;
        case '-':cout<<"Subtraction :"<< num1 - num2;
        break;
        case '*':cout<<"Multiplication :"<< num1 * num2;
        break;
        case '/':cout<<"Division :"<< num1 / num2;
        break;
        case '%':cout<<"Remainder :"<< num1 % num2;
        break;
        default: cout<<"invalid value";
    }
}





