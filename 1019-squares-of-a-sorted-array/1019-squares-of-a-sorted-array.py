class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        from collections import deque
        answer = deque()
        l,r = 0, len(nums)-1
        while l<=r:
            left,right = abs(nums[l]),abs(nums[r])
            
            if left > right:
                l += 1
                answer.appendleft(left * left)
            else:
                answer.appendleft(right * right)
                r-=1
        return list (answer)
        