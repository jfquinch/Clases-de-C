//Simulación cajero automático
#include<stdio.h>
//Si se declaran variables por fuera son globales
int i,x;
int account_numb_temp;
int amount_temp;
int passwd_temp;

struct account_details{//estructura con detalles de la cuenta
    int account_no;
    int password;
    int amount;
};
struct account_details s[3]={
    {123456789,1234,0},{12345678,5678,0},{0987654321,9876,0}
    };

int main(){
    while(1){//while con "(1)" es para una condición infinnita
        int choice;
        printf("\n---CAJERO AUTOMATICO---\n");
        printf("1. Depositar\n2. Retiro\n3.Balance\n4. Salir\n Escoja su opcion\t");
        scanf("%d",&choice);
        switch(choice)//Switch, es una estructura
        {
            case 1:{
                deposit();
                break;
            }
            case 2:{
                withdrawal();
                break;
            }
            case 3:{
                balance();
                break;
            }
            case 4:{
                exit(1);//Instrucción para terminar el problema
            }
            default:
                printf("Ingrese una opcion valida\n");
        }
        
    }
}
void withdrawal(){
    printf("\nIngrese el numero de la cuenta\t");
    scanf("%d",&account_numb_temp);//Guarda el numero de la cuenta en la variable "account_numb_temp"
    
    printf("\nIngrese la contraseña\t");
    scanf("%d",&passwd_temp);
    
    printf("\nIngrese el monto a retirar\t");
    scanf("%d",&amount_temp);

    x=validate(account_numb_temp,passwd_temp);
    if(s[x].amount<amount_temp){
        printf("\nNo tiene saldo disponible para el retiro")
    }
    else{
        s[x].amount-=amount_temp;
        printf("\nRs:%d")
    }
}
int validate(int account_numb_temp, int passwd_temp){
    for(i=0;i<3;i++){  //para evaluar un arreglo con for siempre comienza en 0.
        if(s[i].account_no==account_numb_temp){//se evalua la estructura "s" en la posición"[i]"(=0).Numero de cuenta
            if(s[i].password==passwd_temp){
                return i;
                break;
            }
            else{
                printf("\nLa contraseña no es correcta");
                exit(1);//Sale al menu principal
            }
        }
        if(i==2)
        {
            printf("\nLa cuenta no existe");
            exit(1);
        }   
    }
}