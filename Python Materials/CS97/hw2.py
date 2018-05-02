from doctest import testmod

def doubleAll(l):
    if l == []:
        return []
    else:
        head = l[0]
        tail = doubleAll(l[1:])
        return [(l[0]*2)] + tail



def countPos(l):
    if len(l) == 0:
        return 0
    else:
        head = l[0]
        tail = countPos(l[1:])
        if head > 0:
            return 1 + tail
        else:
            return tail



def intRange(low, high):
    if low == high:
        return [high]
    else:
        head = low
        tail = intRange(low +1,high)
        return [head]+ tail

    

def merge(l1,l2):
    if  l1 == []:
        return l2
    elif l2 == []:
        return l1
    elif l1[0] < l2[0]:
        return [l1[0]] + merge(l1[1:], l2)
    else:
        return [l2[0]] + merge(l1,l2[1:])       
        



# run all doctests whenever this file is run (via the Run menu in IDLE)
if __name__ == '__main__':
    testmod()

