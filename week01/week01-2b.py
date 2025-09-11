#week01-2b.py
#LeetCode 28 Find the Index of the First Occurrence in a String
#在haystack乾稻草中找到針needle(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
