#include<stdio.h>
#include<time.h>
#include "selectare.h"

int randRange(int value) /*function for which maximum cardinality is store*/
{
    int limit; /* time limit */
    int random;
    limit=RAND_MAX-(RAND_MAX %value); /* return a uniform value in the range (0,n-1) for any positive n */
    while((random=rand())>=limit);
    return random % value; /*random solution */
}

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
