#include <stdio.h>

int main(void){
	int N, comp, max=0;
	
	scanf(" %d", &N);;
	
	int seq[N];
	
	for(int i=0;i<N;i++){
		scanf(" %d", &seq[i]);
		if(i==0){
			comp=seq[i];
			max++;
		}
		if(seq[i]!=comp){
			max++;
			comp=seq[i];
		}
	}
	
	printf("%d\n", max);
	
}