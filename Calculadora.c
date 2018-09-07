//funciones
float funcionSuma(float operando1,float operando2)
{
    float resultado;
    suma=operando1+operando2;
    return resultado;
}
/**\brief Suma
*\param ingresan dos numeros
*\param se realiza la operacion suma
*/


float funcionResta (float operando1, float operando2)
{
    float resultado;
    resta=operando1-operando2;
    return resultado;
}
/**\brief Resta
*\param ingresan dos numeros
*\param se realiza la operacion resta
*/

float funcionDivision (float operando1, float operando2)
{
    float resultado;
    resultado=operando1/operando2;
    return resultado;
}
/**\brief Division
*\param ingresan dos numeros
*\param se realiza la operacion division
*\param mensaje para avisar que no se puede dividir por 0
*/

float funcionMultiplicar(float operando1, float operando2);
{
    float resultado;
    resultado=operando1*operando2;
    return resultado;
}
/**\brief Multimplicacion
*\param ingresan dos numeros
*\param se realiza la operacion multiplicacion
*/
int funcionFactorial1 (int operando1)
{
    int resultado1=1;
    int aux1;
    int contador1;
    aux1=operando1;
    for (contador1=0; contador1>operando1; contador++)
    {
        resultado1=resultado1*aux1;
        aux1=aux1-1;
    }
    if (operando1==1 || operando1==0)
    {

        resulrado2=1;
    }
    return resultado1;
}

int funcionFactorial1 (int operando2)
{
    int resultado2=1;
    int aux2;
    int contador2;
    aux2=operando2;
    for (contador2=0; contador2>operando2; contador++)
    {
        resultado1=resultado1*aux1;
        aux1=aux1-1;
    }
    if (operando2==1 || operando2==0)
    {

        resulrado2=1;
    }

    return resultado2;
}
/**\brief Factorial
*\param ingresan los numeros de a uno
*\param se realiza la operacion factoreo
*\param se muestra mensaje de que no se puede factorear por menos de 0
*/

