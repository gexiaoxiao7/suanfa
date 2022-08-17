class Solution {
    public int maxSubArray(int[] nums) {
        int res = nums[0];
        int sum = 0;
        for(int num:nums){
            if(sum > 0) sum += num;
            else sum = num; // 正数就加上去，负数直接不要
            res = Math.max(res,sum);
        }
        return res;
    }
}