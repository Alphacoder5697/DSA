 #include "bits/stdc++.h"
using namespace std;
 int search(vector<int>& nums, int target) {
         ios::sync_with_stdio(false);
         int mid = -1;
         int lower = 0;
         int upper = nums.size();
         
        while(upper >= lower)
        {
          mid = (upper + lower)/2;
          if(nums[mid] == target)
             return mid;
          else if(nums[mid] < target)
          {
              
              lower = mid + 1  ;
              if( lower > (nums.size() - 1))
              return -1;
          }
          else
          {
             upper = mid - 1  ;
             if((upper < 0))
              return -1;
          }   
        }
        return -1;
    }