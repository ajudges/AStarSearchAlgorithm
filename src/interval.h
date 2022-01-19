#pragma once

template<typename T>
class Interval
{
public:
    Interval(T lo, T hi) : low(lo), high(hi) {}
    bool contains(T value) const { return low <= value && value < high; }
private:
    T low;
    T high;
};