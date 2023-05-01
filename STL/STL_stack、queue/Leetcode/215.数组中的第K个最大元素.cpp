#include<vector>
#include<queue>
using namespace std;
/* 
给定整数数组 nums 和整数 k，请返回数组中第 k 个最大的元素。
请注意，你需要找的是数组排序后的第 k 个最大的元素，而不是第 k 个不同的元素。
你必须设计并实现时间复杂度为 O(n) 的算法解决此问题。 
*/

/* 示例 1:
输入: [3,2,1,5,6,4], k = 2
输出: 5 
*/

//优先级队列,pop K次

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p;
        for(int i = 0;i<nums.size();i++)
        {
            p.push(nums[i]);
        }

        while (--k)
        {
            p.pop();
        }
        return p.top();
    }
};

// https://leetcode.cn/problems/kth-largest-element-in-an-array/