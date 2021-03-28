import random

n:int
finish:int
start:int
iterator:int

def read():
    hour: int
    minutes: int
    i: int
    time: int
    for i in range(n):
        iterator[i] = i + 1
        start[i] = hour * 60 + minutes
        finish[i] = hour * 60 + minutes
        time[i] = finish[i] - start[i]
        print('Duration %d minutes\n ' %time[i])

def sort() :
    aux: int
    change: int
    i: int
    change=0
    for i in range(n-1):
        if finish[iterator[i]] >= finish[iterator[i + 1]]:
            aux = iterator[i]
            iterator[i] = iterator[i+1]
            iterator[i+1]= aux
            change=1
    #while change !=0

def write():
    last: int
    i: int
    iterator: int
    for last in range(n):
        if start[iterator[i]] >= finish[iterator[last]]:
            print('Activity %d \n' % iterator[i] + 1)

def number_generate(min,max):
    number=random.randint(min,max)
    return number
n=number_generate(1,10)
print("No of activities: " ,n)

hour1=number_generate(0,23)
minutes1=number_generate(0,59)
hour2=number_generate(0,23)
minutes2=number_generate(0,23)

print( "Finish(hour,minutes): " , hour1,minutes1)
print( "Starting(hour,minutes): ", hour2, minutes2)
