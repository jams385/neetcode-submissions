class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # key: frequency of the letters
        # value: list of strings that corresponds to the key
        result = defaultdict(list)

        for string in strs:
            count = [0] * 26 # a list containing 26 zeros

            for c in string:
                # this maps each letter to an index:
                # a to 0, b to 1, c to 2, ..., z to 25
                count[ord(c) - ord("a")] += 1
            
            # appends the current string to the key
            # in python, lists cannot be keys so we must convert it into tuples
            result[tuple(count)].append(string)
        
        return list(result.values())
                
