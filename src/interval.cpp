#include "interval.h"

template <typename T> Interval<T> interval(T lo, T hi) {
  return Interval<T>(lo, hi);
}