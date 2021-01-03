#include<stdio.h>
int main()
{
    int T,age,i,initialAge;
    scanf("%d",&T);
    for (i=0 ; i<T ; i++)
    {
        scanf("%d",&initialAge);
        if (initialAge < 0) printf("Age is not valid, setting age to 0.\n");
        age =  initialAge + 3;
        if(age < 13 && age >0 ) printf("You are young\n");
        else if (age >=13 && age <=18 ) printf("You are a teenager.\n");
        else printf("You are old.\n");
    }

    return 0;
}
