//
// Created by jasper on 11/4/21.
//
#pragma once
#ifndef LAB10_CLOCK_TIME_H
#define LAB10_CLOCK_TIME_H

#include <ostream>
#include <string>

using namespace std;

class clock_time {
public:
    clock_time();
    int get_hour();
    int get_minute();
    int get_second();
    void set_time(int h, int m, int s);
    clock_time(int h, int m, int s);
//    ostream& operator<<(ostream& out, clock_time c);
    string to_string(clock_time c);
    friend bool operator==(clock_time a, clock_time b);
    friend bool operator!=(clock_time a, clock_time b);
    friend bool operator+(clock_time a, clock_time b);

private:
    int _seconds;
    void _addtosec(int h, int m, int s);
    void _init_secs();
};


#endif //LAB10_CLOCK_TIME_H
