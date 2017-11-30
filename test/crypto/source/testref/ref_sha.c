/*
    ChibiOS - Copyright (C) 2006..2017 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#include "hal.h"

const uint8_t refSHA_SHA1_3[]={
0x3A,0x98,0x7A,0xCF,0x8C,0xBC,0x10,0x28,0xB7,0xDB,
0xC8,0x6B,0xD0,0x86,0x83,0x11,0x51,0x89,0x9A,0x2B,

};
const uint8_t refSHA_SHA1_56[]={
0x84,0x98,0x3E,0x44,0x1C,0x3B,0xD2,0x6E,0xBA,0xAE,
0x4A,0xA1,0xF9,0x51,0x29,0xE5,0xE5,0x46,0x70,0xF1,

};
const uint8_t refSHA_SHA256_3[]={
0xC0,0xDD,0xD6,0x2C,0x77,0x17,0x18,0x0E,0x7F,0xFB,
0x8A,0x15,0xBB,0x96,0x74,0xD3,0xEC,0x92,0x59,0x2E,
0x0B,0x7A,0xC7,0xD1,0xD5,0x28,0x98,0x36,0xB4,0x55,
0x3B,0xE2,
};
const uint8_t refSHA_SHA256_56[]={
0x24,0x8D,0x6A,0x61,0xD2,0x06,0x38,0xB8,0xE5,0xC0,
0x26,0x93,0x0C,0x3E,0x60,0x39,0xA3,0x3C,0xE4,0x59,
0x64,0xFF,0x21,0x67,0xF6,0xEC,0xED,0xD4,0x19,0xDB,
0x06,0xC1,
};
const uint8_t refSHA_SHA512_3[]={
0x3E,0xBB,0x6E,0x93,0x1E,0xAA,0x4D,0xCF,0x74,0x1A,
0xD1,0x23,0x37,0xD4,0xF7,0x10,0x5B,0x02,0xD4,0xA9,
0xB1,0x94,0x21,0x4E,0x88,0x55,0x9E,0x8E,0x41,0xEC,
0x04,0xD3,0x20,0xE9,0x6A,0x3C,0xF9,0x12,0xED,0x27,
0x34,0x29,0x35,0xA6,0xF8,0x9D,0x1F,0x5C,0x1A,0x5C,
0xD7,0xF7,0xFF,0xBF,0xA9,0xB1,0xBE,0x1A,0x41,0x62,
0xED,0x32,0x3C,0x7A,
};
const uint8_t refSHA_SHA512_56[]={
0x20,0x4A,0x8F,0xC6,0xDD,0xA8,0x2F,0x0A,0x0C,0xED,
0x7B,0xEB,0x8E,0x08,0xA4,0x16,0x57,0xC1,0x6E,0xF4,
0x68,0xB2,0x28,0xA8,0x27,0x9B,0xE3,0x31,0xA7,0x03,
0xC3,0x35,0x96,0xFD,0x15,0xC1,0x3B,0x1B,0x07,0xF9,
0xAA,0x1D,0x3B,0xEA,0x57,0x78,0x9C,0xA0,0x31,0xAD,
0x85,0xC7,0xA7,0x1D,0xD7,0x03,0x54,0xEC,0x63,0x12,
0x38,0xCA,0x34,0x45,
};
