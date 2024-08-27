class Solution(object):
    def isAnagram(self, s, t):
        if len(s) != len(t):
            return False

        ss = sorted(s)
        tt = sorted(t)

        return ss == tt
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        