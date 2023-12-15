#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
    void removeDuplicates(vector<int>&nums) {
        vector<int>out;
        int k=0;
        for(int i=0; i<nums.size(); i++) {
            if(i+1<nums.size() && nums[i]==nums[i+1]) continue;
            else{
                out.push_back(nums[i]);
                k++;
            } 
        }   
        nums = out; 
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int>out;
        removeDuplicates(nums1);
        removeDuplicates(nums2);
        
        int i=0,j=0;
        while(i!=nums1.size() and j!=nums2.size()) {
            if(nums1[i] == nums2[j]) {
                out.push_back(nums1[i]);
                i++;j++;
            }
            else if(nums1[i]>nums2[j]) 
                j++;
            else
                i++;
        }
        return out;
    }
    
    vector<int> unionOfV(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int>out;
        removeDuplicates(nums1);
        removeDuplicates(nums2);

        int i=0,j=0;
        for(auto el:nums1) out.push_back(el);
        for(auto el:nums2) out.push_back(el);
        removeDuplicates(out);
        return out;
    }
    int missingNumber(vector<int>& nums) {
      int totalSum = 0;
      for(int i=0; i<nums.size(); i++) totalSum+=nums[i];

      int n = nums.size()+1;
      int sum=0;
      sum=n*(n-1)/2;
      return sum-totalSum;
    }

    };

int main() {
  Solution s1;
  vector<int> v1 = {1,2,2,1};
  vector<int> v2 = {2,2};
  vector<int>v3 = s1.intersection(v1, v2);
  for(auto el:v3)cout<<el<<" ";

  // vector<int> v1 = {1,2,2,1};
  // vector<int> v2 = {2,2};
  // vector<int>v3 = s1.unionOfV(v1, v2);
  // for(auto el:v3)cout<<el<<" ";

  vector<int>v4 = {3,0,1};
  cout<<s1.missingNumber(v4)<<endl;
  return 0;
}