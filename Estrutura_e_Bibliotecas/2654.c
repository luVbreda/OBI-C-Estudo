#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char nome[150];
    int poder, abates, mortes;
    bool apto;
}Deus;

Deus godofor[150];

void ordenaPoder(Deus *godofor, int tam){
    int i=1, j;
    Deus golias;

    while(i<tam){
        j=i-1;
        golias=godofor[i];

        while(j>=0 && godofor[j].poder < golias.poder){
            godofor[j+1] = godofor[j];
            j--;
        }
        godofor[j+1]=golias;
        i++;
    }
}

void ordenaAbates(Deus *godofor, int tam){
    int i=1, j;
    Deus golias;

    while(i<tam){
        j=i-1;
        golias=godofor[i];

        while(j>=0 && godofor[j].abates < golias.abates){
            godofor[j+1] = godofor[j];
            j--;
        }
        godofor[j+1]=golias;
        i++;
    }
}

void ordenaMortes(Deus *godofor, int tam){
    int i=1, j;
    Deus golias;

    while(i<tam){
        j=i-1;
        golias=godofor[i];

        while(j>=0 && godofor[j].mortes > golias.mortes){
            godofor[j+1] = godofor[j];
            j--;
        }
        godofor[j+1]=golias;
        i++;
    }
}

void ordenaNome(Deus *godofor, int tam){
    int i=1, j;
    Deus golias;

    while(i<tam){
        j=i-1;
        golias=godofor[i];

        while(j>=0 && strcmp(godofor[j].nome, golias.nome)>0){
            godofor[j+1] = godofor[j];
            j--;
        }
        godofor[j+1]=golias;
        i++;
    }
}

int main(){
    int N;
    scanf(" %d", &N);

    for(int i=0;i<N;i++) scanf(" %s %d %d %d", godofor[i].nome, &godofor[i].poder, &godofor[i].abates, &godofor[i].mortes);

    ordenaNome(godofor, N);
    ordenaMortes(godofor, N);
    ordenaAbates(godofor, N);
    ordenaPoder(godofor, N);

    printf("%s\n", godofor[0].nome);
}