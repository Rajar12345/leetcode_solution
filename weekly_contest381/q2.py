from typing import List
class Solution:
    def countOfPairs(self, n: int, x: int, y: int) -> List[int]:
        result = [0] * n

        for i in range(1, n + 1):
            for j in range(i + 1, n + 1):
                distance = min(abs(i - j), abs(i - x) + 1 + abs(y - j), abs(i - y) + 1 + abs(x - j))
                result[distance - 1] += 2

        return result
