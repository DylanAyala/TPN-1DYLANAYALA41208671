#include <stdio.h>
int operatationSum(int num1, int num2){

    return num1 + num2;
}

int operatationResta(int num1, int num2){
    return num1 - num2;
}

float operatationDivide(int num1, int num2){
    return (float)num1 / num2;
}

int operatationMultiply(int num1, int num2){
return num1 * num2;
}

long operatationFactorial(int num){
    long rta;

    if(num == 1){
        return 1;
    }else{
        rta= num * operatationFactorial(num - 1);
    }
    return rta;
}
