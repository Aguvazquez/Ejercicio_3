#include <stdio.h>
#include <stdlib.h>

int suma_digitos(int);
int main(void) {
    int result;
    result=suma_digitos(1234);
    printf("%d",result);      //Resultado = 10
    return 0;
}
int suma_digitos( int n1){
    if((n1%10)==0){	//Caso base.
	return 0;
    }
    else{
        return((n1%10)+suma_digitos(n1/10)); //caso recursivo.
    }   
}
