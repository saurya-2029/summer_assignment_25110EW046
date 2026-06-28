#include<iostream>
using namespace std;
int main()
{
    int score=0, c;
    cout<<"welcome to the quiz";
    cout<<"-----------";
    char ques[5][200]={
        "1. what is the capitel of india?",
        "2. which is the longest day on earth?",
        "3. which planet is known as the red planet?",
        "4. what is the largeest ocean in the world?",
        "5. who wrote the play 'the merchant of venice'?"
    };
    //option
    char opt[5][4][200]={
        {"mumbai", "delhi", "kolkata", "chennai"},
        {"21 june", "21 december", "21july", "21 october"},
        {"earth", "mars", "jupiter", "venus"},
        {"indian ocean", "atlantic ocean", "pacific ocean", "arctic ocean"},
        {"william shakespeare", "chales dickens", "j.k. rowling", "mark twain"}
    };
    //answer
    int ans[5] = {2, 1, 2, 3, 1};
    for(int i=0; i<5; i++)
    {
        cout<<ques[i]<<endl;
        for(int j=0; j<4; j++)
        {
            cout<<j+1<<" "<<opt[i][j]<<endl;
        }
        cout<<"enter your choice: ";
        cin>>c;
        if(c==ans[i])
        {
            cout<<"correct!"<<endl;
            score++;
        }
        else
        cout<<"wrong! "<<endl<<"correct answer is: "<<opt[i][ans[i]-1];
    }
    cout<<"quiz over!"<<endl;
    cout<<"fiinal score: "<<score<<endl;
    return 0;
}