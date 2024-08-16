#include<stdio.h>
int main() {
    int n,a,fl=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        a++;
        arr[i]=a;
        a++;
    }
    // for(int j=0; j<n; j++){
    //     printf("%d ",arr[j]);
    // }
    printf("\n");
    
    for(int k=1; k<=arr[n-1]; k++)
         printf("*");
    printf("\n");
    for(int i=1; i<n; i++){
        for(int j=1; j<arr[n-1]; j++){
            if(i==j)
                printf("*");
            else
                printf(" ");
                
            if(j>=n){
                if(i+j==arr[n-1])
                    printf("*");
            }
        }
        printf("\n");
    }
    for(int i=1; i<n; i++)
        printf(" ");
    printf("*");

}
