#include <stdio.h>
#include <math.h>
#include <limits.h>
unsigned bitsNCount(unsigned count, unsigned bitscnt, ...) {
bitscnt=ULONG_MAX;
count=1;
while(bitscnt>>=1)
    ++count;
    printf("%d %d", bitscnt,count);
}

int main() {
    bitsNCount(4, 2, 0x0a, 0xff, 0, 1);
    printf("\n");
    bitsNCount(3, 8, 0xff, 0x13f1, 0xaaaa);
    printf("\n");
    bitsNCount(5, 10, 0x0a, 0xa0ff, 0, 10, 0b1010111110111);
    return 0;
}