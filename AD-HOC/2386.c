#include <stdio.h>
int main(){
	int abe, est, var[10000], qt=0;
	
	scanf(" %d", &abe);
	scanf(" %d", &est);
	
	for(int i=0;i<est;i++){
		scanf(" %d", &var[i]);
		if(var[i]*abe>=40000000){
			qt++;
		}
	}
	
	printf("%d\n", qt);
}