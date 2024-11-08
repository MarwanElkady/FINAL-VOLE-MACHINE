#ifndef REGISTER_H
#define REGISTER_H

#include <iostream>
#include <iomanip>
#include <array>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>
#include <limits>
#include <memory>
using namespace std;

const int REGISTER_COUNT = 16;

class Register {
public:
    array<uint16_t, REGISTER_COUNT> registers{0};

    uint16_t& operator[](int index);
    void display() const;
};

#endif 
