#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int x, y;
    bool visitado;
}Coordenada;

int vencedor;

void percorre(int mat[5][5], Coordenada coordenadas[5][5], int i, int j){
    if(i >= 0 && i < 5 && j >=0 && j<5 && !vencedor){
        if(i==0 && j==0 && mat[i][j]==1) return;
        coordenadas[i][j].visitado = true;
        if(i==4 && j==4){
            vencedor = 1;
        }
        else {
            if(i+1 < 5 && mat[i+1][j]==0 && !coordenadas[i+1][j].visitado)
                percorre(mat, coordenadas, i+1, j);
            if(i-1 >=0 && mat[i-1][j]==0 && !coordenadas[i-1][j].visitado)
                percorre(mat, coordenadas, i-1, j);
            if(j+1 < 5 && mat[i][j+1]==0 && !coordenadas[i][j+1].visitado)
                percorre(mat, coordenadas, i, j+1);
            if(j-1 >=0 && mat[i][j-1]==0 && !coordenadas[i][j-1].visitado)
                percorre(mat, coordenadas, i, j-1);
        }
    }
}

int main(){
    int T, c;
    scanf(" %d", &T);

    for(int i=0;i<T;i++){
        int vetor[5][5];
        Coordenada coordenada[5][5];

        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                scanf(" %d", &c);
                vetor[j][k] = c;
                coordenada[j][k].x = j;
                coordenada[j][k].y = k;
                coordenada[j][k].visitado = false;
            }
        }
        vencedor = 0;
        percorre(vetor, coordenada, 0, 0);

        if(vencedor) printf("COPS\n");
        else printf("ROBBERS\n");
    }
}