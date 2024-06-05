def rob(self, nums: List[int]) -> int:
            arr=nums
            max_arr=[0]*len(arr)
            max_arr[0]=arr[0]
            max_arr[1]=arr[1]
            for i in range(2,len(arr)):
                max_arr[i]=max(max_arr[i-1],max_arr[i-2]+arr[i])
            
            return max_arr[-1]
                




print(rob([2,1,1,2]))