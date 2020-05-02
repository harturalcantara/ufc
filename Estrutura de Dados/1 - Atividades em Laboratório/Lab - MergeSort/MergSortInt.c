#include<stdlib.h>
#include<stdio.h>
 
void merge(int arr[], int l, int m, int r);
  //VER QUEM E MENOR
int min(int x, int y){ 

    return (x<y) ? x : y;
}
 
  ///MERGE SORTE INTERATIVO 
void mergeSort(int arr[], int n){

   int curr_size;  
   int left_start;

   for (curr_size=1; curr_size<=n-1; curr_size = 2*curr_size){
       for (left_start=0; left_start<n-1; left_start += 2*curr_size){
           
           int mid = left_start + curr_size - 1;
           int right_end = min(left_start + 2*curr_size - 1, n-1);
           merge(arr, left_start, mid, right_end);
       }
   }
}
  ///FUNCAO MERGE SORTE 
void merge(int arr[], int l, int m, int r){

    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
      ///CRINADO VETORES AUXILIARES
    int L[n1], R[n2];

    for (i = 0; i < n1; i++){
        L[i] = arr[l + i];
    }

    for (j = 0; j < n2; j++){
        R[j] = arr[m + 1+ j];
    }
 
    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2){
        if (L[i] <= R[j]){

            arr[k] = L[i];
            i++;
        }
        else{

            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2){

        arr[k] = R[j];
        j++;
        k++;
    }
}
 
  ///FUNCAO IMPRIMIR ELEMENTOS DO VETOR
void imprimirVetor(int A[], int size){
    int i;
    for (i=0; i < size; i++){

        printf("%d ", A[i]);
    }

    printf("\n");
}
  ///FUNCAO MAIN 
int main(){

    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printf("VETOR RECEBIDO\n");
    imprimirVetor(arr, n);
 
    mergeSort(arr, n);
 
    printf("O VETOR ORDENADO\n");

    imprimirVetor(arr, n);

    return 0;
}