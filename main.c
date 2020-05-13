#include <stdio.h>
#include <stdlib.h>

int suma_digitos(int);
int main(void) {
    int result;
    result=suma_digitos(1234);
    printf("%d",result);
    return 0;
}
int suma_digitos( int n1){
  
        return((n1%10)+digitos(n1/10)); //caso recursivo
}   
/*a) El programa está enfocado a sumar los digitos de un número 
 * entero.
 * b)El programa no funciona por dos razones.
 *         1)En la función "suma_digitos", mas precisamente en
 *     el caso recursivo , se llama a una funcion que no está definida
 *     "digitos", por ende el programa ni si quiera compila.
 *          2)Dicha funcion le falta el caso base , pues corrigiendo 
 *     el error 1 , el programa nunca saldria de la funcion "suma_digitos",
 *     por ende , no funcionaria.
