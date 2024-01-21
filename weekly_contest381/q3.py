class Solution:
    def minimumPushes(self, word: str) -> int:
        f = {}
        
        key_p = 0
        key_position = 1
        key_number = 2
        for char in word:
            f[char] = f.get(char, 0) + 1

        sorted_chars = sorted(f, key=lambda k: f[k], reverse=True)


        for char in sorted_chars:
            key_p += f[char] * key_position
            if key_number < 9:
                key_number += 1
            else:
                key_number = 2
                key_position += 1

        return key_p
