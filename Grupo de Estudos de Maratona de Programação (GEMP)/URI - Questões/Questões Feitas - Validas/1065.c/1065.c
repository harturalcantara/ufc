#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	//scanf("%d",&n);
	int i;
	int cont=0;
	for(i=0;i<5;i++){
		scanf("%d",&n);
		if(n%2==0){
			cont++;
		}
	}

	printf("%d valores pares\n", cont);
		
}
