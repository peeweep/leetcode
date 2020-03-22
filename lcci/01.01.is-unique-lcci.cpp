/*
 * 01.01.is-unique-lcci.cpp
 * Copyright (C) 2020 peeweep <peeweep@0x0.ee>
 *
 * Distributed under terms of the MIT license.
 */
#include <string>
using namespace std;

class Solution {
 public:
  bool isUnique(string astr) {
    for (int i = 0; i < astr.size(); i++)
      for (int j = i + 1; j < astr.size(); j++)
        if (astr[i] == astr[j])
          return false;
    return true;
  }
};

