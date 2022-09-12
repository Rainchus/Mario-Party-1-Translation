#include "../include/mp1.h"
#include "asciiTable.c"
#include "strings.c"


char* convertAsciiToMp1(char* asciiString) {
    for (int i = 0; asciiString[i] != 0; i++) {
        u8 asciiCharacter = asciiString[i];
        asciiString[i] = asciiLUT[asciiCharacter];
    }
    return asciiString;
}

void cBootFunction(void) {
    for (s32 i = 0; i < sizeof(stringPointers) / sizeof(stringPointers[0]); i++) {
        stringPointers[i] = convertAsciiToMp1(stringPointers[i]);
    }
}