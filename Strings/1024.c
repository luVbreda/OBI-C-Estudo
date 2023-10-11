#include <stdio.h>
#include <string.h>

char frase[1100], invertido[1100];
int tamanho;

int main(){
    int quantidade;
    scanf(" %d", &quantidade);
    while(quantidade--){
        scanf(" %[^\n]s", frase);
        tamanho=strlen(frase);
        for(int i=0;i<tamanho;i++)
            if((frase[i]>='A'&&frase[i]<='Z')||(frase[i]>='a'&&frase[i]<='z')) frase[i]+=3;
        strcpy(invertido, frase);
        for(int i=0, j=strlen(invertido)-1;j>=0;i++, j--) 
            invertido[j]=frase[i];
        for(int i=tamanho/2;i<tamanho;i++) 
            invertido[i]--;
        printf("%s\n", invertido);
    }
    return 0;
}