#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int v, u, w;
}vertice;

vertice vert[124760];
int p[124750];

int compara(vertice* a, vertice* b){
    return a->w - b->w;
}

int componente(int i){
    if(i==p[i]) return i;
    return componente(p[i]);
}

int Kruskal(int k){
    int ans=0, v, u;
    for(int i=0; i<k;i++){
        v=componente(vert[i].v);
        u=componente(vert[i].u);
        if(v!=u) p[u] = p[v], ans+=vert[i].w;
    }
    return ans;
}

int main(){
    int N, M;
    scanf(" %d %d", &N, &M);

    for(int i=0;i<M;i++)
        scanf(" %d %d %d", &vert[i].v, &vert[i].u, &vert[i].w);

    qsort(vert, M, sizeof(vertice), compara);

    for(int i=1;i<=N;i++)
        p[i]=i;
    
    printf("%d\n", Kruskal(M));
}