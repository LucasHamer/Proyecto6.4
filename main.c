#include <stdio.h>
#include <stdlib.h>

int validar(int,int,int);
int resto(int,int);
int espar(int);
int esprimo(int);
float promedio(int,int);

int main()
{
    int valor,primo,cprimo=0,par,cpar=0,contador=0,suma=0;
    float prom=0;

    valor=validar(1,50,-10);

    while(valor!=-10)
    {
        primo=esprimo(valor);
        if(primo==1)
        {
            cprimo++;
        }
        par=espar(valor);
        if(par==1)
        {
            cpar++;
        }
        if(par==0)
        {
            contador++;
            suma+=valor;
        }
        valor=validar(1,50,-10);
    }
    prom=promedio(suma,contador);
    printf("Numeros Primos: %d\n",cprimo);
    printf("Numeros Pares: %d\n",cpar);
    if(prom>0)
    {
        printf("Promedio Impares: %.2f\n",prom);
    }

    return 0;
}
int validar(int i,int f,int n)
{
    int dato;
    do{
        printf("Ingrese el numero: ");
        scanf("%d",&dato);
    }while((dato<i||dato>f)&&dato!=n);

    return dato;
};
int resto(int dividendo,int divisor)
{
    int resto=0;

    resto=dividendo%divisor;

    return resto;
};
int espar(int num)
{
    int espar,nump;
    nump=resto(num,2);
    if(nump==0)
        espar=1;
    else
        espar=0;
    return espar;
};
int esprimo(int num)
{
    int esprimo=0,x;
    for(x=1;x<=num;x++)
    {
        esprimo+=resto(num,x);
    }
    if(esprimo==2)
        esprimo=1;
    else
        esprimo=0;

    return esprimo;
};
float promedio(int sum,int conta)
{
    float promedio;

    promedio=sum/conta;

    return promedio;
};
