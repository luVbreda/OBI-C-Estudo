#include <stdio.h>

void ordenaCrescente(int *vet, int tam){
    int i=0;
    int aux;
    while(i<tam){
        int j=i-1;
        aux=vet[i];
        while(j>=0 && vet[j] > aux){
            vet[j+1]=vet[j];
            j--;
        }
        vet[j+1]=aux;
        i++;
    }
}

void copia(int *a, int *b){
    for(int i=0;i<3;i++) b[i]=a[i];
}

int main(){
    int vet[3], espelho[3];
    for(int i=0;i<3;i++) scanf(" %d", &vet[i]);
    copia(vet, espelho);

    ordenaCrescente(vet, 3);
    for(int i=0;i<3;i++) printf("%d\n", vet[i]);
    printf("\n");
    for(int i=0;i<3;i++) printf("%d\n", espelho[i]);
}