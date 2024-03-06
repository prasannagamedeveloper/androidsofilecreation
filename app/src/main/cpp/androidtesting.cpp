// androidtesting.cpp
#include "androidtesting.h"

extern "C" {
int addNumbers(int a, int b) {
    return a + b;
}

const char* getGreeting() {
    return "Hello from C++!";
}
}