#include<stdio.h>
#include<conio.h>

int main(){
    int num;
    printf("enter the number which is to be summed \n");
    scanf("%d",&num);

    int start_num = num;

    int mod;
    

    int sum = 0;
    while(num!=0){
    mod = num%10;
   // printf("val of mod here : %d\t",mod);
    sum = sum + mod;
    num = num/10;

    }

    printf("the sum of numbers : %d  is : %d",start_num,sum);





    getchar();
    return 0;
}