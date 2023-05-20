#include<stdio.h>
int main()
{
    int g;
    printf("enter your score to know your grade");
    scanf("%d", &g);
    
    if (g<=30){
        printf("F\n");
    }
    else if (g>=31 && g<=40){
        printf("D\n");
    }
     else if (g>=41 && g<=50){
        printf("c\n");
    }
    else if (g>=51 && g<=60)
   { printf("B\n");}

else if (g>60 && g<=100)
{
    printf("A");
}
    return 0;

}