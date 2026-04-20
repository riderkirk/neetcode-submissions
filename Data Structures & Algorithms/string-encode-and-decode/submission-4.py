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
        # sizes = []
        # for i in range(int(num_strs)):
            # size, _, remaining = remaining.partition(":")
            # sizes.append(int(size))
        result = []
        i = 0
        j = 0
        for size in sizes:
            j += size
            result.append(remaining[i:j])
            i = j
        return result