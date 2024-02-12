#include<stdio.h>
int main(){
    float value1,value2;
    char operator;

    printf("Type your expression: ");
    scanf("%f %c %f", &value1,&operator,&value2);

    switch (operator)
    {
    case '+':
        printf("%.2f\n",value1+value2);
        break;
    case '-':
        printf("%.2f\n",value1-value2);
        break;
    case '*':
        printf("%.2f\n",value1*value2);
        break;
    case '/':
    if(value2==0){
        printf("Division by zero\n");
    }else
        printf("%.2f\n",value1/value2);
        break;
    
    default:
        printf("Whatever");
        break;
    }    
    return 0;
}