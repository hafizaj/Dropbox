from random import randint

# "if" expression ":"
#       statements
# <optionally>
# "elif" expression ":"
#       statements
#  ... <any number of elif clauses>
# <optionally>
# "else" ":"
#       statement

def magic8Ball(question):
    r = randint(1,3)
    if r == 1 :
        answer = "Definitely!"
    elif r == 2 :
        answer = "Not a chance."
    else:
        answer = "Ask again tomorrow."
    return answer


# return either 'negative', 'zero', or 'positive'
# depending on the value of the given number n
def intToSign(n):
    if n < 0 :
        sign = 'negative'
    elif n == 0 :
        sign = 'zero'
    else:
        sign = 'positive'
    return sign



















    
