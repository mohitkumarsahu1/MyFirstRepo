#include <stdio.h>
int sum(int a , int b){
    return a+b;
}



void main(){
    printf("""Hello World\n");
    int res= sum(5,6);
    printf("%d", res);
}
