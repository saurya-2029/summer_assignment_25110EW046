#include<iostream>
using namespace std;
int main()
{
    int choice, pin, p, newpin;
    float bal=1000.00, amt;
    pin=1234;  //just a pin for demo
    cout<<"enter pin: ";
    cin>>p;
    if(p!=pin)
    {
        cout<<"invalid pin. access denied";
        return 0;
    }
    do
    {
        cout<<"ATM menu"<<endl;
        cout<<"check balance"<<endl;
        cout<<"deposit money"<<endl;
        cout<<"withdraw money"<<endl;
        cout<<"change PIN"<<endl;
        cout<<"exit"<<endl;
        cout<<"enter your choices: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"your balance is "<<bal<<endl;
            break;
            case 2:
            cout<<"enter amount to deposit: ";
            cin>>amt;
            bal=bal+amt;
            cout<<"deposited succesfully"<<endl;
            cout<<"new balance"<<bal<<endl;
            break;
            case 3:
            cout<<"enter amount to withdraw: "<<endl;
            cin>>amt;
            if(amt>bal)
            cout<<"insufficient amount"<<endl;
            else
            {
                bal=bal-amt;
                cout<<"withdrawal successful"<<endl;
                cout<<"new balance"<<bal<<endl;
            }
            break;
            case 4:
            cout<<"enter correct PIN: ";
            cin>>p;
            if(p==pin)
            {
                cout<<"enter new PIN: "<<endl;
                cin>>newpin;
                pin=newpin;
                cout<<"PIN changed successful"<<endl;
            }
            else
            cout<<"Incorrect PIN "<<" try again"<<endl;
            break;
            case 5:
            cout<<"thank you for using ATM"<<endl;
            break;
            default:
            cout<<"invalid choice.  try agin"<<endl;
        }
    }
    while(choice!=5);
    return 0;    
}            