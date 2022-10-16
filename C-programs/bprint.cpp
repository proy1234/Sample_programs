#include <iostream>
#include <cstdint>

using namespace std;

const char* format_binary(unsigned int x)
{
    static char b[33];
    b[32] = '\0';

    for (int z = 0; z < 32; z++) {
        b[31-z] = ((x>>z) & 0x1) ? '1' : '0';
    }
    return b;
}

int main()
{
    uint32_t x = 2555;
    printf("Binary value of x is %s",format_binary(x));
    return 0;
}
