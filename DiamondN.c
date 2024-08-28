#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int dup=n;
    n-=1;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+(n-1); j++){
            if(i+j==dup || j==i+(n-1))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    // printf("%d",n);
    for(int i=1; i<n; i++){
        for(int j=1; j<=n+(n-1); j++){
            if(j-i==1 || i+j==n+(n-1))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
