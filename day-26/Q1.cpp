#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int n, guess, attempt=0;
    srand(time(0));
    n=rand()%100+1;
    cout<<"welcome to the number guessing game!"<<endl;
    cout<<"try and  guess it"<<endl;
    do
    {
        cout<<"enter your guess: ";
        cin>>guess;
        attempt++;
        if(guess>n)
            cout<<"too high"<<endl;
        else if(guess<n)
            cout<<"too low"<<endl;
        else
            cout<<"correct guess"<<endl;    
    }
    while(guess!=n);
    return 0;
}