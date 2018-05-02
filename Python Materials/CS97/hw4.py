import random
from random import randint
from functools import reduce

'''
IMPORTANT:  The only function below that is allowed to use recursion is map2.
All other functions (including any helper functions you write) must not be
recursive.  Instead, they should make calls to one or more of map, filter, and
reduce to perform the necessary list traversals.
'''

def inRange(lo, hi, l):
    return list(filter(lambda x:x<=hi and x>=lo ,l))
    
    '''
    Returns all numbers in the list l that are between lo and hi (inclusive).
    >>> inRange(5, 15, [3, 15, 7, 21, 12, 34])
    [15, 7, 12]
    '''

def zeroNegatives(l):
        
    return list(map(lambda x: 0 if x<0 else x ,l))
    
                          
                             
    '''
    Replaces all negative numbers in list l with 0,
    leaving all other numbers unchanged.
    >>> zeroNegatives([1,3,-4,-6,5,-5])
    [1, 3, 0, 0, 5, 0]
    '''
def flatten(l):
    return reduce(lambda x,y: x+y,l)
    
    '''
    Flattens a list of lists into a single list.
    >>> flatten([[1,2], [3], [], [4,5,6]])
    [1, 2, 3, 4, 5, 6]
    '''


def halveEvens(l):
    removeOdd= list(filter(lambda x:x%2==0,l))
    return list(map(lambda x:x//2 , removeOdd))
    '''
    Removes all odd integers from l and divides each even number in half.
    The list l is assumed to be a list of integers, and the function returns
    a list of integers.
    >>> halveEvens([10,21,32,42,55])
    [5, 16, 21]
    '''


def map2(f,l1,l2):
    if l1==[]:
        return []
    elif l2==[]:
        return []
    else:
        return [f(l1[0],l2[0])] + map2(f,l1[1:],l2[1:])
    
    '''
    Behaves like the map function, but it traverses two lists simultaneously.
    Specifically, map(f, [x1,...,xn], [y1,...,yn]) returns [f(x1,y1), ..., f(xn,yn)].
    You may assume that l1 and l2 have the same length.
    >>> map2(lambda x,y: [x,y], [1,2,3], [4,5,6])
    [[1, 4], [2, 5], [3, 6]]
    '''
    
       
def dotProduct(v1, v2):
    multiply = map2(lambda x,y:x*y,v1,v2)
    return reduce(lambda x,y: x+y, multiply)

'''
    Computes the dot product of the vectors v1 and v2, each of which is a list
    of numbers.  The dot product of [x1,...,xn] and [y1,...,yn] is
    x1*y1 + ... + xn*yn.
    You may assume that v1 and v2 have the same length.
    NOTE: You will want to make use of the map2 function that you defined above.
    >>> dotProduct([1,2,3],[4,5,6])
    32    
'''
    
def dotProduct2(v1, v2):
    return reduce(lambda x,y:x+y,map2(lambda x,y:x*y,v1,v2))
    #return reduce(lambda x,y: x+y, multiply)


#def pascalTriangle(
    
def pascal(n):
    if n == 1:
        return [1]
    else:
        line = [1]
        previous_line = pascal(n-1)
        for i in range(len(previous_line)-1):
            line.append(previous_line[i] + previous_line[i+1])
        line += [1]
    return line


def divisors (n, low, high):
    '''Returns True if n has a divisor in the range from low to high.
    Otherwise returns False.'''
    if low > high:
        return False
    elif n % low == 0: # Is n divisible by low?
        return True
    else:
        return divisors (n , low + 1, high)

def isPrime (n):
    '''For any n greater than or equal to 2,
    Returns True if n is prime. False if not.'''
    if divisors (n, 2, n-1):
        return False
    else :
        return True
def isPrime2(n):
    '''For any n greater than or equal to 2,
    Returns True if n is prime. False if not.'''
    return not divisors (n, 2, n-1) 

def listPrimes(lo,hi):
    if lo>hi:
        return []
    else:
        listNum= list(range(lo,hi+1))
        return list(filter(isPrime,listNum))

def listPrimes2 (n, limit):
    '''Returns a list of prime numbers between n and limit.'''
    if n == limit:
        return []
    elif isPrime (n):
        return [n] + listPrimes2 (n+1, limit)
    else:
        return listPrimes2 (n+1, limit)
def forAll(f, l):
    if l==[]:
        return True
    else:
        head = l[0]
        tail= l[1:]
        return f(head) and forAll(f,tail)

def primeNum(n):
    if n==1:
        return False
    else:
        
        num= list(range(2,n-1))
        return forAll(lambda x:n%x !=0, num)
        

def listOfPrimes(n):
    if n==2:
        return [2]
    else:
        numList = list(range(2,n))
        return list(filter(primeNum,numList))
"""
Recap range(lo,hi)
lo,lo+1,lo+2.....,hi-1
hi is exlusive while lo is inclusive
"""
#prime sieve takes a list and filters only prime numbers    
def primeSieve(l):
    if l==[]:
        return []
    else:
        head = l[0]
        tail = l[1:]
        if primeNum(head):
            return [head] + primeSieve(tail)
        else:
            return primeSieve(tail)
def primeSift(l):
    return list(filter(primeNum,l))

def filterMultipleN(n,l):
    return list(filter(lambda x:x%n ==0,l))

def notDivisibleBy2(l):
    return list(filter(lambda x: not x%2==0,l))

def sift(toRemove, numList):
    return [x for x in numList if x % toRemove != 0]

# ** is exponent

def mapReduce(mapFunction, reduceFunction, myList):
    '''Applies mapFunction to myList to construct a new list
    and then applies reduceFunction to the new list
    and returns that value.'''

    return reduce(reduceFunction, map(mapFunction, myList))

def derivative(f, h):
    '''Returns a new function that is the approximation of
    the derivative of f with respect to h.'''

    return lambda x: (f(x+h) - f(x)) / h

def square(x):
    return x**2
from functools import *

    
