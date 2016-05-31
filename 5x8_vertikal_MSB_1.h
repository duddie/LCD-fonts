const char font[256][5]={
{0x00,0x00,0x00,0x00,0x00},	// 0x00
{0x78,0xAC,0x8C,0xAC,0x78},	// 0x01
{0x78,0xAC,0xEC,0xAC,0x78},	// 0x02
{0x70,0xF8,0x7C,0xF8,0x70},	// 0x03
{0x10,0x38,0xFE,0x38,0x10},	// 0x04
{0x18,0x52,0xFE,0x52,0x18},	// 0x05
{0x38,0x72,0xFE,0x72,0x38},	// 0x06
{0x00,0x00,0x00,0x00,0x00},	// 0x07
{0x00,0x00,0x00,0x00,0x00},	// 0x08
{0x00,0x00,0x00,0x00,0x00},	// 0x09
{0x00,0x00,0x00,0x00,0x00},	// 0x0A
{0x1C,0x22,0x22,0xE2,0xDC},	// 0x0B
{0x70,0x8A,0x8F,0x8A,0x70},	// 0x0C
{0x00,0x00,0x00,0x00,0x00},	// 0x0D
{0x06,0x7E,0x40,0xCC,0xFC},	// 0x0E
{0x54,0x38,0x6C,0x38,0x54},	// 0x0F
{0x7C,0x38,0x38,0x10,0x10},	// 0x10
{0x10,0x10,0x38,0x38,0x7C},	// 0x11
{0x00,0x44,0xFE,0x44,0x00},	// 0x12
{0x00,0x74,0x00,0x74,0x00},	// 0x13
{0x60,0xFE,0x80,0xFE,0x00},	// 0x14
{0x00,0x52,0xAA,0x94,0x00},	// 0x15
{0x00,0x18,0x18,0x18,0x18},	// 0x16
{0x00,0x52,0xFA,0x52,0x00},	// 0x17
{0x00,0x40,0xFE,0x40,0x00},	// 0x18
{0x00,0x04,0xFE,0x04,0x00},	// 0x19
{0x00,0x10,0x10,0x38,0x10},	// 0x1A
{0x00,0x10,0x38,0x10,0x10},	// 0x1B
{0x00,0x3C,0x04,0x04,0x04},	// 0x1C
{0x10,0x38,0x10,0x38,0x10},	// 0x1D
{0x04,0x1C,0x7C,0x1C,0x04},	// 0x1E
{0x40,0x70,0x7C,0x70,0x40},	// 0x1F
{0x00,0x00,0x00,0x00,0x00},	// 0x20
{0x00,0x00,0xF4,0x00,0x00},	// 0x21
{0x00,0xC0,0x00,0xC0,0x00},	// 0x22
{0x2C,0x38,0x6C,0x38,0x68},	// 0x23
{0x00,0x64,0xFE,0x4C,0x00},	// 0x24
{0x4C,0xB0,0x78,0x34,0xC8},	// 0x25
{0x18,0x64,0xB4,0x48,0x14},	// 0x26
{0x00,0x00,0xC0,0x00,0x00},	// 0x27
{0x00,0x38,0x44,0x82,0x82},	// 0x28
{0x82,0x82,0x44,0x38,0x00},	// 0x29
{0x00,0x50,0xA0,0x50,0x00},	// 0x2A
{0x00,0x08,0x1C,0x08,0x00},	// 0x2B
{0x00,0x01,0x06,0x00,0x00},	// 0x2C
{0x00,0x10,0x10,0x10,0x00},	// 0x2D
{0x00,0x00,0x04,0x00,0x00},	// 0x2E
{0x00,0x06,0x18,0x60,0x80},	// 0x2F
{0x00,0x78,0x84,0x84,0x78},	// 0x30
{0x00,0x44,0xFC,0x04,0x00},	// 0x31
{0x00,0x8C,0x94,0x64,0x00},	// 0x32
{0x00,0xA4,0xA4,0x58,0x00},	// 0x33
{0x00,0x30,0x50,0xFC,0x10},	// 0x34
{0x00,0xE4,0xA4,0x98,0x00},	// 0x35
{0x00,0x78,0xA4,0xA4,0x18},	// 0x36
{0x00,0x80,0x9C,0xA0,0xC0},	// 0x37
{0x00,0x58,0xA4,0xA4,0x58},	// 0x38
{0x00,0x60,0x94,0x94,0x78},	// 0x39
{0x00,0x00,0x24,0x00,0x00},	// 0x3A
{0x00,0x01,0x26,0x00,0x00},	// 0x3B
{0x00,0x10,0x10,0x28,0x44},	// 0x3C
{0x00,0x28,0x28,0x28,0x28},	// 0x3D
{0x00,0x44,0x28,0x10,0x10},	// 0x3E
{0x00,0x80,0x94,0xA0,0x40},	// 0x3F
{0x3C,0x42,0x9A,0xAA,0x7A},	// 0x40
{0x0C,0x38,0x48,0x38,0x0C},	// 0x41
{0x00,0x7C,0x54,0x6C,0x00},	// 0x42
{0x00,0x38,0x44,0x44,0x44},	// 0x43
{0x00,0x7C,0x44,0x44,0x38},	// 0x44
{0x00,0x7C,0x54,0x54,0x00},	// 0x45
{0x00,0x7C,0x50,0x50,0x00},	// 0x46
{0x00,0x38,0x44,0x54,0x5C},	// 0x47
{0x00,0x7C,0x10,0x10,0x7C},	// 0x48
{0x00,0x44,0x7C,0x44,0x00},	// 0x49
{0x00,0x44,0x44,0x78,0x00},	// 0x4A
{0x00,0x7C,0x10,0x28,0x44},	// 0x4B
{0x00,0x7C,0x04,0x04,0x04},	// 0x4C
{0x7C,0x20,0x18,0x20,0x7C},	// 0x4D
{0x00,0x7C,0x20,0x10,0x7C},	// 0x4E
{0x38,0x44,0x44,0x44,0x38},	// 0x4F
{0x00,0x7C,0x50,0x50,0x20},	// 0x50
{0x38,0x44,0x44,0x46,0x39},	// 0x51
{0x00,0x7C,0x50,0x28,0x04},	// 0x52
{0x00,0x24,0x54,0x48,0x00},	// 0x53
{0x40,0x40,0x7C,0x40,0x40},	// 0x54
{0x00,0x78,0x04,0x04,0x78},	// 0x55
{0x00,0x70,0x0C,0x0C,0x70},	// 0x56
{0x70,0x0C,0x30,0x0C,0x70},	// 0x57
{0x44,0x28,0x10,0x28,0x44},	// 0x58
{0x40,0x20,0x1C,0x20,0x40},	// 0x59
{0x00,0x4C,0x54,0x54,0x64},	// 0x5A
{0x00,0x00,0xFE,0x82,0x00},	// 0x5B
{0x80,0x60,0x18,0x06,0x00},	// 0x5C
{0x00,0x82,0xFE,0x00,0x00},	// 0x5D
{0x18,0x60,0x80,0x60,0x18},	// 0x5E
{0x02,0x02,0x02,0x02,0x02},	// 0x5F
{0x00,0x80,0x40,0x00,0x00},	// 0x60
{0x00,0x2C,0x2C,0x1C,0x04},	// 0x61
{0x00,0xFC,0x24,0x24,0x18},	// 0x62
{0x00,0x18,0x24,0x24,0x00},	// 0x63
{0x18,0x24,0x24,0xFC,0x00},	// 0x64
{0x00,0x18,0x34,0x14,0x00},	// 0x65
{0x00,0x20,0x7C,0xA0,0xA0},	// 0x66
{0x00,0x1A,0x2A,0x2A,0x3C},	// 0x67
{0x00,0xFC,0x10,0x20,0x1C},	// 0x68
{0x00,0x20,0xBC,0x00,0x00},	// 0x69
{0x00,0x22,0x22,0xBC,0x00},	// 0x6A
{0x00,0xFC,0x10,0x28,0x04},	// 0x6B
{0x00,0x80,0xFC,0x00,0x00},	// 0x6C
{0x3C,0x10,0x3C,0x10,0x3C},	// 0x6D
{0x00,0x3C,0x10,0x20,0x1C},	// 0x6E
{0x00,0x18,0x24,0x24,0x18},	// 0x6F
{0x00,0x3E,0x24,0x24,0x18},	// 0x70
{0x18,0x24,0x24,0x3E,0x00},	// 0x71
{0x00,0x3C,0x10,0x20,0x00},	// 0x72
{0x00,0x14,0x34,0x28,0x00},	// 0x73
{0x00,0x20,0x78,0x24,0x20},	// 0x74
{0x00,0x38,0x04,0x08,0x3C},	// 0x75
{0x00,0x30,0x0C,0x0C,0x30},	// 0x76
{0x30,0x0C,0x38,0x0C,0x30},	// 0x77
{0x00,0x24,0x18,0x18,0x24},	// 0x78
{0x02,0x32,0x0E,0x0C,0x30},	// 0x79
{0x00,0x2C,0x34,0x34,0x00},	// 0x7A
{0x00,0x10,0x6C,0x82,0x00},	// 0x7B
{0x00,0x00,0xFE,0x00,0x00},	// 0x7C
{0x00,0x82,0x6C,0x10,0x00},	// 0x7D
{0x08,0x10,0x10,0x08,0x10},	// 0x7E
{0x00,0x3C,0x44,0x3C,0x00},	// 0x7F
{0x00,0x38,0x45,0x46,0x44},	// 0x80
{0x00,0xB8,0x04,0x08,0xBC},	// 0x81
{0x00,0x18,0x34,0x54,0x80},	// 0x82
{0x00,0x6C,0xAC,0x9C,0x44},	// 0x83
{0x00,0xAC,0x2C,0x9C,0x04},	// 0x84
{0x80,0x6C,0x2C,0x1C,0x04},	// 0x85
{0x00,0x6C,0xAC,0x5C,0x04},	// 0x86
{0x00,0x18,0x25,0x26,0x00},	// 0x87
{0x00,0x58,0xB4,0x94,0x40},	// 0x88
{0x00,0x98,0x34,0x94,0x00},	// 0x89
{0x80,0x58,0x34,0x14,0x00},	// 0x8A
{0x00,0xA0,0x3C,0x80,0x00},	// 0x8B
{0x00,0x60,0xBC,0x80,0x40},	// 0x8C
{0x80,0x60,0x3C,0x00,0x00},	// 0x8D
{0x0C,0xB8,0x48,0xB8,0x0C},	// 0x8E
{0x0C,0x58,0xA8,0x58,0x0C},	// 0x8F
{0x00,0x7C,0x54,0x54,0x80},	// 0x90
{0x2C,0x28,0x18,0x34,0x14},	// 0x91
{0x0C,0x38,0x48,0x7C,0x54},	// 0x92
{0x40,0x98,0xA4,0x64,0x18},	// 0x93
{0x00,0x98,0x24,0x24,0x98},	// 0x94
{0x80,0x58,0x24,0x24,0x18},	// 0x95
{0x40,0xB8,0x84,0x48,0x3C},	// 0x96
{0x00,0xB8,0x44,0x08,0x3C},	// 0x97
{0x02,0xB2,0x0E,0x0C,0xB0},	// 0x98
{0xB8,0x44,0x44,0x44,0xB8},	// 0x99
{0x80,0x78,0x04,0x84,0x78},	// 0x9A
{0x00,0x1A,0x2C,0x34,0x58},	// 0x9B
{0x08,0x3C,0x54,0x04,0x00},	// 0x9C
{0x3A,0x4C,0x54,0x64,0xB8},	// 0x9D
{0x00,0x24,0x18,0x18,0x24},	// 0x9E
{0x00,0x12,0x7C,0x90,0x00},	// 0x9F
{0x00,0x2C,0x2C,0x5C,0x84},	// 0xA0
{0x00,0x20,0x3C,0x40,0x80},	// 0xA1
{0x00,0x18,0x24,0x64,0x98},	// 0xA2
{0x00,0x38,0x04,0x48,0xBC},	// 0xA3
{0x00,0xBC,0x90,0xA0,0x9C},	// 0xA4
{0x80,0xFC,0xA0,0x90,0xFC},	// 0xA5
{0x00,0xB8,0xA8,0x78,0x00},	// 0xA6
{0x00,0x70,0x88,0x70,0x00},	// 0xA7
{0x00,0x02,0x5A,0x04,0x00},	// 0xA8
{0x78,0x84,0xFC,0xEC,0x78},	// 0xA9
{0x00,0x10,0x10,0x1C,0x00},	// 0xAA
{0x84,0xE8,0x30,0x6C,0xB4},	// 0xAB
{0x84,0xE8,0x10,0x68,0x9C},	// 0xAC
{0x00,0x00,0x2E,0x00,0x00},	// 0xAD
{0x10,0x28,0x54,0x28,0x44},	// 0xAE
{0x44,0x28,0x54,0x28,0x10},	// 0xAF
{0xAA,0x00,0xAA,0x00,0xAA},	// 0xB0
{0xAA,0x55,0xAA,0x55,0xAA},	// 0xB1
{0xFF,0xAA,0xFF,0xAA,0xFF},	// 0xB2
{0x00,0x00,0xFF,0x00,0x00},	// 0xB3
{0x10,0x10,0xFF,0x00,0x00},	// 0xB4
{0x0C,0x38,0x48,0xB8,0x0C},	// 0xB5
{0x0C,0x58,0xA8,0x98,0x4C},	// 0xB6
{0x0C,0xB8,0x48,0x38,0x0C},	// 0xB7
{0x7C,0x82,0xBA,0xAA,0x7C},	// 0xB8
{0x28,0xEF,0x00,0xFF,0x00},	// 0xB9
{0x00,0xFF,0x00,0xFF,0x00},	// 0xBA
{0x28,0x2F,0x20,0x3F,0x00},	// 0xBB
{0x28,0xE8,0x08,0xF8,0x00},	// 0xBC
{0x00,0x38,0x6C,0x28,0x00},	// 0xBD
{0x40,0x28,0x1C,0x28,0x40},	// 0xBE
{0x10,0x10,0x1F,0x00,0x00},	// 0xBF
{0x00,0x00,0xF0,0x10,0x10},	// 0xC0
{0x10,0x10,0xF0,0x10,0x10},	// 0xC1
{0x10,0x10,0x1F,0x10,0x10},	// 0xC2
{0x00,0x00,0xFF,0x10,0x10},	// 0xC3
{0x10,0x10,0x10,0x10,0x10},	// 0xC4
{0x10,0x10,0xFF,0x10,0x10},	// 0xC5
{0x40,0xAC,0xAC,0x5C,0x84},	// 0xC6
{0x4C,0x98,0xA8,0x58,0x8C},	// 0xC7
{0x00,0xF8,0x08,0xE8,0x28},	// 0xC8
{0x00,0x3F,0x20,0x2F,0x28},	// 0xC9
{0x28,0xE8,0x08,0xE8,0x28},	// 0xCA
{0x28,0x2F,0x20,0x2F,0x28},	// 0xCB
{0x00,0xFF,0x00,0xEF,0x28},	// 0xCC
{0x28,0x28,0x28,0x28,0x28},	// 0xCD
{0x28,0xEF,0x00,0xEF,0x28},	// 0xCE
{0x44,0x38,0x28,0x38,0x44},	// 0xCF
{0x98,0xA4,0xE4,0xB8,0x00},	// 0xD0
{0x10,0x7C,0x54,0x44,0x38},	// 0xD1
{0x00,0xFC,0xD4,0xD4,0x00},	// 0xD2
{0x80,0x7C,0x54,0x54,0x80},	// 0xD3
{0x80,0x7C,0x54,0x54,0x00},	// 0xD4
{0x00,0x20,0x3C,0x00,0x00},	// 0xD5
{0x00,0x44,0x7C,0x44,0x80},	// 0xD6
{0x00,0xC4,0xFC,0xC4,0x00},	// 0xD7
{0x80,0x44,0x7C,0x44,0x80},	// 0xD8
{0x10,0x10,0xF0,0x00,0x00},	// 0xD9
{0x00,0x00,0x1F,0x10,0x10},	// 0xDA
{0xFF,0xFF,0xFF,0xFF,0xFF},	// 0xDB
{0x0F,0x0F,0x0F,0x0F,0x0F},	// 0xDC
{0x00,0x00,0xE7,0x00,0x00},	// 0xDD
{0x80,0x44,0x7C,0x44,0x00},	// 0xDE
{0xF0,0xF0,0xF0,0xF0,0xF0},	// 0xDF
{0x38,0x44,0x44,0x44,0xB8},	// 0xE0
{0x00,0x7C,0x80,0x74,0x08},	// 0xE1
{0x38,0xC4,0xC4,0xC4,0x38},	// 0xE2
{0xB8,0x44,0x44,0x44,0x38},	// 0xE3
{0x40,0x98,0xA4,0x64,0x98},	// 0xE4
{0xB8,0xC4,0xC4,0xC4,0x38},	// 0xE5
{0x00,0x3E,0x04,0x08,0x3C},	// 0xE6
{0x00,0xFE,0x24,0x24,0x18},	// 0xE7
{0x00,0x7C,0x28,0x28,0x10},	// 0xE8
{0x78,0x04,0x04,0x78,0x80},	// 0xE9
{0x00,0xF8,0x84,0x84,0xF8},	// 0xEA
{0x80,0x78,0x04,0x04,0x78},	// 0xEB
{0x02,0x32,0x0C,0x4C,0xB0},	// 0xEC
{0x40,0x20,0x5C,0xA0,0x40},	// 0xED
{0x80,0x80,0x80,0x80,0x80},	// 0xEE
{0x00,0x00,0x40,0x80,0x00},	// 0xEF
{0x00,0x10,0x10,0x10,0x00},	// 0xF0
{0x00,0x14,0x3C,0x14,0x00},	// 0xF1
{0x05,0x05,0x05,0x05,0x05},	// 0xF2
{0xD4,0xF8,0x10,0x68,0x9C},	// 0xF3
{0x60,0xFE,0x80,0xFE,0x00},	// 0xF4
{0x00,0x52,0xAA,0x94,0x00},	// 0xF5
{0x00,0x10,0x54,0x10,0x00},	// 0xF6
{0x00,0x01,0x02,0x00,0x00},	// 0xF7
{0x00,0x60,0x90,0x90,0x60},	// 0xF8
{0x00,0x80,0x00,0x80,0x00},	// 0xF9
{0x00,0x00,0x10,0x00,0x00},	// 0xFA
{0x00,0x88,0xF8,0x08,0x00},	// 0xFB
{0x00,0xA8,0xA8,0x50,0x00},	// 0xFC
{0x00,0x98,0xA8,0x48,0x00},	// 0xFD
{0x00,0x3C,0x3C,0x3C,0x3C},	// 0xFE
{0x00,0x00,0x00,0x00,0x00} 	// 0xFF
};