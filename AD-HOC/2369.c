#include <stdio.h>
int main(){
	int consumo, valor=0;
	
	scanf(" %d", &consumo);
	
	if(consumo>10){
		for(int i=0; i<consumo-10&&i<20;i++){
			valor++;
		}
	}
	if(consumo>30){
		for(int i=0;i<consumo-30&&i<70;i++){
			valor=valor+2;
		}
	}
	if(consumo>100){
		for(int i=0;i<consumo-100;i++){
			valor=valor+5;
		}
	}
	valor=valor+7;
	printf("%d\n", valor);
	
}