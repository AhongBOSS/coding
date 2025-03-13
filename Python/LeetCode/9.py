class Solution(object):
    def isPalindrome(self, x):
        a = x
        b = 0
        if(x < 0):
            return False
        while(x > 0):
            c = x % 10
            b = b * 10 + c
            x /= 10

        if(a == b):
            return True
        else:
            return False
