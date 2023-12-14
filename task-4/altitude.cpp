#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // highest altitude
        int max = 0;
        int sum=0;
        for(int i=0; i<gain.size(); i++) {
            sum+=gain[i];
            if(sum>max) max = sum;
        }
        return max;
    }
};

int main() {
  Solution s1;
  vector<int>a= {-4,-3,-2,-1,4,3,2};

  cout<<s1.largestAltitude(a);
  return 0;
}