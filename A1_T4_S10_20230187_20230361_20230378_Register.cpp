#include "A1_T4_S10_20230187_20230361_20230378_Register.h"

using namespace std;

uint16_t& Register::operator[](int index) {
    return registers[index];
}

void Register::display() const {
    cout << "Registers:\n";
    for (int i = 0; i < REGISTER_COUNT; ++i) {
        cout << "R" << hex << i << ": " << registers[i] << " ";
        if (i % 4 == 3) cout << endl;
    }
}
