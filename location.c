#include <stdio.h>
#include <string.h>
#include "location.h"
#include "object.h"
#include "misc.h"

void vegrehajtLook(const char *fonev){
    if(fonev != NULL && strcmp(fonev, "around") == 0){
        printf("You are in %s. \n", player -> helyszin -> leiras);
        targyakhelyeineklistaja(player->helyszin);
    }
    else{
        printf("I don't understand what you want to see.\n");
    }
}

void vegrehajtGo(const char *fonev){
    TARGY *ta = targyelemzo(fonev);
    if(ta == NULL){
        printf("You became blood-drunk.\n");
    }
    else if(ta == player->helyszin){
        printf("You are already there.\n");
    }
    else{
        printf("As you will.\n");
        player->helyszin = ta;
        vegrehajtLook("around");
    }
}
