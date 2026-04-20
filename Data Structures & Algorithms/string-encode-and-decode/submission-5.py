class Solution:

    def encode(self, strs: List[str]) -> str:
        if not strs:
            return ""
        sizes = [len(s) for s in strs]
        result = ''.join([str(s) + ":" for s in sizes]) + ";" + ''.join(strs)
        return result
        

    def decode(self, s: str) -> List[str]:
        if not s:
            return []
        sizes, _, remaining = s.partition(";")
        sizes = [int(size) for size in sizes.split(":")[:-1]]
        i = 0
        result = [remaining[i:(i := i + size)] for size in sizes]
        return result