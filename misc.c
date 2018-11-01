#include <stdio.h>
#include <string.h>
#include "object.h"
#include "misc.h"

TARGY *targyelemzo(const char *fonev){
    TARGY *ta, *talalt = NULL;
    for (ta = targyak; ta < targyak_vege; ta++){
        if(fonev != NULL && strcmp(fonev, ta->lenyeg) == 0){
            talalt = ta;
        }
    }
    return talalt;
}

int targyakhelyeineklistaja(TARGY *helyszin){
    int szamol = 0;
    TARGY *ta;
    for(ta = targyak; ta < targyak_vege; ta++){
        if(ta != player && ta->helyszin == helyszin){
            if(szamol++ == 0){
                printf("You see:\n");
            }
            printf("%s\n", ta->leiras);
        }
    }
    return szamol;
}
