/*
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.

For example:
A = [2,3,1,1,4], return true.

A = [3,2,1,0,4], return false.
*/


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastIndex = nums.size();
        int step=0;
        int i=0;
        for(;i<lastIndex;)
        {
            cout<<"\nCurrent Index:"<<step<<"\tJumping:"<<nums[i]<<"\tLanded on:"<<nums[i+nums[i]]<<"\t Landin Index"<<i+nums[i];
            step=i+nums[i];
             i=i+nums[i];
            if(nums[i+nums[i]]==){
                cout<<"\nBreaking";
                return false;
            }
            
                
        }
        cout<<"!!"<<nums[i];
        if(nums[lastIndex-1]==nums[i])
                return true;
        else
        return false;
        
    }
};
