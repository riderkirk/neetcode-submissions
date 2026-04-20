class Solution:

    def encode(self, strs: List[str]) -> str:
        if not strs:
            return ""
        size = len(strs)
        sizes = []
        for s in strs:
            sizes.append(len(s))
        result = str(size) + ":"
        for s in sizes:
            result += str(s) + ":"
        result += ''.join(strs)
        return result
        

    def decode(self, s: str) -> List[str]:
        if not s:
            return []
        num_strs, _, remaining = s.partition(":")
        sizes = []
        for i in range(int(num_strs)):
            size, _, remaining = remaining.partition(":")
            sizes.append(int(size))
        result = []
        i = 0
        j = 0
        for size in sizes:
            j += size
            result.append(remaining[i:j])
            i = j
        return result

