#include <stdio.h>
#include <string.h>
#include "location.h"

static char iras[100];

static int beker(){
    printf("How shall I be of help?");
    return fgets(iras, sizeof(iras), stdin) != NULL;
}

static int vizsgalEsElvegez(){
    char *ige = strtok(iras, " \n");
    char *fonev = strtok(NULL," \n");
    if(ige != NULL){
        if(strcmp(ige, "quit") == 0){
            return 0;
        }
        else if(strcmp(ige, "look") == 0){
            vegrehajtLook(fonev);
        }
        else if(strcmp(ige, "go") == 0){
            vegrehajtGo(fonev);
        }
        else{
            printf("You died.\n");
        }
    return 1;
    }
}

int main(){

    printf("Welcome to Bloodborne\n");
    vegrehajtLook("around");
    while (beker() && vizsgalEsElvegez());
    printf("\nBye, Hunter!\n");

return 0;
}
