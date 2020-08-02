#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int i,h=0,t=0;

    char name[128];
	//name = (char *)malloc(sizeof(char) * 128);
	//if (name == NULL) exit(1);

    srand(time(NULL));   // Initialization, should only be called once.

    printf("Who are you?\n");
    scanf("%s",name);
    printf("Hello, %s!\n",name);
    
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
    if(h>t)printf("You won\n");
    else printf("You lost\n");
    return 0;
}