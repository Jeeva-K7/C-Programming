#include <stdio.h>
void pattern(int num){
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            if(i+j<=num){
                printf("  ");
            }
            else
                printf(" *");
        }
        printf("\n");
    }
}
int main() {
    int num;
    scanf("%d",&num);
    pattern(num);
}
