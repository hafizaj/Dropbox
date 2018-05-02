def clone(e, n):
    if n == 0:
        return []
    else:
        return [e] + clone(e, n-1)

def count(e, l):
    if l == []:
        return 0
    head = l[0]
    tail = l[1:]
    if head == e:
        return 1 + count(e, tail)
    else:
        return count(e, tail)

def minimum(l):
    head = l[0]
    if len(l) == 1:
        return head
    tailMin = minimum(tail)
    if head < tailMin:
        return head
    else:
        return tailMin

def q(l):
    if #???
        return True
    head = l[0]
    tail = l[1:]
    checkHead = # some condition
    return checkHead and #???

def tails(l):
    if #??
        return [l]
    #There's no 'head' here for a reason!
    tail = #???
    return #???

def flatten(l):
  """Hint: The structure is similar to previous problems but
     if you're struggling with "de-listing", try playing with
     the '+' operator in IDLE."""

def pairify(l):
    if len(l) < 2:
        #???
    first = l[0]
    second = l[1]
    tail = #??? 
    # More code??

def rmDups(l):
   #Similar to #7!
