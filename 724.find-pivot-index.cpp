/*
 * 724.find-pivot-index.cpp
 * Copyright (C) 2020 peeweep <peeweep@0x0.ee>
 *
 * Distributed under terms of the MIT license.
 */

#include <vector>

using namespace std;

class Solution {
 public:
  int pivotIndex(vector<int>& nums) {
    int sums = 0;
    for (auto member : nums) sums += member;

    int left = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (left == sums - left - nums[i])
        return i;
      left += nums[i];
    }

    return -1;
  }
};

