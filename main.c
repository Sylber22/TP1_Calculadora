#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"

int main ()
{
    //variables

    float operando1=0;
    float operando2=0;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int factorial1;
    int factorial2;
    int bandera1, bandera2=0;
    int opcion;

    do
    {

        printf(" Menu");
        printf("\n 1-Ingresar primer operando (A=%f).",operando1);
        printf("\n 2-Ingresar segundo operando (B=%f).",operando2);
        printf("\n 3-Calcular todas las operaciones:");
        printf("\n  a)Suma");
        printf("\n  b)Resta");
        printf("\n  c)Division");
        printf("\n  d)Multiplicacion");
        printf("\n  e)Factorial");
        printf("\n 4-Informar resultados.");
        printf("\n 5-Salir de la calculadora.");
        printf(" Elija una opcion: \n");
        scanf ("%d", &opcion);

        switch(opcion)
        {
        case 1:
            bandera1=1;
            printf(" Ingrese primer numero: ");
            scanf ("%f", &operando1);
            break;
        case 2:
            bandera2=1;
            printf(" Ingrese segundo numero: ");
            scanf ("%f", &operando2);
            break;
        case 3:
            if (bandera1==1 && bandera2==1)
            {
                suma=funcionSuma(operando1,operando2);
                resta=funcionResta(operando1,operando2);
                if (operando2>1)
                {

                    printf("No se puede realizar el calculo\n");
                }
                else
                {
                    division=funcionDivision (operando1, operando2);

                }
                multiplicacion=funcionMultiplicacion (operando1, operando2);

                if (operando1<0)
                {
                    printf("No se puede realizar el calculo\n");
                }
                else
                {
                    factorial1=(int) funcionFactorial1 (operando1);
                }
                if (operando2<0)
                {
                    printf("No se puede realizar el calculo\n");
                }
                else
                {
                    factorial2=(int) funcionFactorial2 (operando2);
                }



            }
            else
            {
                printf ("\n Por favor vuelva al menu");
            }

            break;
        case 4:
            if (bandera1==1 && bandera2==1)
            {

                printf("\n El resultado de la suma es: %.2f",suma);
                printf ("\n El resultado de la resta es:%.2f", resta);
                printf ("\n El resultado de la division es:%.2f", division);
                printf ("\n El resultado de la multiplicacion es:%.2f", multiplicacion);
                printf ("\n El resultado del factoreo 1 es:%2.f", factorial1);
                printf ("\n El resultado del factoreo 2 es:%.2f", factorial2);

            }
            break;
        case 5:
            printf("\n Salir");
            break;
        default:
            printf("Error. Ingrese un dato correcto");


        }


    }
    while (opcion!=5);


    return 0;

}

