//
// Created by jasper on 11/4/21.
//

#include "clock_time.h"

clock_time::clock_time(): _seconds(0) {
}

//ostream &clock_time::operator<<(ostream &out, clock_time c) {
//
//}

void clock_time::_addtosec(int h, int m, int s) {
    _seconds += s;
    _seconds += m * 60;
    _seconds += h * 60 * 60;
    if (_seconds < 0){
        _seconds = (60 * 60 * 24) + _seconds;
    }
    _seconds %= 60 * 60 * 24;
}

int clock_time::get_hour() {
    return _seconds / 3600;
}

int clock_time::get_minute() {
    return _seconds % 3600 / 60;
}

int clock_time::get_second() {
    return _seconds % 60;
}

void clock_time::set_time(int h, int m, int s) {
    _addtosec(h,m,s);
}

clock_time::clock_time(int h, int m, int s) {
    _init_secs();
    _addtosec(h,m,s);
}



string clock_time::to_string(clock_time c) {
    return std::string();
}

bool operator==(clock_time a, clock_time b) {
    return false;
}

bool operator!=(clock_time a, clock_time b) {
    return false;
}

bool operator+(clock_time a, clock_time b) {
    return false;
}

void clock_time::_init_secs() {
    _seconds = 0;
}

