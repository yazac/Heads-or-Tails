#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,h=0,t=0;
    srand(time(NULL));   // Initialization, should only be called once.
    
    printf("Tossing a Coin...\n");

    for(i=0;i<3;i++){
        printf("Round %d: ",i+1);

        if((rand()%2)==0){
            printf("Heads\n");
            h++;
        }
        else{
            printf("Tails\n");
            t++;
        }
    }
    printf("Heads: %d, Tails: %d\n",h,t);
    return 0;
}