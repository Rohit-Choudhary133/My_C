#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int guess;
    time_t t;
    srand((unsigned)time(&t));
    int num = rand()%21;

    printf("\nThis is a guessing game.\n");
    printf("I have choosen a number between 0-20, which you have to guess.\n\n");
    
    for(int i=5; i>0; i--){
        printf("You have %d tr%s left.\n",i,/*if Statement*/ i==1 ? "y": "ies");
        printf("Enter a guess: ");
        scanf("%d",&guess);

        if(num==guess){
            printf("\nCongratulations. You guessed it!");
            return 0;
        }else if(guess<0 || guess>20){
            printf("Number must be between 0-20\n\n");
        }else if(num<guess){
            printf("Sorry, %d is wrong. My number is less than that.\n\n",guess);
        }else if(num>guess){
            printf("Sorry, %d is wrong. My number is more than that.\n\n",guess);
        }
    }
    printf("You loose!, The number was %d",num);
    
    return 0;
}