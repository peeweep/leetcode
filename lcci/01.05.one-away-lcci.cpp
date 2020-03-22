/*
 * 01.05.one-away-lcci.cpp
 * Copyright (C) 2020 peeweep <peeweep@0x0.ee>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <string>
using namespace std;

// "intention"
// "execution"

class Solution {
 public:
  bool oneEditAway(string first, string second) {
    auto first_size  = first.size();
    auto second_size = second.size();
    // delete
    if (first_size - second_size == 1) {
      for (int i = 0; i < first_size; i++) {
        if (first[i] != second[i]) {
          // deleted is the lastest word
          if (i == first_size - 1)
            return true;
          else if (second[i] != first[i + 1]) {
            return false;
          }
        }
      }
    }
    // add
    else if (second_size - first_size == 1) {
      for (int i = 0; i < second_size; i++) {
        if (first[i] != second[i]) {
          // pal => pale
          if (i == second_size - 1)
            return true;
          // pal => peal
          else if (first[i] != second[i + 1])
            return false;
        }
      }
    }
    // replace
    else if (first_size == second_size) {
      int count = 0;
      for (int i = 0; i < first_size; i++)
        if (first[i] != second[i])
          count++;
      if (count > 1)
        return false;
      else if (count <= 1) {
        return true;
      }
    }
    return false;
  }
};

int main() {
  auto* so = new Solution();
  cout << so->oneEditAway("a", "b");

  return 0;
}

