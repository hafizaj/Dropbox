
def countPos(l):
    pos = 0
    for e in l:
        if e>0:
            pos+=1
    return pos
    '''
    Returns the number of elements of the list l that are positive.
    >>> countPos([1, -4, 0, 4, 8, 0])
    3
    '''


def dotProduct(v1, v2):
    summand = 0
    while v1 != [] and v2!= []:
        summand += v1[0]*v2[0]
        v1 = v1[1:]
        v2 = v2[1:]
    return summand
                    
    '''
    Computes the dot product of the vectors v1 and v2, each of which is a list
    of numbers.  The dot product of [x1,...,xn] and [y1,...,yn] is
    x1*y1 + ... + xn*yn. You may assume that v1 and v2 have the same length.
    >>> dotProduct([1,2,3],[4,5,6])
    32    
    '''



def partition(v, l):
    accumV= []
    remainder = []
    for e in l:
        if e == v:
            accumV+=[v]
        else:
            remainder+=[e]
        l=l[1:]
    return [accumV]+[remainder]
        
    '''
    Partitions the list l into a list of elements that are equal to the value v
    and a list of all other elements. Note that the result of partition should
    always be a list that contains exactly two lists.
    >>> partition(2, [1,5,3,2,2,1,3,2])
    [[2, 2, 2], [1, 5, 3, 1, 3]]. 
    '''
    return


def toDigitList(n):
    if n==0:
        return [0]
    baseList = []
    while n > 0:

        answer = n%10
        n= n//10
        baseList= [answer] + baseList
     
        
    return baseList
        
    '''
    Converts a given nonnegative integer n to a list of digits.
    >>> toDigitList(403)
    [4, 0, 3]

    '''
 


def digitalRootAndPersistence(n):
    count=0

    while n>=10:
        numList = toDigitList(n)
        n = sum(numList)
        
        count+=1
        
           

    return (n,count)
            
        
        
    '''
    Consider the process of taking a nonnegative integer n, summing its digits, then
    summing the digits of the number derived from it, etc., until the remaining
    number has only one digit. The digit obtained is called the *digital root* of
    n, and the number of sums required to obtain a single digit from a number n is
    called the *additive persistence* of n.

    For example, 9879 has a digital root of 6 since 9+8+7+9 = 33 and 3+3 = 6.  Since
    two numbers were summed in this process, the additive persistence of 9879 is 2.

    This function takes a nonnegative integer n and returns a pair of its digital
    root and its additive persistence, represented as a list of two numbers.
    >>> digitalRootAndPersistence(9879)
    [6, 2]

    NOTE: You may use Python's built-in sum function, which sums the elements of
    a list of numbers, and the toDigitList function you defined above will also be
    useful.
    '''


def merge(l1, l2):
    
    base_list = []
    
    while l1 != [] or l2!= []:
        if l1 != [] and l2 !=[]:
            if l1[0] < l2[0]:
                base_list = base_list + [l1[0]]
                l1 = l1[1:]
                
            else:
                base_list = base_list + [l2[0]]
                l2 = l2[1:]
                
        elif l1 == [] and l2 != []:
            base_list = base_list + [l2[0]]
            l2 = l2[1:]
        else :
            base_list = base_list + [l1[0]]
            l1 = l1[1:]
    
    return base_list
            
               
    """
    Accepts two integer lists l1 and l2, which are each assumed to be sorted from
    least to greatest, and produces a new list that contains the elements of both
    lists, also sorted from least to greatest.  Note that duplicates are allowed,
    both within and across lists.
    >>> merge([1,2,4], [2,3,3,5])
    [1, 2, 2, 3, 3, 4, 5]
    
    NOTE: This function is trickier to implement using loops than you might expect.
    Take care to ensure that all accesses to the lists l1 and l2 are in bounds!
    """
