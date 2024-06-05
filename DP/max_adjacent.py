def rob( nums) -> int:
        if len(nums)>2:
            first=nums[0]
            second=max(nums[0],nums[1])
            
            for i in range(2,len(nums)):
                current=max(second,first+nums[i])
                first=second
                second=current
            return current
        else:
            cur=-100
            for i in range (len(nums)):
                cur=max(cur,nums[i])
                return cur

print(rob([2,1,1,2]))