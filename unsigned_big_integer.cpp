#include <cstdint>

struct UnsignedBigInteger {
    UnsignedBigInteger(void* value) {
        
    }
private:
    uint8_t value[];
};