#include <stdio.h>
#include <stdlib.h>

int main(){
	long int n, i, d;
	scanf("%ld",&n);
	
	for(i=0; i<n;i++){
		scanf("%ld",&d);


		if(d == 0){
			printf("NULL\n");
		} 
		else if(d>0){

			if(d%2==0){
				printf("EVEN POSITIVE\n");
			}
			else{
				printf("ODD POSITIVE\n");
			}
		}
		else {
			if(d%2==0){
				printf("EVEN NEGATIVE\n");
			}
			else{
				printf("ODD NEGATIVE\n");
			}
		}
	}


}