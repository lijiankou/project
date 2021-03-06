// Copyright 2013 lijiankou. All Rights Reserved.
// Author: lijk_start@163.com (Jiankou Li)
#ifndef BASE_STL_UTIL_H_
#define BASE_STL_UTIL_H_
#include "base/stl_util.h"

inline void Add(const VInt &src, VInt* des) {
  for (size_t i = 0; i < src.size(); i++) {
    des->at(i) += src[i];
  }
}

inline void ToSet(const VInt &src, SInt* des) {
  for (size_t i = 0; i < src.size(); i++) {
    des->insert(src[i]);
  }
}

inline int DiffNum(const VInt &lhs, const VInt &rhs) {
  int count = 0;
  for (size_t i = 0; i < lhs.size(); i++) {
    if (lhs[i] != rhs[i]) {
      count++;
    }
  }
  return count;
}
#endif // BASE_STL_UTIL
