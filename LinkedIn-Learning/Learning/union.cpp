//
//  union.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/29/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <stdio.h>
#include <cstdint>

#if 0

union ipv4 {
    uint32_t i32;
    struct {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } octets;
};

int main(int argc, const char * argv[]) {
    ipv4 addr;
    addr.octets = { 192, 168, 73, 42 };
    printf("addr is %d.%d.%d.%d is %08x\n", addr.octets.a, addr.octets.b, addr.octets.c, addr.octets.d, addr.i32);
    return 0;
}
#endif
