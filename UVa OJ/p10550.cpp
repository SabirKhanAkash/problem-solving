#include<bits/stdc++.h>
int main()
{
    long long int i;
    int s,a,b,c,rot,t=0,FirstDegree,SecondDegree,ThirdDegree;
    for (i = 1 ;  ; i+=1){
        scanf("%d%d%d%d",&s,&a,&b,&c);
        if (s==0 && a==0 && b==0 && c==0)
            break;
        else {
            if(s<a){
            FirstDegree = 40 + s-a;
            }
            else {
                FirstDegree =  s-a;
            }

            if(b<a){
                SecondDegree = 40+b-a;
            }
            else {
                SecondDegree = b-a;
            }

            if(b<c){
                ThirdDegree = 40+b-c;
            }
            else {
                ThirdDegree = b-c;
            }
        }
        rot = (3*360 + 9*(FirstDegree + SecondDegree + ThirdDegree));
        printf("%d\n",rot);
    }

    return 0;
}
