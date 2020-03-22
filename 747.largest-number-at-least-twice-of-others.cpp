/*
 * 747.largest-number-at-least-twice-of-others.cpp
 * Copyright (C) 2020 peeweep <peeweep@0x0.ee>
 *
 * Distributed under terms of the MIT license.
 */
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int dominantIndex(vector<int>& nums) {
    int maxIndex = 0;
    for (int i = 0; i < nums.size(); i++)
      if (nums[maxIndex] < nums[i])
        maxIndex = i;
    int max = nums[maxIndex];
    nums.erase(nums.begin() + maxIndex);
    for (auto num : nums)
      if (max < (num * 2))
        return -1;
    return maxIndex;
  }
};

int main() {
  vector<int> nums = {0, 0, 0, 1};
  Solution    so;
  so.dominantIndex(nums);
}
