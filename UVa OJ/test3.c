#include <stdio.h>
#include <stdlib.h>

int smI,smA,smB,smC,smAnswer;

int readCase(){
    scanf("%d%d%d%d\n",&smI,&smA,&smB,&smC);
    if((smI == 0) && (smA ==0) && (smB==0) && (smC==0)){
        return 0;
    }
    return 1;
}

void solveCase(){
    int smFirstDegree,smSecondDegree,smThirdDegree;
    if(smI<smA){
        smFirstDegree = 40 + smI - smA;
    }else{
        smFirstDegree = smI-smA;
    }

    if(smB<smA){
        smSecondDegree = 40 + smB - smA;
    }else{
        smSecondDegree = smB - smA;
    }

    if(smB<smC){
        smThirdDegree = 40 + smB - smC;
    }else{
        smThirdDegree = smB - smC;
    }

    smAnswer = 1080 + 9*(smFirstDegree + smSecondDegree + smThirdDegree);
    printf("%d\n",smAnswer);
}

int main()
{
    //freopen("input.txt","r",stdin);
    while(readCase()){
        solveCase();
    }
    return 0;
}
