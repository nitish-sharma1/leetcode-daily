class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = ""
        isSame = True
        i=0
        smallest = len(strs[0])
        for s in strs:
            smallest = min(smallest , len(s))
        while i < smallest:
            curr = strs[0][i]
            for s in strs:
                if s[i] != curr:
                    isSame = False
                    return prefix
            prefix+=curr
            i = i+1
        return prefix
                