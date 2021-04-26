#ifndef SELECTARE_H_INCLUDED
#define SELECTARE_H_INCLUDED
#define NMAX 100
/**
*  This is the function for selection activity
*  depending in the starting time and duration
* @param no_of_activity represents the total number of activities in a given time
*/
int* activities( int start [],int finish [],int duration [], int  no_of_activity );
/**
* This is the function for which maximum cardinality is store
* @param value is used for the random number generator
*/
int randRange(int value);
/**
*This is the rand function
*/
int main (int argc, char **argv);
int* activities( int start [NMAX],int duration [NMAX], int finish[NMAX],int  no_of_activity );

#endif // SELECTARE_H_INCLUDED
