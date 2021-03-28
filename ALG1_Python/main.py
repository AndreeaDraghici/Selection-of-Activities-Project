import random

start: int
finish: int
duration: int
no_of_activity: int

def activities(finish, start, duration1) : #function for activities
    arr: int
    arr [ 0 ] = 0
    arr [ 1 ] = duration [ 1 ]
    arr [ 2 ] = duration [ 2 ]
    iterator: int
    constant: int
    constant = 1
    aux: int
    aux = 1
    for iterator in range(no_of_activity) :
        if start [ iterator ] >= finish [ constant ] :
            aux = aux + 1
            arr [ aux ] = arr [ iterator ]
            constant = iterator
            print('Activity %d \n ' % iterator)
    arr [ 0 ] = aux
    return arr

# start = [ 0, 3, 1, 3, 4, 1, 8, 4, 10 ]
# finish = [ 1, 4, 3, 5, 6, 6, 2, 9, 11 ]
# duration = [ 1, 1, 2, 2, 2, 5, -6, 5, 1 ]

def number_generate(min, max) :
    number = random.randint(min, max)
    return number

n = number_generate(1, 10)
print("no of activity ", n)

start = number_generate(0, 23)
finish = number_generate(start,23 )
not finish == start

duration1 = number_generate(0, 59) #duration of mintes for the starting time
duration2 = number_generate(0,59) #duration of minutes for the finish time

print("start's hour ", start,duration1) #starting time
print("finish's hour ", finish,duration2) #finish time

