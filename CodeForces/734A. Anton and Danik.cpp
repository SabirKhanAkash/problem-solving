#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long int n,i,ScoreAnton=0,ScoreDanik=0;
    string game;
    cin>>n;
    cin>>game;
    for (i=0 ; i<game.size() ; i++) {
        if (game[i] == 'A')
            ScoreAnton++;
        else if (game[i] == 'D')
            ScoreDanik++;
    }
    if (ScoreAnton>ScoreDanik)
        cout<<"Anton\n"<<endl;
    else if (ScoreAnton<ScoreDanik)
        cout<<"Danik\n"<<endl;
    else if (ScoreAnton==ScoreDanik)
        cout<<"Friendship\n"<<endl;
    return 0;
}
