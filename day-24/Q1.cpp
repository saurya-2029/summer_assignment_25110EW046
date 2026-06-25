#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1, str2;
    cout<<"enter string 1: ";
    cin>>str1;
    cout<<"enter string 2: ";
    cin>>str2;
    if(str1.length() != str2.length())
    {
        cout<<"not a rotation: "<<endl;
    }
    else
    {
        string temp = str1 + str2;
        if(temp.find(str2) != string::npos)
        cout<<"it is a rotation: "<<endl;
        else
        cout<<"it is not rotation: "<<endl;
    }
}    