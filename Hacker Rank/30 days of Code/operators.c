#include<stdio.h>
int main()
{
    double mealCost;
    int tipPercent,taxPercent,totalCost;
    scanf("%lf%d%d",&mealCost,&tipPercent,&taxPercent);
    totalCost = mealCost+((mealCost*tipPercent)/100)+((mealCost*taxPercent)/100);
    printf("The total meal cost is %d dollars.\n",(int) totalCost);
    return 0;
}
