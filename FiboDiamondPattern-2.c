#include <stdio.h>
int main() {
    int n, l;
    scanf("%d",&n);
    
    if(n%2==0)
        l=n+1;
    else
        l=n;
        
    int fib[l];
    fib[0]=0;
    fib[1]=1;
    for(int f=2; f<=l; f++){
        fib[f]=fib[f-1]+fib[f-2];
    }
    // for(int m=0; m<=l; m++){
    //     printf("%d  ",fib[m]);
    // }
    // printf("\n\n");
    int a=n/2+1, b=a-1, c=1;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            printf("   ");
        }
        for(int k=0; k<c; k++) {
            printf(" %d ",fib[k]);
        }
        b--;
        c+=2;
        printf("\n");
    }
    
    int x=a-1, y=1, z=c-2-2;
    for(int i=1; i<=x; i++) {
        for(int j=1; j<=y; j++) {
            printf("   ");
        }
        for(int k=0; k<z; k++){
            printf(" %d ",fib[k]);
        }
        y++;
        z-=2;
        printf("\n");
    }
}
