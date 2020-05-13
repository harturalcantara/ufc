#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int n, int *v){
	int i, j, aux,k;
	k=n-1;
	for(i=0;i<n;i++){
		for(j=0;j<k; j++){
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
		k--;
	}
}

int main(){
	int vetor[3];
	int i;
	int vetorAux[3];
	for(i=0;i<3;i++){
		scanf("%d",&vetor[i]);
	}
	for(i=0;i<3;i++){
		vetorAux[i] = vetor[i];
	}

	bubbleSort(3,vetor);

	for(i=0;i<3;i++){
		printf("%d\n",vetor[i]);
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("%d\n",vetorAux[i]);
	}
	
}