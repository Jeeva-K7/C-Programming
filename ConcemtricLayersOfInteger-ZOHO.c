#include<stdio.h>
int main(){
    printf("INPUT: ");
    int r; scanf("%d",&r);
    int n = r + (r-1);
    int arr[n][n];
    for(int l=0; l<n; l++){
        for(int i=l; i<n-l; i++){
            for(int j=l; j<n-l; j++){
                arr[i][j]= r-l;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
