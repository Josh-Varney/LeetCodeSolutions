class Solution:
    def merge(self, nums1, m, nums2, n):
        last = m + n - 1

        while m > 0 and n > 0:
            if nums1[m - 1] > nums2[n - 1]:
                nums1[last] = nums1[m - 1]
                m -= 1
            else:
                nums1[last] = nums2[n - 1]
                n -= 1
            last -= 1

        # If there are remaining elements in nums2, copy them to nums1
        while n > 0:
            nums1[last] = nums2[n - 1]
            n -= 1
            last -= 1
        
        print(nums1)
        
if __name__ == '__main__':
    solution_instance = Solution()
    print(solution_instance.merge([1,2,3,0,0,0], 3, [2,5,6], 3))