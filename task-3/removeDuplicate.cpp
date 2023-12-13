//  Remove Duplicates from Sorted Array
#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    vector<int>out;
    int k=0;
    for(int i=0; i<nums.size(); i++) {
        if(i+1<nums.size() && nums[i]==nums[i+1]) continue;
        else{
            out.push_back(nums[i]);
            k++;
        } 
    }
    nums=out;
    return k;
    }

    int searchInsert(vector<int>& arr, int target) {
      int left = 0;
      int right = arr.size() -1;

      while(left<=right) {
          int mid = (left+right)/2;
          if(target == arr[mid]) return mid;
          if(arr[mid] > target) right = mid-1;
          else left = mid+1;
      }
      return left;
    }
};

int main() {
  // prob1
  vector<int> arr = {1,1,2};
  Solution s1;
  cout<<s1.removeDuplicates(arr)<<endl;

  // prob 2
  vector<int> nums = {1,3,5,6};
  int target = 2;
  Solution s2;
  cout<<s2.searchInsert(nums, target)<<endl;
  return 0;
}