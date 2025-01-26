class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        maps={}
        mapt={}
        for ch in s:
            if ch in maps.keys():
                maps[ch]+=1
            else:
                maps[ch]=1
        
        for ch in t:
            if ch in mapt.keys():
                mapt[ch]+=1
            else:
                mapt[ch]=1
        return maps == mapt