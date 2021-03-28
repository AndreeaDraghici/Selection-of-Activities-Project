#ifndef SELECTARE_H_INCLUDED
#define SELECTARE_H_INCLUDED

/*
 Implement the first method to sort the activities in ascending order after the final time.
 Select the first activity, the one that ends the earliest.
After that we will select, each step, the first unselected activity, which does not overlap with those already selected.
 */
void read() ;
void sort() ;
void write() ;
int randRange(int value) ;


#endif // SELECTARE_H_INCLUDED
