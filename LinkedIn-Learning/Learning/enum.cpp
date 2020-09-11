//
//  enum.cpp
//  Learning
//
//  Created by Zhishen Wen on 8/29/20.
//  Copyright © 2020 Benjamin Wen. All rights reserved.
//

#include <stdio.h>
#include <cstdint>

#if 0
// default underlying value is typed `int`. to avoid using to much memory, you can specify a smaller int type.
enum card_suit : uint8_t {
    SPADE, // ♠
    HEART, // ❤
    DIAMOND, // ♦
    CLUB // ♣
};

enum card_rank : uint8_t {
    ACE = 1,
    DEUCE = 2,
    JACK = 11,
    QUEEN,
    KING
};

// with bit fields
struct Card {
    card_suit suit : 1;
    card_rank rank : 1;
};

int main(int argc, const char * argv[]) {
    return 0;
}
#endif
