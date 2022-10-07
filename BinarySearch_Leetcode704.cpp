// LEET CODE 704 ==> Binary Search
//Link to problem: https://leetcode.com/problems/binary-search/
class Solution {
public:
    int search(vector<int>& nums, int target) {
 if(nums.length<0)
    {return -1;}

int start=0;
int end=nums.length-1;
int mid=0;

while (start <= end)
{
    mid=(start+end)/2;
    if(nums[mid]==target)
    {
        return mid;
    }
    else if(nums[mid]>target)
    {
        end=mid-1;
    }
    else
    {
        start=mid+1;
    }
}
    return -1;
    }   
};