#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int odd=1;
    int even=2;
    int a=n;
    int b;
    for(int i=1; i<=n; i++){
        
        for(int s=n; s>i; s--){
            printf(" \t");
        }
        a--;
        
        if(i%2!=0){
            for(int k=1; k<=i; k++){
                printf("%d\t",odd);
                odd+=2;
            }
        }
        else{
            for(int l=1; l<=i; l++){
                printf("%d\t",even);
                even+=2;
            }
        }
        
        printf("\n");
    }
}
