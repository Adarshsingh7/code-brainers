#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
void merge_function(vector<int>& nums, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;
        vector<int> temp(right - left + 1);
        int k = 0;
    
        while(i <= mid && j <= right) {
            if(nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            }
            else {
                temp[k++] = nums[j++];
            }
        }
        
        while(i <= mid) {
            temp[k++] = nums[i++];
        }
        while(j <= right) {
            temp[k++] = nums[j++];
        }
        k = 0;
        for(int i = left; i <= right; i++) {
            nums[i] = temp[k++];
        }
    }
    
    void merge_sort(vector<int>& nums, int left, int right) {
        if(left < right)
        {
            int mid = left + (right - left) / 2;
            merge_sort(nums, left, mid);
            merge_sort(nums, mid + 1, right);
            merge_function(nums, left, mid, right);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        
        int n = nums.size();
        
        merge_sort(nums, 0, n - 1);
        
        return nums;
    }
};

int main() {
  Solution s1;
  vector<int> v1 = {5,2,3,1};
  s1.sortArray(v1);
  return 0;
}