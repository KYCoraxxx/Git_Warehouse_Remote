//
// Created by zhian on 2021/9/27.
//
#include<stdio.h>
#include<Windows.h>
#include<time.h>
int random(int a,int b){
    srand(time(NULL));
    int r=rand();
    return (r+a)%(b+1);
}
int main(){
    printf("You have 7 times to guess a number created by the system which ranged 1~100, every time the system will tell you if your answer is greater or smaller than the given number.\n");
    int n=random(1,100),m,flag=0,i;
    for(i=1;i<=7;i++){
        printf("Please input your answer,you still have %d times to try.\n",7-i+1);
        scanf("%d",&m);
        if(m==n){
            flag=1;
            printf("You Win in %d Tries!\n",i);
            break;
        }
        else if(m<n)
            printf("Your answer is smaller than the given number.\n");
        else
            printf("Your answer is greater than the given number.\n");
    }
    if(flag==0)
        printf("You lose...Please try again,if you take the correct strategy,it's impossible to fail!\n");
    system("pause");
    return 0;
}
