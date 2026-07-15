#include <unistd.h>

#define SETBIT(x,pos) (x | (1<<pos))

int main() {
    int a = SETBIT(4, 1);
    char result = '0' + a;  // Convert to ASCII character
    write(1, &result, 1);   // 1 = stdout
    return 0;
}