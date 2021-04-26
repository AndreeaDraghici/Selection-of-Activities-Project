#include <stdlib.h>
#include"selectare.h"

int randRange(int value) /*function for which maximum cardinality is store*/
{
    int limit; /* time limit */
    int random;
    limit=RAND_MAX-(RAND_MAX %value); /* return a uniform value in the range (0,n-1) for any positive n */
    while((random=rand())>=limit);
    return random % value; /*random solution */
}

void read()
/*we display the activities according to the start and end time, selecting their duration*/
{
    int hour,minutes,i,time [100];
    /* No of activities represents the total number of activities in a given time*/
    printf("No of activities: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        iterator[i]=i+1;
        printf("Starting (hour,minutes) : ");
        scanf("%d %d",&hour,&minutes);
        start [i]=hour*60+minutes;  /*calculate the start based on the hour and minutes*/

        printf("Finish(hour,minutes): ");
        scanf("%d %d",&hour,&minutes);
        finish [i]=hour*60+minutes; /*calculate the finish based on the hour and minutes*/

        time[i]=finish[i]-start[i]; /* time=duration of activities */
        printf("Duration: %d minutes \n",time[i]);
    }
}

void sort()

/* sort the activities in ascending order after the end time, selecting the activity that ends the earliest*/
{
    int aux,change,i;
    do
    {
        change =0;
        for(i=0; i<n-1; ++i)
            if(finish[iterator[i]]>=finish[iterator[i+1]])
            {
                aux=iterator[i];
                iterator[i]=iterator[i+1];
                iterator[i+1]=aux;
                change =1;
            }
    }
    while(change!=0);
}

void write()

/*displays activities that do not overlap at the same time*/
{
    int last,i;
    for(last =0,i=1; i<n; ++i)
        if(start[iterator[i]]>=finish[iterator[last]])
        {
            printf("Activity: %d \n" ,iterator[i]+1);
        }
}
