#week01-2.py
#LeetCode 28 Find the Index of the First Occurrence in a String
#在haystack乾稻草中找到針needle(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack)
        N=len(needle)
        for i in range(H-N+1):
           if haystack[i:i+N]==needle:
                return i
        return-1
