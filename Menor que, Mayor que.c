#include<stdio.h>

main(){
    int num;
    printf("Ingrese un numero \n");
    scanf("%d", &num);

    if (num<10)//condicion que evalua la variable "num" que recibe un valor por scanf
    {
        printf("El numero es menor que 10 \n");
    }
    else if(num==10)//condición evalua número igual a 10
    {
        printf("El numero es 10 \n" );
    }
    else if(num>90)
    {
        printf("El numero es mayor que 90 \n");
    }
    else{
        printf("El numero es mayor que 10 \n");//si el número (num)no es menor o igual a 10 
        //el número es mayor que 10
    }
   
}