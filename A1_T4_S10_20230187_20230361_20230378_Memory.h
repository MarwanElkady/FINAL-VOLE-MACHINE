#ifndef MEMORY_H
#define MEMORY_H

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

const int MEMORY_SIZE = 256;

class Memory {
public:
    array<uint16_t, MEMORY_SIZE> memory{0};

    uint16_t& operator[](int index);
    void display() const;
};

#endif // MEMORY_H
