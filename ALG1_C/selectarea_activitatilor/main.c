#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "selectare.h"
#include "selectare.c"

#define NMAX 100

int* activities( int start [NMAX],int duration [NMAX], int finish[NMAX],int  no_of_activity )
{
    int* arr=malloc(sizeof(int)*no_of_activity);  /*array arr of size n */
    arr[0]=0; /* arr  start from index 1 */
    arr[1]=duration [1];
    arr[2]=duration[2];
    int iterator;
    int constant=1;
    int aux=1;
    for(iterator=1; iterator< no_of_activity; iterator ++)
    {
        if (start[iterator]  >=  finish[constant] )
        {
            aux=aux+1;
            arr[aux]=arr[iterator];
            printf("\n activity %d \n ",iterator);
            constant=iterator;
        }
    }
    arr[0]=aux; /* make the first element of arr equal to iterator */
    return arr;
}

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

    f=fopen("data/activity_in.in","r");
    fscanf(f,"%d",&no_of_activity);

    g=fopen("data/activity_out.out","w");

    srand(time(NULL));
    for(add=0; add<40; add++)

        fprintf(g,"%d ", randRange (duration));

    fclose(f);
    fclose(g);
}



