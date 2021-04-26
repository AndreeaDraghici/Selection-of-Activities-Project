#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "selectare.h"
#include "selectare.c"


int main (int argc, char **argv)  /* rand function */
{
    int add;

    int start[]= {0,3,1,3,4,1,8,4,10}; /*starting time*/
    int finish[]= {1,4,3,5,6,6,2,9,11,}; /*finishing time*/
    int duration[]= {1,1,2,2,2,5,-6,5,1}; /*activities's duration */

    int no_of_activity;
    printf("no_of_activity: ");
    scanf(" %d", &no_of_activity);  /* total number of activities */
    int *point= activities(duration,start,finish,no_of_activity);
    FILE *f , *g;

    f=fopen("activity_in.in","r");
    fscanf(f,"%d",&no_of_activity);

    g=fopen("activity_out.out","w");

    srand(time(NULL));
    for(add=0; add<40; add++)

        fprintf(g,"%d ",randRange( duration));

    fclose(f);
    fclose(g);
}



