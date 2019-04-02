#include <stdio.h>
#include <stdlib.h>

#include "operations.h"

void menu(int num1Flag, int num1, int num2Flag, int num2 );
void results(int num1, int num2,int sum,int resta, float divide, int multiply,
             long factorialNum1, long factorialNum2 );
int getNumber(int value);

int main()
{
    int value;
    int num1;
    int num1Flag = 0;
    int num2;
    int num2Flag = 0;
    int sum;
    int resta;
    int multiply;
    int operatationFlag = 0;
    float divide;
    long factorialNum1;
    long factorialNum2;




    do{
        menu(num1Flag, num1, num2Flag, num2);
        scanf("%d", &value);

        switch(value){
            case 1:
                num1 = getNumber(value);
                num1Flag = 1;
                break;
            case 2:
                num2 = getNumber(value);
                num2Flag = 1;
                break;
            case 3:
                   if(!(num1Flag && num2Flag)){
                        printf("\n\nSe debe ingresar los operando primero\n\n");
                    }else{
                        sum = operatationSum(num1, num2);
                        resta = operatationResta(num1, num2);
                        divide = operatationDivide(num1, num2);
                        multiply = operatationMultiply(num1, num2);
                        factorialNum1 = operatationFactorial(num1);
                        factorialNum2 = operatationFactorial(num2);
                        operatationFlag = 1;
                        printf("\n\nSe realizo correctamente las operaciones\n\n");
                    }
                break;
            case 4:
                if(!(num1Flag && num2Flag)){
                    printf("\n\nSe debe ingresar los operandos Primero\n\n");
                }else if (!operatationFlag){
                        printf("\n\nSe debe realizar las operaciones primero\n\n");
                }else{
                    results(num1, num2,sum, resta, divide, multiply, factorialNum1, factorialNum2);
                    }
                break;
        }

        system("pause");
    }while(value !=5);

    return 0;
}

void menu(int num1Flag, int num1, int num2Flag, int num2){
    system("cls");
    printf("\n\nMENU DE OPCIONES \n");

    if(!num1Flag){
        printf("1. Ingresar 1er operando (A=x)\n");
    }else{
        printf("1. Ingresar 1er operando (A=%d)\n", num1);
    }
    if(!num2Flag){
        printf("2. Ingresar 2do operando (B=y) \n");
    }else{
        printf("2. Ingresar 2do operando (B=%d) \n", num2);
    }
    printf("3. Calcular todas las operaciones \n");
    printf("    a) Calcular la suma (A+B)) \n");
    printf("    b) Calcular la resta (A-B)\n");
    printf("    c) Calcular la division (A/B)\n");
    printf("    d) Calcular la multiplicacion (A*B)\n");
    printf("    e) Calcular el factorial (A!)\n");
    printf("4. Informar resultados\n");
    printf("5. Salir\n");

}

int getNumber(int value){

    int num;

    if(value == 1){
        printf("\n\nIngrese Numero: ");
        scanf("%d", &num);
    }else{
        do{
            printf("\n\nIngrese Numero distinto de cero: ");
            scanf("%d", &num);
        }while( num == 0 );

    }


    return num;
}

void results(int num1, int num2,int sum,int resta, float divide, int multiply,
             long factorialNum1, long factorialNum2 ){

    printf("    a) El resultado de %d+%d es: %d\n", num1, num2, sum);
    printf("    b) El resultado de %d-%d es: %d\n", num1, num2, resta);
    printf("    c) El resultado de %d/%d es: %.2f \n", num1, num2, divide);
    printf("    d) El resultado de %d*%d es: %d\n", num1, num2, multiply);
    printf("    e) El factorial de %d es: %ld y El factorial de %d es: %ld\n",num1, factorialNum1, num2, factorialNum2);
}
