#include <stdio.h>
#include <math.h>
int main(){
	int L,A,P,R;
	
	scanf(" %d %d %d %d", &L, &A, &P, &R);
	
	int caixa=L*A*P;
	int bola=(4*3.1415*R*R);
	
	
	if(L>R*2||A>R*2||P>R*2){
		printf("N\n");
	}
	else if(sqrt(L*L+A*A+P*P)>R*2){
		printf("N\n");
	}
	else if(L*A>(2*3.1415*R*R)||A*P>(2*3.1415*R*R)||L*P>(2*3.1415*R*R)){
		printf("N\n");
	}
	else{
		printf("S\n");
	}
}