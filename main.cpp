/*
    main.cpp

    Tests for the clock_time class.

    Code for Data Structures lab - Operator Overloading

    Author: C. Painter-Wakefield
*/

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "clock_time.h"

using namespace std;

/* function prototypes */
template<class T>
void test_equals(T actual, T expected, double t);
void test_true(bool expr, double t);
void step1();
void step2();
void step3();


/* main() just calls the three stepn functions to execute tests */
int main() {
    step1();
    step2();
    step3();

    return 0;
}


/*
   Uncomment tests below as you implement new features.  Run the resulting
   program, and fix any failing tests before proceeding!
*/

/*******************************************/
/* Step 1 - constructors, setters, getters */
/*******************************************/
void step1() {
    // Set up test objects
    clock_time zero;
    clock_time midnight;
    clock_time noon(12,0,0);
    clock_time threefifteen(3,15,0);
    clock_time h14m22s09(14,22,9);
    clock_time overflow(25,61,61);
    clock_time underflow(-1,-1,-1);
    clock_time weird(99,-44,66);

    cout << "Executing Step 1 tests..." << endl;

    // Test 1 - default constructor
    test_equals(midnight.get_hour(), 0, 1.0);
    test_equals(midnight.get_minute(), 0, 1.1);
    test_equals(midnight.get_second(), 0, 1.2);

    // Test 2 - time-setting constructor
    test_equals(h14m22s09.get_hour(), 14, 2.0);
    test_equals(h14m22s09.get_minute(), 22, 2.1);
    test_equals(h14m22s09.get_second(), 9, 2.2);

    // Test 3 - test correct overflow behavior
    test_equals(overflow.get_hour(), 2, 3.0);
    test_equals(overflow.get_minute(), 2, 3.1);
    test_equals(overflow.get_second(), 1, 3.2);

    // Test 4 - test correct underflow behavior
    test_equals(underflow.get_hour(), 22, 4.0);
    test_equals(underflow.get_minute(), 58, 4.1);
    test_equals(underflow.get_second(), 59, 4.2);

    // Test 5 - weird test
    test_equals(weird.get_hour(), 2, 5.0);
    test_equals(weird.get_minute(), 17, 5.1);
    test_equals(weird.get_second(), 6, 5.2);
}

/**********************************/
/* Step 2 - to_string, ostream << */
/**********************************/

/* along with step 2 tests, uncomment this function */
/*
string convert(clock_time c) {
    ostringstream out;
    out << c;
    return out.str();
}
*/

void step2() {
/*
    // Set up test objects
    clock_time zero;
    clock_time midnight;
    clock_time noon(12,0,0);
    clock_time threefifteen(3,15,0);
    clock_time h14m22s09(14,22,9);
    clock_time overflow(25,61,61);
    clock_time underflow(-1,-1,-1);
    clock_time weird(99,-44,66);

    cout << "Executing Step 2 tests..." << endl;

    // Test 6 - to_string
    test_equals(to_string(zero), string("0:00:00"), 6.0);
    test_equals(to_string(noon), string("12:00:00"), 6.1);
    test_equals(to_string(threefifteen), string("3:15:00"), 6.2);
    test_equals(to_string(h14m22s09), string("14:22:09"), 6.3);

    // Test 7 - ostream <<
    test_equals(convert(zero), string("0:00:00"), 7.0);
    test_equals(convert(noon), string("12:00:00"), 7.1);
    test_equals(convert(threefifteen), string("3:15:00"), 7.2);
    test_equals(convert(h14m22s09), string("14:22:09"), 7.3);
*/
}

/********************************/
/* Step 3 - operators ==, !=, + */
/********************************/
void step3() {
/*
    // Set up test objects
    clock_time zero;
    clock_time midnight;
    clock_time noon(12,0,0);
    clock_time threefifteen(3,15,0);
    clock_time h14m22s09(14,22,9);
    clock_time overflow(25,61,61);
    clock_time underflow(-1,-1,-1);
    clock_time weird(99,-44,66);

    cout << "Executing Step 3 tests..." << endl;

    // Test 8 - operator ==; also we'll demonstrate that the default copy
    // constructor and assignment operator work as expected.
    clock_time zero2;
    test_equals(zero, zero2, 8.0);

    clock_time noon2(noon);
    test_equals(noon, noon2, 8.1);

    clock_time threefifteen2;
    threefifteen2 = threefifteen;
    test_equals(threefifteen, threefifteen2, 8.2);

    test_equals(h14m22s09, clock_time(14,22,9), 8.3);

    test_true(! (zero == noon), 8.4);
    test_true(! (h14m22s09 == threefifteen), 8.5);

    // Test 9 - operator !=
    test_true(zero != noon, 9.0);
    test_true(h14m22s09 != threefifteen, 9.1);
    test_true(! (zero != zero2), 9.2);
    test_true(! (h14m22s09 != clock_time(14,22,9)), 9.3);

    // Test 10 - operator +
    test_equals(zero + threefifteen, threefifteen, 10.0);
    test_equals(threefifteen + noon, clock_time(15,15,0), 10.1);
    test_equals(threefifteen + h14m22s09, clock_time(17,37,9), 10.2);
    test_equals(h14m22s09 + noon, clock_time(2,22,9), 10.3);
    test_equals(h14m22s09 + clock_time(11,50,59), clock_time(2,13,8), 10.4);
*/
}

template <class T>
void test_equals(T actual, T expected, double t) {
    if (! (expected == actual)) {
        cerr << setprecision(1) << fixed;
        cerr << "  Test " << t << " failed: expected " << expected;
        cerr << ", actual was " << actual << endl;
    }
}

void test_true(bool expr, double t) {
    if (!expr) {
        cerr << setprecision(1) << fixed;
        cerr << "  Test " << t << " failed" << endl;
    }
}


