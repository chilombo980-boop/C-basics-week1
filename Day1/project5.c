#include <stdio.h>

int main(){
    float num1,num2,result;
    char op;

    printf("Enter first number: ");
    scanf("%f",&num1);

    printf("Enter second number: ");
    scanf("%f",&num2);

    printf("Choose operation (+,-,*,/): ");
    scanf(" %c",&op);

    if(op=='+'){
        result=num1+num2;
        printf("Result = %.2f\n",result);
    }else if(op=='-'){
        result=num1-num2;
        printf("Result = %.2f\n",result);
    }else if(op=='*'){
        result=num1*num2;
        printf("Result = %.2f\n",result);
    }else if(op=='/'){
        if(num2!=0){
            result=num1/num2;
            printf("Result = %.2f\n",result);
        }else{
            printf("Error: Division by zero is not allowed.\n");
        }
    }else{
        printf("Invalid operation.\n");
    }

    return 0;
}
