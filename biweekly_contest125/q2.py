class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        pq = []
        for num in nums:
            heapq.heappush(pq, num)
        
        cnt = 0
        while pq[0] < k:
            first = heapq.heappop(pq)
            second = heapq.heappop(pq)
            cnt += 1
            val = min(first, second) * 2 + max(first, second)
            heapq.heappush(pq, val)
        
        return cnt
