#include <stdio.h>

int main(){
	int alb, qtc, comp[300],qt=0,var[100]={'\0'};
	
	scanf(" %d %d", &alb, &qtc);
	for(int i=0,x=0;i<qtc;i++) scanf(" %d", &comp[i]);
	
	for(int i=0;i<qtc;i++)
		for(int x=0;x<qtc;x++)
			if(comp[x]==comp[i]){
				var[comp[x]-1]=comp[x];
				comp[i]='\0';
			}
	
	for(int i=0;i<100;i++) if(var[i]!='\0') qt++;

	alb=alb-qt;
	printf("%d\n", alb);
}