#include<stdio.h>
int fib(int n){
    if(n<=1)
    return n;
    int a=0, b=1,c;
    for(int i=2; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main() {
    int n;
    scanf("%d",&n);
    int a=n/2+1, b=a-1, c=1;
    for(int i=1; i<=a;i++){
        for(int j=1; j<=b; j++){
            printf("  ");
        }
        for(int k=0; k<=c-1; k++){
            printf("%d ",fib(k));
        }
        b--;
        c+=2;
        printf("\n");
    }
    
    int x=a-1, y=1, z;
    if(n%2!=0)
        z=n-2;
    else
        z=n-1;
    for(int i=1; i<=x;i++){
        for(int j=1; j<=y; j++){
            printf("  ");
        }
        for(int k=0; k<=z-1; k++){
            printf("%d ",fib(k));
        }
        y++;
        z-=2;
        printf("\n");
    }
    if(n<0)
        printf("Invalid input");
}
