
class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = s.lower()
        s = s.replace(" ",'')
        for i in range(0, len(s), 1):
            for j in range(len(s)-1,-1,-1):
                if s[i]!=s[j]:
                    return False
                
        return True
            

string = "Omer Cakir"
s = Solution
s.isPalindrome(s,string)