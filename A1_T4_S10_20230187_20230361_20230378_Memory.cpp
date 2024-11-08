#include "A1_T4_S10_20230187_20230361_20230378_Memory.h"


uint16_t& Memory::operator[](int index) {
    return memory[index];
}

void Memory::display() const {
    cout << "\nMemory:\n";
    for (int i = 0; i < MEMORY_SIZE; ++i) {
        cout << setw(2) << setfill('0') << hex << memory[i] << " ";
        if (i % 16 == 15) cout << endl;
    }
}
