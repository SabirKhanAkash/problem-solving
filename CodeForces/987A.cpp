#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char colors[6][10] = { "purple", "green", "blue", "orange", "red", "yellow" };
    char powers[6][10] = {"Power ", "Time", "Space", "Soul", "Reality", "Mind"};
    string color;
    ll m,x,k=0;
    int flag =0;
    int index[6];
    scanf("%lld",&m);
    if(m == 0)
    {
        cout<<"6\nTime\nSpace\nPower\nReality\nMind\nSoul"<<endl;
    }
    else
    {
        x = 6 - m;
        for(int i=0 ; i<m ; i++)
        {
            cin>>(color);
            if(color == "purple")
                index[k++] = 0;
            else if(color == "green")
                index[k++] = 1;
            else if(color == "blue")
                index[k++] = 2;
            else if(color == "orange")
                index[k++] = 3;
            else if(color == "red")
                index[k++] = 4;
            else if(color == "yellow")
                index[k++] = 5;

        }

        printf("%lld\n",x);
        for(int in=0; in<6; in++)
        {
            for(int k=0 ; k<6; k++)
                if(in != index[k])
                {
                    flag = 0;
                    continue;
                }
                else
                {
                    flag = 1;
                    break;
                }
            if(flag == 0)
                cout<<powers[in]<<endl;
            flag = 0;
        }

    }


    return 0;
}

