#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "selectare.h"
#include "selectare.c"


int main (int argc, char **argv)
{
    int add,duration;

    read ();
    sort();
    write ();
    FILE *f , *g;

    f=fopen("data/activity_in.in","r");
    fscanf(f,"%d",&iterator);

    g=fopen("data/activity_out.out","w");

    srand(time(NULL));
    for(add=0; add<40; add++)

        fprintf(g,"%d ", randRange (duration));

    fclose(f);
    fclose(g);
}
