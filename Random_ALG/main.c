#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int randRange(int value) /*function for which maximum cardinality is store*/
{
    int limit; /* time limit */
    int random;
    limit=RAND_MAX-(RAND_MAX %value); /* return a uniform value in the range (0,n-1) for any positive n */
    while((random=rand())>=limit);
    return random % value; /*random solution */
}

int main (int argc, char **argv)  /* rand function */
{
    int add, duration;
    srand(time(NULL));
    for(add=0; add<40; add++)
    printf("%d ", randRange (duration));
}
