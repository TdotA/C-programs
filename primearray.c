#include<stdio.h>
#include<math.h>

int isPrime(int x){
    // if (x == 2 || x == 3){
    //     return 1;
    // } 
    // else if (x % 3 == 0){
    //     return 0;
    // }
    // else if (x < 2 || x % 2 == 0){
    //     return 0;
    // }
    // else if(x<9){
    //     return 1;
    // }

    for(int i=1; i <= x/2; i++){
        if(x % i == 0 || x % (i+2) == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int x[10][10];

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            x[i][j]=j+i*10;
            if (isPrime(x[i][j])==1){
                printf("%d\n", x[i][j]);
            }
            }
        }
    


    return 0;
}