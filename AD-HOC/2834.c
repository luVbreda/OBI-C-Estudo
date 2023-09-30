#include <stdio.h>
#include <stdlib.h>

int A, L, Xc, Yc, Xf, Yf, passos=0, mapa[15][15], resp;

int dl[]={0,0,-1,1};
int dc[]={1,-1,0,0};

int limite(int l, int c){
    return l>=1 && c>=1 && l<=A && c<=L && mapa[l][c]==0; 
}

int max(int a, int b) {
    return a > b ? a : b;
}

void labirinto(int l, int c){
    mapa[l][c]=1;
    passos++;

    if(l==Xf && c==Yf){
        resp = max(resp,passos);
    }
    else {
        for(int i=0;i<4;i++){
            int ll = l+dl[i];
            int cc = c+dc[i];
            if(limite(ll,cc)) labirinto(ll,cc);
        }
    }

    passos--;
    mapa[l][c]=0;
}

int main(){
    scanf(" %d %d  %d %d %d %d", &A, &L, &Xf, &Yf, &Xc, &Yc);

    for(int i=2;i<=A;i+=2)
    for(int j=2;j<=L;j+=2)
        mapa[i][j]=1;

    labirinto(Xc, Yc);
    printf("%d\n", resp);
}