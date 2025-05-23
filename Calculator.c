#include<stdio.h>
int main() {
char operator;
printf("Choose an operator: ");
scanf("%c", &operator);

float a,b,result;
printf("Enter first value: ");
scanf("%f", &a);
printf("Enter second value: ");
scanf("%f", &b);

switch(operator) {

case '+':
    result = a + b;
    printf("Result: %.2f\n", result);
    break;
case '-':
    result = a - b;
    printf("Result: %.2f\n", result);
    break;
case '*':
     result = a * b;
     printf("Result: %.2f\n", result);
    break;
case '/':
    if(b != 0) {
     result = a / b;
     printf("Result: %.2f\n", result);
    } else {
    printf("Error: division by zero is not possible\n");
    }
     break;
default:
    printf("error\n");
    break;
}

return 0;
}
