#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Aluno: Rodrigo Otávio Cantanhede Costa.
//QUESTÃO 1:
/*
int conta_digitos(int n){
    int chave = 0;
    if((n / 10) == 0) //CASO BASE
        return 1;
    else if(n == 0 && chave == 0) //CASO BASE
        return 1;
    else{ //CASO RECURSIVO;
        return 1 + (conta_digitos(n / 10));
        chave = 1;
    }
}
int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("o numero de digitos do numero eh: %d", conta_digitos(n));
    return 0;
}

*/
//QUESTÃO 2:

int missing_truck_number(int arr[], int n){
    //Aqui eu repliquei a lista da Main e depois criei uma array auxiliar que recebia os valores de 1 a N:
    int array[9] = {1,2,3,4,5,7,8,9,10};
    int array_aux[n];
    int s = 1;
    int cont = 0;

    for (int i = 0; i < 10; i++) {

        array_aux[i] = s;
        s++;

    }

    //Nesse outro passo eu faço a comparação das duas arrays e quando são diferentes eu retorno o valor na array_aux e dou break no loop;
    for (int i = 0; i < 10; i++){
        if(array_aux[i] != array[i]){
            printf("%d", array_aux[i]);
            break;
        }
    //Essa implementação serve para caso não tenha caminhões perdidos:
        else
            cont++;

    }

    if (cont == 10)
        printf("Nenhum caminhao perdido");

}

int main(){
   int n = 10;
   int array[9]={1,2,3,4,5,7,8,9,10};
   int num = 10;
   missing_truck_number(array[9], num);


}


