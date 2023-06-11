// Version Name : 00-00-0000
// Time Stamp : 2019/03/25 18:40:36

//#define	SELECT_GYRO			2	// --- Gyro ---//
//									// 0 : InvenSense ICM20690
//									// 1 : ---
//									// 2 : STmicro LSM6DSM
//									// 3 : ---

#define LC898124EP2_CHECKSUM_COMMAND_DMB_1_2		0x001001c6

#define LC898124EP2_DMB_ByteSize_1_2		0x0374
#define LC898124EP2_DMB_CheckSum_1_2		0x2FAD203D

#define LC898124EP2_PMCheckSum_1_2		0x00045ADF
#define LC898124EP2_PMSize_1_2			758

const unsigned char LC898124EP2_DM_1_2[] = {
0x80, 0x00, 0x07, 0x0b, 0x04, 0x02,
0x80, 0x04, 0x00, 0x00, 0x01, 0x02,
0x80, 0x0C, 0x00, 0x10, 0x01, 0xc6,
0x80, 0x90, 0x7f, 0xff, 0xff, 0xff,
0x80, 0x94, 0x7f, 0xff, 0xff, 0xff,
0x80, 0x98, 0x80, 0x00, 0x00, 0x01,
0x80, 0x9C, 0x02, 0x85, 0x06, 0x07,
0x80, 0xA0, 0x7f, 0xf7, 0xdc, 0x40,
0x80, 0xA4, 0x02, 0x85, 0x06, 0x07,
0x80, 0xA8, 0xe9, 0x42, 0x87, 0xcf,
0x80, 0xAC, 0x7f, 0xcd, 0x29, 0x0d,
0x80, 0xB0, 0x16, 0xf0, 0x4f, 0x23,
0x80, 0xB4, 0xb7, 0x8d, 0x03, 0x01,
0x80, 0xB8, 0x66, 0xe7, 0x3a, 0xbc,
0x80, 0xBC, 0x49, 0x3d, 0xad, 0x13,
0x80, 0xC8, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xDC, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xE0, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xE4, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xE8, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xEC, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xF0, 0x38, 0x00, 0x00, 0x00,
0x80, 0xF4, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xF8, 0x0e, 0x24, 0x97, 0x6b,
0x80, 0xFC, 0x63, 0xb6, 0xd1, 0x29,
0x81, 0x00, 0x0e, 0x24, 0x97, 0x6b,
0x81, 0x04, 0x8f, 0xa3, 0x54, 0xd5,
0x81, 0x08, 0x70, 0x5c, 0xab, 0x29,
0x81, 0x0C, 0x39, 0xd6, 0x49, 0x07,
0x81, 0x10, 0xca, 0xa3, 0xbe, 0xb5,
0x81, 0x14, 0x3b, 0x85, 0xf8, 0x42,
0x81, 0x18, 0x91, 0xa2, 0x92, 0x3b,
0x81, 0x1C, 0x6e, 0x5d, 0x6d, 0xc5,
0x81, 0x20, 0x39, 0x46, 0xb7, 0xed,
0x81, 0x24, 0xcb, 0x9b, 0x98, 0xc3,
0x81, 0x28, 0x3b, 0x1d, 0xaf, 0x4f,
0x81, 0x2C, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x30, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x34, 0x80, 0x00, 0x00, 0x01,
0x81, 0x38, 0x02, 0x85, 0x06, 0x07,
0x81, 0x3C, 0x7f, 0xf7, 0xdc, 0x40,
0x81, 0x40, 0x02, 0x85, 0x06, 0x07,
0x81, 0x44, 0xe9, 0x42, 0x87, 0xcf,
0x81, 0x48, 0x7f, 0xcd, 0x29, 0x0d,
0x81, 0x4C, 0x16, 0xf0, 0x4f, 0x23,
0x81, 0x50, 0xb7, 0x8d, 0x03, 0x01,
0x81, 0x54, 0x66, 0xe7, 0x3a, 0xbc,
0x81, 0x58, 0x49, 0x3d, 0xad, 0x13,
0x81, 0x64, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x78, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x7C, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x80, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x84, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x88, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x8C, 0x38, 0x00, 0x00, 0x00,
0x81, 0x90, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x94, 0x0e, 0x24, 0x97, 0x6b,
0x81, 0x98, 0x63, 0xb6, 0xd1, 0x29,
0x81, 0x9C, 0x0e, 0x24, 0x97, 0x6b,
0x81, 0xA0, 0x8f, 0xa3, 0x54, 0xd5,
0x81, 0xA4, 0x70, 0x5c, 0xab, 0x29,
0x81, 0xA8, 0x39, 0xd6, 0x49, 0x07,
0x81, 0xAC, 0xca, 0xa3, 0xbe, 0xb5,
0x81, 0xB0, 0x3b, 0x85, 0xf8, 0x42,
0x81, 0xB4, 0x91, 0xa2, 0x92, 0x3b,
0x81, 0xB8, 0x6e, 0x5d, 0x6d, 0xc5,
0x81, 0xBC, 0x39, 0x46, 0xb7, 0xed,
0x81, 0xC0, 0xcb, 0x9b, 0x98, 0xc3,
0x81, 0xC4, 0x3b, 0x1d, 0xaf, 0x4f,
0x81, 0xC8, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xCC, 0x80, 0x00, 0x00, 0x01,
0x81, 0xD0, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xD4, 0x80, 0x00, 0x00, 0x01,
0x81, 0xD8, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xDC, 0x80, 0x00, 0x00, 0x01,
0x81, 0xE0, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xE4, 0x80, 0x00, 0x00, 0x01,
0x81, 0xE8, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xEC, 0x80, 0x00, 0x00, 0x01,
0x81, 0xF0, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xF4, 0x80, 0x00, 0x00, 0x01,
0x81, 0xF8, 0x04, 0x02, 0x00, 0x00,
0x81, 0xFC, 0x00, 0x00, 0x01, 0x01,
0x82, 0x00, 0x01, 0x01, 0x04, 0x02,
0x82, 0x04, 0x00, 0x12, 0x74, 0x74,
0x82, 0x14, 0x7f, 0xff, 0xff, 0xff,
0x82, 0x1C, 0x7f, 0xff, 0xff, 0xff,
0x82, 0x28, 0xff, 0x62, 0xff, 0x6f,
0x82, 0x2C, 0xf5, 0x4e, 0xff, 0x51,
0x82, 0x30, 0xff, 0x24, 0xff, 0x31,
0x82, 0x34, 0x1b, 0xc6, 0x46, 0xcd,
0x82, 0x3C, 0x3c, 0x28, 0x18, 0x42,
0x82, 0x40, 0xfe, 0x5c, 0xfc, 0x8b,
0x82, 0x44, 0x01, 0x81, 0x00, 0x00,
0x82, 0x48, 0xff, 0x6f, 0x02, 0xe4,
0x82, 0x4C, 0xff, 0x51, 0xff, 0x62,
0x82, 0x50, 0xff, 0x31, 0xf5, 0x4e,
0x82, 0x54, 0x46, 0xcd, 0xff, 0x24,
0x82, 0x58, 0x00, 0x00, 0x1b, 0xc6,
0x82, 0x5C, 0x18, 0x42, 0x00, 0x00,
0x82, 0x60, 0xfc, 0x8b, 0x3c, 0x28,
0x82, 0x64, 0x00, 0x00, 0xfe, 0x5c,
0x82, 0x68, 0x02, 0xe4, 0x01, 0x81,
0x82, 0x6C, 0x00, 0x07, 0xff, 0xff,
0x82, 0x70, 0x7f, 0xff, 0xff, 0xff,
0x82, 0x78, 0x7f, 0xff, 0xff, 0xff,
0x82, 0x7C, 0x51, 0x2a, 0x89, 0x17,
0x82, 0x80, 0xa1, 0x75, 0xeb, 0x83,
0x82, 0x84, 0x71, 0x07, 0xb0, 0x75,
0x82, 0x88, 0x60, 0xea, 0xe7, 0x0d,
0x82, 0x8C, 0x90, 0xd6, 0x25, 0x8b,
0x82, 0x90, 0x7f, 0xf6, 0xd7, 0xd1,
0x82, 0x94, 0x6f, 0x33, 0x02, 0xa3,
0x82, 0x98, 0x7f, 0xff, 0xff, 0xff,
0x82, 0xA0, 0x7f, 0xfe, 0x80, 0x00,
0x82, 0xA4, 0x06, 0x6e, 0x30, 0x9d,
0x82, 0xA8, 0x00, 0x65, 0x71, 0x75,
0x82, 0xAC, 0x7f, 0x35, 0x1d, 0x15,
0x82, 0xB0, 0x00, 0x65, 0x71, 0x75,
0x82, 0xB4, 0x7f, 0xff, 0xff, 0xff,
0x82, 0xB8, 0x7f, 0xff, 0xff, 0xff,
0x82, 0xBC, 0x7f, 0xff, 0xff, 0xff,
0x82, 0xC0, 0x0a, 0xe8, 0x95, 0x39,
0x82, 0xC4, 0x6a, 0x2e, 0xd5, 0x8d,
0x82, 0xC8, 0x0a, 0xe8, 0x95, 0x39,
0x82, 0xCC, 0x7f, 0xff, 0xff, 0xff,
0x82, 0xD0, 0x80, 0x00, 0x00, 0x01,
0x82, 0xD8, 0x7f, 0xff, 0xff, 0xff,
0x82, 0xDC, 0x51, 0x2a, 0x89, 0x17,
0x82, 0xE0, 0xa1, 0x75, 0xeb, 0x83,
0x82, 0xE4, 0x71, 0x07, 0xb0, 0x75,
0x82, 0xE8, 0x60, 0xea, 0xe7, 0x0d,
0x82, 0xEC, 0x90, 0xd6, 0x25, 0x8b,
0x82, 0xF0, 0x7f, 0xf6, 0xd7, 0xd1,
0x82, 0xF4, 0x6f, 0x33, 0x02, 0xa3,
0x82, 0xF8, 0x7f, 0xff, 0xff, 0xff,
0x83, 0x00, 0x7f, 0xfe, 0x80, 0x00,
0x83, 0x04, 0x06, 0x6e, 0x30, 0x9d,
0x83, 0x08, 0x00, 0x65, 0x71, 0x75,
0x83, 0x0C, 0x7f, 0x35, 0x1d, 0x15,
0x83, 0x10, 0x00, 0x65, 0x71, 0x75,
0x83, 0x14, 0x7f, 0xff, 0xff, 0xff,
0x83, 0x18, 0x7f, 0xff, 0xff, 0xff,
0x83, 0x1C, 0x7f, 0xff, 0xff, 0xff,
0x83, 0x20, 0x0a, 0xe8, 0x95, 0x39,
0x83, 0x24, 0x6a, 0x2e, 0xd5, 0x8d,
0x83, 0x28, 0x0a, 0xe8, 0x95, 0x39,
0x83, 0x2C, 0x7f, 0xff, 0xff, 0xff,
0x83, 0x38, 0x00, 0x00, 0x02, 0x00,
0x83, 0x3C, 0x00, 0x00, 0x02, 0x00,
0x83, 0x40, 0x00, 0x05, 0x16, 0x4d,
0x83, 0x44, 0x7f, 0xf5, 0xd3, 0x65,
0x83, 0x48, 0x00, 0x05, 0x16, 0x4d,
0x83, 0x60, 0x17, 0x1b, 0x00, 0x00,
0x83, 0x64, 0x10, 0x00, 0x00, 0x00,
0x83, 0x68, 0x17, 0x1b, 0x00, 0x00,
0x83, 0x6C, 0x17, 0x1b, 0x00, 0x00,
0x83, 0x70, 0x7f, 0xff, 0xff, 0xff,
0x83, 0x74, 0x7f, 0xff, 0xff, 0xff,
0x83, 0xB0, 0x00, 0x64, 0x00, 0x05,
0x83, 0xC8, 0x00, 0x00, 0x02, 0x20,
0x83, 0xE0, 0x00, 0x00, 0x02, 0x44,
0x83, 0xF0, 0x80, 0x00, 0x00, 0x01,
0x83, 0xF4, 0x7f, 0xff, 0xff, 0xff,
0x83, 0xF8, 0x7f, 0xff, 0xff, 0xff,
0x84, 0x00, 0x00, 0x15, 0xd2, 0xf3,
0x84, 0x04, 0x0c, 0xc9, 0x9a, 0x66,
0x84, 0x08, 0x00, 0x00, 0x00, 0x1e,
0x84, 0x0C, 0x00, 0x00, 0x00, 0x01,
0x84, 0x10, 0x00, 0x04, 0x00, 0x00,
0x84, 0x14, 0x00, 0x00, 0x00, 0x80,
0x84, 0x18, 0x06, 0x90, 0xea, 0xe1,
0x84, 0x1C, 0x00, 0x10, 0x00, 0x00,
0x84, 0x20, 0x03, 0x00, 0x00, 0x00,
0x84, 0x24, 0x00, 0x00, 0x40, 0x00,
0x84, 0x2C, 0x00, 0x00, 0x03, 0xe8,
0x84, 0x30, 0x00, 0x00, 0x00, 0x14,
0x84, 0x34, 0x00, 0x00, 0x32, 0x00,
0x84, 0x38, 0x0a, 0x3d, 0x00, 0x00,
0x84, 0x44, 0x17, 0x1b, 0x00, 0x00,
0x84, 0x5C, 0x7f, 0xfe, 0x80, 0x00,
0x84, 0x60, 0x00, 0x00, 0x81, 0xe4,
0x84, 0x64, 0x6f, 0xf5, 0x91, 0x38,
0x84, 0x68, 0x00, 0x00, 0x00, 0x40,
0x84, 0x70, 0x00, 0x00, 0x13, 0x88,
0x84, 0x78, 0x92, 0xa6, 0xd0, 0x87,
0x84, 0x7C, 0x7e, 0x6b, 0x7a, 0xc1,
0x84, 0x80, 0x6e, 0xed, 0xb4, 0xb7,
0x84, 0x84, 0xff, 0xff, 0xfb, 0x9e,
0x84, 0x88, 0x00, 0x00, 0x1d, 0x65,
0x84, 0x8C, 0x90, 0xd6, 0x25, 0x8b,
0x84, 0x90, 0x6f, 0x33, 0x02, 0xa3,
0x84, 0x94, 0x7f, 0xf6, 0x00, 0x00,
0x84, 0x98, 0x00, 0x00, 0x13, 0x88,
0x84, 0x9C, 0x7f, 0xff, 0xff, 0xff,
0x84, 0xA4, 0x17, 0x1b, 0x00, 0x00,
0x84, 0xA8, 0x77, 0xff, 0xff, 0xff,
0x84, 0xAC, 0x00, 0x00, 0x00, 0x80,
0x84, 0xB4, 0x00, 0x34, 0x00, 0x00,
0x84, 0xB8, 0x00, 0x2b, 0x00, 0x00,
0x84, 0xBC, 0x00, 0x4b, 0x00, 0x00,
0x84, 0xC0, 0x00, 0x4b, 0x00, 0x00,
0x84, 0xD4, 0x0c, 0xcc, 0xcc, 0xcc,
0x84, 0xD8, 0x19, 0x99, 0x99, 0x99,
0x84, 0xDC, 0x33, 0x33, 0x33, 0x33,
0x84, 0xE0, 0x3f, 0xff, 0xff, 0xff,
0x84, 0xE4, 0x66, 0x66, 0x66, 0x66,
0x84, 0xE8, 0x5f, 0xff, 0xff, 0xff,
0x84, 0xEC, 0x7f, 0xff, 0xff, 0xff,
0x84, 0xF0, 0x46, 0x66, 0x66, 0x65,
0x84, 0xF4, 0x2a, 0xaa, 0xaa, 0xaa,
0x84, 0xF8, 0x80, 0x00, 0x00, 0x00,
0x84, 0xFC, 0x04, 0x00, 0x00, 0x00,
0x85, 0x00, 0x73, 0x33, 0x33, 0x32,
0x85, 0x04, 0x7a, 0xe1, 0x47, 0xad,
0x85, 0x08, 0x46, 0x00, 0x00, 0x00,
0x85, 0x0C, 0x46, 0x00, 0x00, 0x00,
0x85, 0x10, 0x00, 0x00, 0x00, 0xfe,
0x85, 0x44, 0x5f, 0x37, 0x59, 0xdf,
0x85, 0x48, 0x5f, 0xff, 0xff, 0xff,
0x85, 0xD0, 0x00, 0x04, 0x1e, 0x5a,
};

const unsigned char LC898124EP2_PM_1_2[] = {
0x5c, 0x00, 0x42, 0xc0, 0x20,
0x68, 0x34, 0x00, 0x0c, 0x20,
0x6c, 0x70, 0x28, 0x06, 0x50,
0x5c, 0x00, 0xd0, 0x40, 0x50,
0x5c, 0x03, 0xca, 0x00, 0x20,
0x5c, 0xbe, 0x08, 0x00, 0x50,
0x5c, 0x04, 0x18, 0x40, 0x50,
0xa0, 0x46, 0x05, 0xc0, 0x49,
0x00, 0x25, 0x2b, 0x06, 0x25,
0x68, 0x34, 0x04, 0x04, 0x24,
0x84, 0x04, 0x95, 0xc1, 0x00,
0x86, 0x05, 0x1a, 0x02, 0x80,
0x68, 0x00, 0x03, 0xcf, 0x89,
0xab, 0xfe, 0x09, 0xe0, 0x84,
0x84, 0x04, 0x98, 0x80, 0x64,
0x5c, 0x0e, 0x18, 0x20, 0x53,
0x86, 0x05, 0x0a, 0x00, 0x80,
0xb1, 0x81, 0xd8, 0x00, 0x49,
0x68, 0x34, 0x08, 0x4a, 0x24,
0xb1, 0x01, 0x58, 0x40, 0x49,
0xa2, 0x02, 0x08, 0x60, 0x50,
0x80, 0x05, 0x08, 0x00, 0x52,
0xac, 0x7e, 0x08, 0x00, 0x52,
0xac, 0x58, 0x08, 0x02, 0x52,
0xb0, 0x60, 0x0a, 0xc4, 0x00,
0x80, 0x25, 0x0a, 0xc9, 0x00,
0x80, 0x05, 0x08, 0x40, 0x7a,
0xa0, 0x50, 0x0a, 0xc4, 0x20,
0x80, 0x05, 0x1a, 0xd2, 0x20,
0x68, 0x00, 0x00, 0x1b, 0x24,
0x80, 0x27, 0xaa, 0xd2, 0x00,
0x86, 0x00, 0x05, 0x20, 0x60,
0x00, 0x07, 0xab, 0x04, 0x02,
0x86, 0x05, 0x08, 0x40, 0x52,
0x66, 0x00, 0x40, 0xa8, 0xe0,
0x66, 0x00, 0x40, 0x34, 0xa0,
0x66, 0x00, 0x41, 0x60, 0x00,
0x68, 0x00, 0x00, 0xd7, 0x20,
0x66, 0x00, 0x41, 0x6c, 0xc0,
0x66, 0x00, 0x41, 0x28, 0x40,
0x6c, 0x40, 0x03, 0x20, 0x00,
0x38, 0x10, 0x22, 0x40, 0x80,
0x6c, 0x40, 0x03, 0x24, 0x01,
0x52, 0x04, 0x53, 0x80, 0x00,
0x6c, 0x40, 0x03, 0x24, 0x52,
0x6c, 0x40, 0x03, 0x20, 0x50,
0x68, 0x00, 0x00, 0xf6, 0x20,
0x68, 0x20, 0x01, 0x31, 0x21,
0x68, 0x00, 0x00, 0xff, 0x22,
0x68, 0x20, 0x01, 0x35, 0x23,
0x66, 0x00, 0x41, 0x32, 0x60,
0x68, 0x00, 0x01, 0x00, 0x00,
0x6c, 0x40, 0x03, 0x30, 0x50,
0xb0, 0x08, 0x46, 0x60, 0x04,
0x07, 0x06, 0x85, 0xc0, 0x06,
0xa4, 0x04, 0x0a, 0x40, 0x40,
0x94, 0x02, 0x8b, 0x07, 0xba,
0x30, 0x08, 0x0b, 0xc3, 0x19,
0x38, 0x00, 0xd6, 0x60, 0x04,
0x07, 0x06, 0x8b, 0x03, 0xbc,
0x68, 0x38, 0x1c, 0x02, 0x20,
0x5c, 0x04, 0x13, 0x03, 0x30,
0x5c, 0x00, 0x50, 0x40, 0x52,
0xa0, 0x02, 0x08, 0x40, 0x50,
0x98, 0xe8, 0x06, 0x00, 0x06,
0x00, 0x06, 0x78, 0x40, 0xd2,
0x40, 0x00, 0x02, 0x40, 0x40,
0x6c, 0x70, 0x38, 0x00, 0x02,
0x3a, 0x08, 0x22, 0x80, 0x80,
0x3a, 0x00, 0x09, 0x40, 0x29,
0x6c, 0x00, 0x00, 0x36, 0x03,
0x30, 0x00, 0x8b, 0xc1, 0x29,
0x38, 0x1d, 0xa6, 0xe4, 0x00,
0x00, 0x83, 0x86, 0x80, 0x02,
0x00, 0x00, 0x12, 0x88, 0x40,
0x32, 0x00, 0x05, 0x24, 0x4d,
0x3c, 0x0c, 0x96, 0xc0, 0x00,
0x03, 0x65, 0x23, 0x81, 0xd0,
0x6c, 0x00, 0x00, 0x36, 0x02,
0x24, 0x01, 0x06, 0xc0, 0x00,
0x03, 0x65, 0x0b, 0xc0, 0x37,
0x24, 0x09, 0x86, 0xc0, 0x00,
0x03, 0x65, 0x03, 0x81, 0xd1,
0x6c, 0x00, 0x00, 0x36, 0x00,
0x25, 0x84, 0x0b, 0xc0, 0x48,
0x38, 0x1c, 0x22, 0x48, 0x80,
0x6c, 0x00, 0x00, 0x36, 0x50,
0x68, 0x04, 0x00, 0x83, 0x20,
0x6c, 0x00, 0x01, 0x4a, 0x60,
0x66, 0x01, 0x00, 0x17, 0x40,
0x5c, 0x09, 0xd0, 0x80, 0x20,
0x6c, 0x00, 0x02, 0x1e, 0x7a,
0x68, 0x00, 0x00, 0x00, 0xf9,
0x68, 0x38, 0x08, 0x10, 0x24,
0x5c, 0x0e, 0x80, 0x40, 0x01,
0x52, 0x04, 0x52, 0x20, 0x24,
0x84, 0x05, 0x28, 0x80, 0x64,
0x40, 0x00, 0x03, 0xc0, 0x4f,
0x5c, 0x96, 0x03, 0x00, 0x1a,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x00, 0x02, 0x1e, 0x01,
0x32, 0xa0, 0x8b, 0xff, 0xa1,
0x68, 0x00, 0x00, 0x1b, 0x20,
0x6c, 0x00, 0x02, 0x1e, 0x7a,
0xa0, 0x00, 0x48, 0x02, 0x01,
0x25, 0x80, 0x8b, 0xc0, 0x89,
0x88, 0x0e, 0x02, 0x48, 0x08,
0x82, 0x25, 0x06, 0x80, 0x10,
0x6b, 0xa2, 0x06, 0xc4, 0x00,
0x31, 0xe5, 0x28, 0x60, 0x60,
0x38, 0x13, 0xa6, 0xe0, 0x00,
0x14, 0x8a, 0x82, 0x58, 0x80,
0xbc, 0x1d, 0x06, 0x80, 0x40,
0x08, 0x32, 0x06, 0xc0, 0x00,
0x14, 0xa0, 0x09, 0x88, 0x02,
0x30, 0x08, 0x0b, 0xc0, 0xa8,
0x5c, 0x81, 0x00, 0x80, 0x20,
0x5c, 0x00, 0x43, 0x05, 0x12,
0x6c, 0x70, 0x10, 0x06, 0x52,
0x68, 0x38, 0x08, 0x03, 0x20,
0xbc, 0x0d, 0xf8, 0x41, 0xd0,
0x6c, 0x70, 0x10, 0x20, 0x00,
0x5c, 0xb5, 0x08, 0x00, 0x02,
0x68, 0x00, 0x00, 0x96, 0x24,
0x5c, 0x00, 0x58, 0x00, 0x81,
0x82, 0x05, 0x08, 0x60, 0x52,
0x84, 0x05, 0x38, 0x65, 0xd1,
0x66, 0x00, 0x40, 0xcb, 0x20,
0x88, 0x0a, 0x00, 0x00, 0x00,
0x84, 0x02, 0x0b, 0xa0, 0x80,
0x6c, 0x00, 0x00, 0x96, 0x00,
0x68, 0x34, 0x08, 0x00, 0x20,
0x6c, 0x00, 0x00, 0xbe, 0x02,
0x51, 0x42, 0x2a, 0x01, 0x00,
0x51, 0x42, 0xa2, 0xc3, 0x00,
0x6c, 0x68, 0x10, 0x00, 0x49,
0x80, 0x04, 0x88, 0x80, 0xe0,
0x00, 0x00, 0x06, 0xc0, 0x00,
0x14, 0xa2, 0x0b, 0xa0, 0x80,
0x6c, 0x40, 0x03, 0x30, 0x00,
0x38, 0x1c, 0x22, 0x58, 0x80,
0xbc, 0x15, 0x16, 0xc0, 0x00,
0x1f, 0x00, 0x02, 0x3d, 0x45,
0x68, 0x00, 0x01, 0x00, 0x02,
0x30, 0x8a, 0x8b, 0xc0, 0x68,
0xb1, 0xff, 0x86, 0x80, 0x00,
0x10, 0x04, 0x23, 0x08, 0xa8,
0x40, 0x00, 0x03, 0xc0, 0x21,
0x68, 0x00, 0x01, 0x00, 0x89,
0x30, 0x82, 0x8b, 0xc0, 0x11,
0xb1, 0xff, 0x52, 0x35, 0x68,
0x6c, 0x00, 0x01, 0xf0, 0x50,
0x66, 0x00, 0x41, 0x35, 0x00,
0x6c, 0x00, 0x01, 0xfa, 0x00,
0x32, 0x00, 0x0b, 0xc0, 0xc4,
0x32, 0x00, 0x0b, 0xc0, 0x5a,
0x68, 0x38, 0x00, 0x00, 0x02,
0xbc, 0x0d, 0xf6, 0xc6, 0x81,
0x02, 0x05, 0x02, 0x80, 0x80,
0x6c, 0x68, 0x10, 0x20, 0x50,
0x40, 0x00, 0x03, 0xc0, 0x67,
0x68, 0x08, 0x00, 0x00, 0x02,
0x54, 0x04, 0x03, 0x80, 0x00,
0x6c, 0x68, 0x10, 0x20, 0x50,
0x68, 0x00, 0x01, 0x11, 0x20,
0x5c, 0x81, 0x00, 0x80, 0xa4,
0x80, 0x02, 0x18, 0x40, 0xa5,
0x84, 0x80, 0x08, 0x00, 0x21,
0x82, 0x05, 0x00, 0x00, 0x00,
0x84, 0x80, 0x0a, 0x20, 0x01,
0x82, 0x05, 0x00, 0x00, 0x00,
0x86, 0x80, 0x08, 0x40, 0xa0,
0x84, 0x8d, 0x00, 0x00, 0x00,
0x84, 0x00, 0x06, 0xc0, 0x00,
0x19, 0x42, 0x0b, 0xa0, 0x88,
0x86, 0x0d, 0x00, 0x00, 0x00,
0x68, 0x00, 0x00, 0xc2, 0x20,
0x68, 0x20, 0x00, 0xe0, 0x24,
0x68, 0x00, 0x00, 0xc6, 0x21,
0x68, 0x20, 0x00, 0xe6, 0x25,
0x68, 0x00, 0x00, 0xac, 0x22,
0x66, 0x00, 0x40, 0xc1, 0xe0,
0x68, 0x00, 0x00, 0xd7, 0x20,
0x66, 0x00, 0x41, 0x6e, 0x60,
0x46, 0x0e, 0x03, 0x80, 0x00,
0xbf, 0x4f, 0xf3, 0x81, 0xd0,
0x68, 0x34, 0x00, 0x0e, 0x20,
0x5c, 0x00, 0x62, 0xc0, 0x82,
0x5c, 0x0b, 0x08, 0x40, 0x48,
0x5c, 0x08, 0x32, 0x01, 0x20,
0x5c, 0xbd, 0x08, 0x01, 0x7a,
0x5c, 0x8c, 0x1a, 0x03, 0x21,
0x5c, 0x82, 0x00, 0x40, 0x00,
0x52, 0x42, 0x13, 0x04, 0x00,
0x5c, 0x1c, 0x10, 0x40, 0x52,
0x68, 0x38, 0x08, 0x0f, 0x22,
0x5c, 0x08, 0x68, 0x48, 0x0b,
0x52, 0x0d, 0xdb, 0x00, 0x17,
0x84, 0x85, 0x30, 0x00, 0x00,
0x84, 0x00, 0x32, 0x40, 0x5b,
0x5c, 0x81, 0x10, 0x03, 0x53,
0x85, 0x04, 0x85, 0xc8, 0xb0,
0x9d, 0x08, 0x25, 0xc8, 0x81,
0x81, 0x3d, 0x18, 0x10, 0x50,
0x81, 0x17, 0xa8, 0x50, 0x52,
0x81, 0x0c, 0x98, 0x13, 0xcb,
0xa1, 0x00, 0x18, 0x11, 0x48,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x70, 0x10, 0x0e, 0x02,
0x25, 0x99, 0x0b, 0xff, 0xc1,
0x5c, 0x1c, 0x52, 0x14, 0xe2,
0x84, 0x8c, 0x88, 0x10, 0x50,
0xa1, 0x00, 0x18, 0x11, 0x7a,
0x84, 0x8d, 0x28, 0x10, 0xcb,
0x81, 0x3c, 0xb8, 0x11, 0x48,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x70, 0x10, 0x0e, 0x00,
0x25, 0x98, 0x0b, 0xff, 0xc1,
0x5c, 0x8c, 0x18, 0x11, 0xc8,
0x5c, 0x02, 0x30, 0x40, 0x48,
0x5c, 0x01, 0x42, 0x14, 0x60,
0x85, 0x04, 0x85, 0xc8, 0x81,
0x80, 0x3c, 0xa8, 0x00, 0x7a,
0x80, 0x17, 0xab, 0x05, 0x16,
0x80, 0x0c, 0xa4, 0x60, 0xa4,
0x00, 0x3d, 0x08, 0x40, 0x48,
0x40, 0x00, 0x03, 0x80, 0x00,
0x68, 0x00, 0x00, 0x06, 0xe1,
0x5c, 0x80, 0x43, 0x00, 0xf8,
0x94, 0x80, 0xe5, 0xb4, 0xc1,
0x18, 0xeb, 0x53, 0x70, 0x85,
0x2e, 0x14, 0x56, 0x20, 0x00,
0x00, 0x02, 0x55, 0x04, 0xa9,
0x30, 0x03, 0x45, 0xb4, 0x80,
0x2b, 0xfe, 0x02, 0xf8, 0x12,
0x55, 0xcd, 0x80, 0x80, 0x76,
0x32, 0x00, 0x0b, 0xc0, 0x2b,
0x98, 0x38, 0xa3, 0x61, 0x86,
0xba, 0x11, 0x10, 0x88, 0x00,
0x98, 0x32, 0x89, 0xc8, 0x01,
0x98, 0x84, 0x86, 0x80, 0x00,
0x00, 0x70, 0xa4, 0x20, 0xf7,
0x88, 0x0c, 0x84, 0x60, 0x80,
0x98, 0x2a, 0x19, 0x48, 0x0c,
0x55, 0x5f, 0x31, 0x48, 0x0c,
0x51, 0x91, 0x81, 0x88, 0x0a,
0x54, 0x08, 0x20, 0x81, 0x61,
0x28, 0x1a, 0x49, 0x82, 0x20,
0x40, 0x00, 0x00, 0x81, 0xe0,
0x66, 0x00, 0x41, 0x7d, 0xe0,
0x5c, 0x08, 0x20, 0x81, 0xa1,
0x6c, 0x00, 0x02, 0xa0, 0x0a,
0x50, 0xc9, 0x80, 0x48, 0x0a,
0x50, 0xc9, 0x90, 0x81, 0x21,
0x54, 0x04, 0x00, 0x80, 0x88,
0x5b, 0xc0, 0x02, 0x08, 0x21,
0x6c, 0x00, 0x02, 0xa0, 0x4c,
0x98, 0x84, 0xa3, 0x01, 0x30,
0x68, 0x20, 0x00, 0x00, 0x20,
0xbf, 0xe0, 0xa3, 0x90, 0x08,
0x88, 0x03, 0x6b, 0xa1, 0x48,
0xa8, 0x02, 0x00, 0x00, 0x00,
0x68, 0x00, 0x00, 0x9e, 0x20,
0x5c, 0x81, 0x03, 0x01, 0x04,
0x5c, 0x00, 0x38, 0x00, 0x09,
0x55, 0x01, 0xd2, 0x00, 0xa1,
0x94, 0x82, 0x85, 0x2c, 0x80,
0x2b, 0xfc, 0x08, 0x40, 0x0a,
0xa0, 0xd4, 0x14, 0x20, 0x3c,
0x88, 0x2f, 0x65, 0x50, 0x1e,
0x08, 0x26, 0x16, 0x80, 0x00,
0x09, 0x62, 0x00, 0x00, 0x00,
0x84, 0x08, 0x28, 0x40, 0x0b,
0x38, 0x10, 0x92, 0x58, 0x40,
0xbc, 0x06, 0x92, 0xa0, 0x20,
0x68, 0x00, 0x00, 0x98, 0x20,
0x00, 0x00, 0x08, 0x40, 0x80,
0x84, 0x00, 0x83, 0x61, 0x41,
0x28, 0x1c, 0x93, 0x61, 0x83,
0x14, 0xc0, 0xa6, 0x80, 0x00,
0x15, 0x12, 0x05, 0x40, 0x08,
0x98, 0x04, 0x86, 0xc4, 0x00,
0x13, 0xe0, 0xa4, 0x41, 0x00,
0x04, 0x04, 0x89, 0x80, 0x48,
0x6e, 0x40, 0x01, 0x9d, 0x21,
0x6c, 0x40, 0x02, 0x56, 0x09,
0x50, 0x02, 0x00, 0x40, 0xc8,
0x51, 0x8b, 0x52, 0x08, 0x00,
0x6c, 0x40, 0x01, 0x6e, 0x0a,
0x6c, 0x00, 0x01, 0x4c, 0x0b,
0x6e, 0x40, 0x01, 0x9f, 0x21,
0x44, 0x10, 0x00, 0x08, 0x40,
0x58, 0x05, 0xc0, 0x83, 0x61,
0x50, 0x02, 0x03, 0xc0, 0x8d,
0x84, 0x84, 0x02, 0x29, 0xac,
0x2e, 0x13, 0xc6, 0xc0, 0x00,
0x14, 0xc4, 0x82, 0x29, 0x64,
0x6c, 0x40, 0x02, 0x0a, 0x48,
0x68, 0x20, 0x00, 0x9c, 0x24,
0x66, 0x00, 0x41, 0x27, 0x80,
0x68, 0x20, 0x00, 0xd3, 0x2c,
0x68, 0x20, 0x00, 0xdf, 0x2d,
0x68, 0x20, 0x00, 0xdc, 0x23,
0x68, 0x20, 0x00, 0xde, 0x26,
0x6c, 0x00, 0x01, 0x12, 0x48,
0x68, 0x00, 0x00, 0x84, 0x20,
0x68, 0x00, 0x00, 0x70, 0x21,
0x68, 0x20, 0x00, 0x9c, 0x24,
0x68, 0x20, 0x00, 0xce, 0x25,
0x68, 0x00, 0x00, 0xa8, 0x22,
0x88, 0x06, 0xc8, 0x80, 0xed,
0x88, 0x16, 0x38, 0x81, 0xe6,
0x66, 0x01, 0x00, 0x42, 0xc0,
0x88, 0x22, 0x18, 0x83, 0x20,
0x68, 0x20, 0x00, 0xb4, 0x24,
0x66, 0x00, 0x41, 0x27, 0x80,
0x68, 0x20, 0x00, 0xd5, 0x2c,
0x68, 0x20, 0x00, 0xdf, 0xad,
0x68, 0x20, 0x00, 0xdd, 0x23,
0x68, 0x20, 0x00, 0xde, 0xa6,
0x6c, 0x00, 0x01, 0x24, 0x48,
0x68, 0x00, 0x00, 0x8d, 0x20,
0x68, 0x00, 0x00, 0x7a, 0x21,
0x68, 0x20, 0x00, 0xb4, 0x24,
0x68, 0x20, 0x00, 0xcf, 0x25,
0x68, 0x00, 0x00, 0xaa, 0x22,
0x88, 0x06, 0xc8, 0x80, 0xed,
0x88, 0x16, 0x38, 0x81, 0xe6,
0x66, 0x01, 0x00, 0x42, 0xc0,
0x68, 0x20, 0x00, 0x9c, 0x21,
0x6c, 0x40, 0x02, 0x46, 0x08,
0x84, 0xb8, 0xa5, 0x80, 0x98,
0x33, 0x87, 0xe6, 0xc4, 0x00,
0x2a, 0x60, 0x96, 0x82, 0x00,
0x0b, 0x42, 0x1b, 0xc0, 0x38,
0x28, 0x9a, 0xe3, 0x81, 0x25,
0x24, 0x17, 0x68, 0x4b, 0x89,
0x30, 0x12, 0x8b, 0xc0, 0x20,
0x38, 0x12, 0xc2, 0x41, 0x36,
0x6c, 0x40, 0x01, 0xb8, 0x08,
0x6c, 0x40, 0x01, 0xfa, 0x09,
0x30, 0x16, 0x0b, 0xc0, 0x20,
0x38, 0x13, 0x42, 0x41, 0x36,
0x6c, 0x40, 0x01, 0xba, 0x08,
0x30, 0x16, 0x0b, 0xc0, 0x20,
0x38, 0x13, 0xc2, 0x41, 0x36,
0x5c, 0x00, 0x60, 0x82, 0xb6,
0x6c, 0x40, 0x02, 0xa6, 0x4a,
0x6c, 0x00, 0x02, 0x8e, 0x48,
0x68, 0x04, 0x00, 0xb0, 0x21,
0xba, 0x14, 0x86, 0xc0, 0x00,
0x14, 0xa6, 0x1a, 0x80, 0x40,
0xab, 0xfe, 0x08, 0x80, 0x76,
0x68, 0x00, 0x00, 0x84, 0x20,
0x68, 0x00, 0x00, 0x70, 0x21,
0x68, 0x20, 0x00, 0x9c, 0x24,
0x66, 0x01, 0x00, 0x56, 0x28,
0x6c, 0x00, 0x01, 0x14, 0x08,
0x68, 0x00, 0x00, 0x8d, 0x20,
0x68, 0x00, 0x00, 0x7a, 0x21,
0x68, 0x20, 0x00, 0xb4, 0x24,
0x66, 0x01, 0x00, 0x56, 0x28,
0x6c, 0x00, 0x01, 0x26, 0x08,
0x68, 0x20, 0x00, 0x9c, 0x24,
0x6c, 0x40, 0x02, 0x2e, 0x09,
0x86, 0x60, 0x26, 0xc4, 0x00,
0x2a, 0x60, 0x33, 0x01, 0x50,
0xbc, 0x05, 0xa3, 0x81, 0x04,
0x52, 0x48, 0xe3, 0xc0, 0x6f,
0x6c, 0x40, 0x02, 0xa6, 0x48,
0x52, 0x08, 0xe3, 0x80, 0x00,
0x6c, 0x40, 0x02, 0xa6, 0x48,
0x68, 0x20, 0x00, 0xb4, 0x20,
0x6c, 0x40, 0x02, 0xa6, 0x08,
0x84, 0x60, 0x33, 0x01, 0x58,
0xbc, 0x05, 0xa3, 0x81, 0x0a,
0x52, 0x45, 0x2b, 0xc0, 0x6f,
0x6c, 0x40, 0x02, 0xa6, 0x49,
0x52, 0x05, 0x2b, 0x80, 0x00,
0x6c, 0x40, 0x02, 0xa6, 0x49,
0x68, 0x00, 0x00, 0x84, 0x20,
0x66, 0x01, 0x00, 0x5d, 0xc0,
0x68, 0x00, 0x00, 0x8d, 0x20,
0x68, 0x20, 0x00, 0xb4, 0x24,
0x66, 0x01, 0x00, 0x5d, 0xc0,
0x68, 0x00, 0x00, 0x84, 0x20,
0x68, 0x00, 0x00, 0x70, 0x21,
0x68, 0x20, 0x00, 0x9c, 0x24,
0x68, 0x20, 0x00, 0xde, 0x25,
0x66, 0x00, 0x41, 0x18, 0x00,
0x68, 0x00, 0x00, 0xa0, 0x21,
0x68, 0x00, 0x00, 0x8d, 0x20,
0x40, 0x00, 0x00, 0x48, 0x48,
0x68, 0x00, 0x00, 0x7a, 0x21,
0x68, 0x20, 0x00, 0xb4, 0x24,
0x68, 0x20, 0x00, 0xde, 0xa5,
0x66, 0x00, 0x41, 0x18, 0x00,
0x5c, 0x81, 0x00, 0x80, 0xc8,
0x68, 0x00, 0x00, 0xa0, 0x23,
0x68, 0x20, 0x00, 0xd7, 0x24,
0xa1, 0x80, 0x2c, 0x60, 0x80,
0x5d, 0x0c, 0x28, 0x58, 0x48,
0x51, 0x85, 0x68, 0x81, 0x63,
0x98, 0x26, 0x89, 0xe0, 0x00,
0x84, 0x00, 0x96, 0x82, 0x00,
0x0c, 0xc2, 0x06, 0x82, 0x00,
0x0c, 0xd2, 0x18, 0x40, 0x49,
0x84, 0x84, 0x98, 0x81, 0xd0,
0x66, 0x00, 0x41, 0x20, 0xc0,
0x32, 0x02, 0x0b, 0xc0, 0x88,
0x40, 0x00, 0x00, 0x81, 0x88,
0x6c, 0x40, 0x02, 0x4a, 0x09,
0x6c, 0x40, 0x01, 0x50, 0x49,
0x6c, 0x40, 0x01, 0x80, 0x49,
0x5b, 0x48, 0x23, 0x27, 0x9a,
0x6c, 0x00, 0x01, 0x40, 0x09,
0x5b, 0x4a, 0x18, 0x81, 0x20,
0x30, 0x0e, 0x06, 0xc4, 0x00,
0x2a, 0x60, 0x35, 0x44, 0x4d,
0x04, 0x00, 0x84, 0x20, 0x1e,
0x88, 0x08, 0x38, 0x80, 0xc8,
0x38, 0x11, 0x62, 0x41, 0x92,
0x36, 0x8c, 0x33, 0x69, 0x04,
0x30, 0x11, 0x8b, 0xc0, 0x25,
0x38, 0x11, 0xc2, 0x41, 0x12,
0x6e, 0x40, 0x01, 0xbc, 0x3b,
0x38, 0x17, 0xc2, 0x59, 0x18,
0xbc, 0x03, 0x13, 0x81, 0x43,
0x52, 0x06, 0x93, 0x80, 0x00,
0x6e, 0x40, 0x01, 0xbd, 0x3b,
0x25, 0x91, 0x8b, 0xc0, 0x21,
0x38, 0x14, 0xc2, 0x41, 0x12,
0x6c, 0x40, 0x02, 0xa6, 0x52,
0x68, 0x00, 0x00, 0x84, 0x20,
0x68, 0x00, 0x00, 0x70, 0x21,
0x68, 0x20, 0x00, 0x9c, 0x24,
0x68, 0x20, 0x00, 0xce, 0x25,
0x66, 0x00, 0x41, 0x19, 0x48,
0x98, 0x24, 0x88, 0x81, 0x20,
0x68, 0x00, 0x00, 0x7a, 0x21,
0x84, 0x00, 0x86, 0x80, 0x00,
0x08, 0xd2, 0x06, 0x82, 0x00,
0x0b, 0x42, 0x46, 0x82, 0x00,
0x0c, 0xf2, 0x56, 0x60, 0x04,
0x11, 0x94, 0x88, 0x80, 0x89,
0x5c, 0x08, 0xa8, 0x81, 0x20,
0x00, 0x00, 0x09, 0x46, 0x2c,
0x25, 0x96, 0x0b, 0xc0, 0x40,
0x6c, 0x00, 0x01, 0x18, 0x7a,
0x6c, 0x00, 0x01, 0x2a, 0x7a,
0x38, 0x13, 0x52, 0x59, 0x60,
0xbc, 0x0f, 0x06, 0x80, 0x00,
0x0d, 0xf2, 0x06, 0xc4, 0x00,
0x1f, 0xa0, 0x95, 0xc8, 0x10,
0x18, 0xe8, 0x89, 0x42, 0x44,
0x6c, 0x40, 0x02, 0x50, 0x7a,
0x6c, 0x40, 0x01, 0x5a, 0x49,
0x6c, 0x40, 0x01, 0x8a, 0x49,
0x42, 0x1c, 0x38, 0x40, 0x7a,
0x68, 0x00, 0x00, 0x88, 0x20,
0x68, 0x00, 0x00, 0x91, 0x21,
0x66, 0x00, 0x41, 0x2b, 0xc0,
0x6e, 0x00, 0x01, 0xbe, 0x25,
0x32, 0x06, 0x8b, 0xc1, 0x61,
0x68, 0x20, 0x01, 0x00, 0x21,
0x68, 0x20, 0x00, 0xad, 0x20,
0xa0, 0xc2, 0x28, 0x80, 0xe2,
0x66, 0x00, 0x41, 0x30, 0xc0,
0x40, 0x00, 0x00, 0x80, 0xa2,
0x68, 0x20, 0x00, 0xc5, 0x20,
0x68, 0x20, 0x01, 0x00, 0x21,
0x66, 0x00, 0x41, 0x30, 0xc0,
0x6c, 0x40, 0x02, 0x38, 0x09,
0x6c, 0x40, 0x02, 0x50, 0x49,
0x40, 0x00, 0x03, 0xc1, 0x87,
0x68, 0x20, 0x00, 0xad, 0x20,
0x68, 0x20, 0x01, 0x01, 0x21,
0x68, 0x20, 0x00, 0xfe, 0x22,
0x66, 0x00, 0x41, 0x30, 0xc0,
0x68, 0x20, 0x00, 0xfe, 0x22,
0x68, 0x20, 0x00, 0xc5, 0x20,
0x66, 0x00, 0x41, 0x30, 0xc8,
0x40, 0x00, 0x02, 0x10, 0x61,
0x6c, 0x40, 0x02, 0x50, 0x09,
0x32, 0x02, 0x8b, 0xc0, 0x40,
0x2a, 0x7e, 0xd6, 0xc4, 0x00,
0x25, 0x04, 0x90, 0x00, 0x00,
0x6c, 0x40, 0x02, 0x0a, 0x09,
0x6c, 0x40, 0x02, 0x56, 0x08,
0x30, 0x12, 0x8b, 0xc4, 0xe0,
0x6e, 0x00, 0x01, 0xbe, 0x25,
0x32, 0x06, 0x8b, 0xc4, 0xa0,
0x6c, 0x00, 0x01, 0x14, 0x09,
0x32, 0x02, 0x8b, 0xc0, 0x6b,
0x38, 0x10, 0x46, 0xc0, 0x00,
0x14, 0xe0, 0x22, 0x41, 0x14,
0x6c, 0x00, 0x01, 0x4e, 0x48,
0x32, 0x02, 0x8b, 0xc0, 0x8d,
0x38, 0x10, 0xd6, 0xc0, 0x00,
0x14, 0xe0, 0x82, 0x41, 0x65,
0x6c, 0x00, 0x01, 0x4e, 0x49,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x00, 0x01, 0x26, 0x09,
0x32, 0x02, 0x8b, 0xc0, 0x63,
0x6c, 0x00, 0x01, 0x4e, 0x08,
0x38, 0x12, 0x22, 0x40, 0xa4,
0x6c, 0x00, 0x01, 0x4e, 0x48,
0x32, 0x02, 0x8b, 0xc0, 0x85,
0x6c, 0x00, 0x01, 0x4e, 0x09,
0x38, 0x12, 0xc2, 0x41, 0x2d,
0x6c, 0x00, 0x01, 0x4e, 0x49,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x00, 0x01, 0x4e, 0x09,
0x2a, 0x8e, 0xc3, 0x20, 0xe0,
0xbc, 0x03, 0x0b, 0xc0, 0x6f,
0x6c, 0x40, 0x01, 0x5a, 0x7a,
0x6c, 0x40, 0x01, 0xfa, 0x08,
0x6c, 0x40, 0x01, 0x5a, 0x48,
0x38, 0x18, 0x42, 0x89, 0x2d,
0x30, 0x12, 0x86, 0xc0, 0x00,
0x10, 0x80, 0x2b, 0xc0, 0x58,
0x6c, 0x00, 0x01, 0x52, 0x52,
0xbc, 0x08, 0xf6, 0xc4, 0x00,
0x18, 0xa7, 0xa0, 0x00, 0x00,
0x6c, 0x40, 0x01, 0xfa, 0x09,
0x6c, 0x40, 0x01, 0x8a, 0x49,
0x00, 0x00, 0x00, 0x00, 0x00,
0x6c, 0x00, 0x01, 0x1a, 0x09,
0x6c, 0x00, 0x01, 0x56, 0x49,
0x6c, 0x00, 0x02, 0x8e, 0x7a,
0x68, 0x04, 0x00, 0x83, 0x20,
0x88, 0x03, 0x6b, 0xa1, 0x48,
0x6c, 0x00, 0x01, 0x4a, 0x60,
0x40, 0x00, 0x02, 0x80, 0x20,
0xab, 0xfc, 0x08, 0x80, 0x64,
0xa2, 0x28, 0x48, 0x80, 0xe1,
0xa0, 0x90, 0x18, 0x81, 0x64,
0x88, 0x1e, 0x28, 0x82, 0x65,
0x88, 0x2e, 0x08, 0x83, 0x76,
0x66, 0x00, 0x40, 0xb8, 0x68,
0x55, 0x01, 0x2a, 0x08, 0x00,
0x5c, 0x86, 0x00, 0x80, 0x20,
0x88, 0x2a, 0x4a, 0x00, 0x82,
0xa2, 0x0e, 0x58, 0x2a, 0x48,
0x88, 0x06, 0x50, 0x00, 0x00,
0x88, 0x0a, 0x08, 0x81, 0x24,
0x40, 0x00, 0x00, 0x80, 0xe2,
0x66, 0x00, 0x40, 0xb9, 0x48,
0x55, 0x01, 0x2a, 0x26, 0x04,
0x5c, 0x82, 0x00, 0x82, 0x24,
0x88, 0x52, 0x09, 0x60, 0x25,
0x50, 0x0b, 0x08, 0x40, 0x09,
0x98, 0x04, 0x84, 0x40, 0x88,
0x08, 0x02, 0x49, 0x80, 0x49,
0x82, 0x04, 0x98, 0x80, 0x64,
0x68, 0x20, 0x00, 0xd0, 0x24,
0x40, 0x00, 0x00, 0x81, 0xa0,
0x66, 0x00, 0x40, 0xb8, 0x60,
0x5c, 0x83, 0x00, 0x80, 0x24,
0x5c, 0x86, 0x08, 0x80, 0xa1,
0x82, 0x24, 0x86, 0x82, 0x00,
0x12, 0xd2, 0x08, 0x20, 0x8a,
0x57, 0x0d, 0x08, 0x85, 0xa5,
0x98, 0x04, 0xb9, 0x68, 0x38,
0x6c, 0x40, 0x01, 0xae, 0x09,
0x5d, 0x0a, 0x28, 0x84, 0xa6,
0x51, 0x85, 0x68, 0x80, 0x50,
0x5b, 0x4e, 0x29, 0x82, 0x69,
0x9c, 0x08, 0x08, 0x40, 0x02,
0x58, 0x05, 0x40, 0x84, 0x20,
0x6c, 0x40, 0x01, 0xfa, 0x08,
0x6e, 0x00, 0x01, 0x48, 0x29,
0xa0, 0x8a, 0x24, 0x20, 0x25,
0x20, 0x86, 0x58, 0x22, 0x09,
0x38, 0x12, 0x82, 0x58, 0x08,
0xbc, 0x9b, 0x09, 0x70, 0x2f,
0x59, 0x03, 0xc0, 0x82, 0xa3,
0xbc, 0x1e, 0x98, 0x40, 0x7a,
0x00, 0x00, 0x08, 0x58, 0x8b,
0x88, 0x1a, 0x30, 0x00, 0x00,
0x85, 0x88, 0x23, 0x01, 0x90,
0xbc, 0x09, 0x33, 0x01, 0xf0,
0xbc, 0x05, 0x48, 0x58, 0xca,
0x42, 0x06, 0x79, 0x8e, 0x82,
0x5c, 0x09, 0x39, 0x70, 0x62,
0xbc, 0x09, 0xf3, 0x81, 0x27,
0x30, 0x1f, 0x0b, 0xc0, 0x5a,
0x98, 0xe8, 0x24, 0x20, 0x1f,
0x97, 0x06, 0x25, 0xc0, 0x93,
0x85, 0x8c, 0xa3, 0x81, 0x27,
0x25, 0x9c, 0x8b, 0xc0, 0x50,
0x6c, 0x40, 0x02, 0x36, 0x7a,
0xbc, 0x02, 0x73, 0x81, 0x27,
0x88, 0x1a, 0x38, 0x49, 0x80,
0x6c, 0x40, 0x02, 0x46, 0x02,
0x30, 0x08, 0x0b, 0xc3, 0x30,
0x68, 0x20, 0x01, 0x21, 0x27,
0x5c, 0x81, 0x08, 0x4a, 0x80,
0x5c, 0x82, 0x10, 0x38, 0x83,
0x59, 0x00, 0xc2, 0x10, 0x06,
0x57, 0x06, 0x18, 0x78, 0x00,
0x81, 0x35, 0x30, 0x00, 0x00,
0x85, 0x00, 0x35, 0x70, 0x0d,
0x87, 0x90, 0x08, 0x50, 0x53,
0xbc, 0x06, 0xc8, 0x4a, 0x83,
0x30, 0x01, 0x8b, 0xc0, 0x82,
0x84, 0x9d, 0x28, 0x69, 0x50,
0xbc, 0x05, 0x73, 0x00, 0x18,
0xbc, 0x03, 0x48, 0x49, 0xd2,
0x86, 0x95, 0x00, 0x00, 0x00,
0x52, 0xce, 0x40, 0x50, 0x01,
0x6c, 0x40, 0x02, 0x4e, 0x02,
0x57, 0x02, 0x88, 0x32, 0x8b,
0x68, 0x20, 0x01, 0x1b, 0x25,
0x57, 0x0e, 0x4b, 0xc0, 0xa8,
0x87, 0x04, 0x10, 0x00, 0x00,
0x86, 0x90, 0xb6, 0xc4, 0x00,
0x23, 0x60, 0x15, 0x40, 0xe4,
0x88, 0x52, 0x56, 0xc4, 0x00,
0x23, 0x64, 0x1b, 0xc0, 0x57,
0x00, 0x00, 0x04, 0x20, 0x13,
0x88, 0x52, 0x58, 0x85, 0x25,
0x00, 0x00, 0x08, 0x68, 0x01,
0x30, 0x10, 0x8b, 0xc0, 0xe3,
0x6c, 0x40, 0x02, 0x30, 0x0b,
0x28, 0x1c, 0xf3, 0x09, 0x38,
0xbc, 0x05, 0xc3, 0x81, 0x7a,
0x40, 0x00, 0x03, 0xc0, 0x4f,
0x5c, 0x00, 0x08, 0x68, 0x4b,
0x5c, 0x00, 0x08, 0x68, 0x48,
0xbc, 0x04, 0xf8, 0x80, 0x08,
0x5c, 0x0b, 0xd0, 0x80, 0x08,
0x98, 0xe8, 0x12, 0x58, 0xa0,
0xbc, 0x02, 0x83, 0x81, 0x67,
0xbc, 0x02, 0x72, 0x59, 0xe0,
0xbc, 0x13, 0x12, 0x58, 0xa0,
0xbc, 0x02, 0x0b, 0xc1, 0xef,
0x38, 0x17, 0x72, 0x59, 0xe0,
0xbc, 0x1b, 0x93, 0x81, 0x77,
0x25, 0x9e, 0x0b, 0xc0, 0x39,
0x88, 0x5a, 0x53, 0x20, 0x28,
0xbc, 0x05, 0x43, 0x81, 0x77,
0x25, 0x9e, 0x0b, 0xc1, 0x20,
0x32, 0x02, 0x8b, 0xc1, 0x03,
0x96, 0x87, 0x1b, 0xc0, 0xe7,
0x38, 0x17, 0x12, 0x58, 0x60,
0xbc, 0x02, 0x13, 0x20, 0x28,
0xbc, 0x05, 0x23, 0x81, 0x71,
0x25, 0x86, 0x0b, 0xc0, 0x60,
0x32, 0x02, 0x8b, 0xc0, 0x45,
0x52, 0x0f, 0x08, 0x85, 0xa5,
0x00, 0x00, 0x09, 0x68, 0x71,
0xbc, 0x35, 0xf9, 0x8e, 0x81,
0x32, 0x03, 0x8b, 0xc0, 0x4c,
0x88, 0x1a, 0x35, 0x70, 0x58,
0xbc, 0x03, 0xf8, 0x58, 0xc1,
0x28, 0x19, 0x18, 0x58, 0xc1,
0x68, 0x20, 0x01, 0x26, 0x22,
0x5c, 0x88, 0x08, 0x40, 0x01,
0x55, 0x02, 0x78, 0x12, 0x81,
0x58, 0x03, 0xc0, 0x40, 0x4b,
0x42, 0x02, 0x6b, 0x00, 0x0f,
0x5c, 0x81, 0x09, 0x70, 0x67,
0x40, 0x00, 0x00, 0x40, 0x51,
0x5c, 0x87, 0x13, 0x01, 0x79,
0x81, 0x08, 0xb8, 0x10, 0x82,
0x82, 0x8c, 0xb8, 0x68, 0x52,
0x00, 0x00, 0x08, 0x80, 0x02,
0x52, 0xc2, 0x80, 0x13, 0x0b,
0x88, 0x52, 0x18, 0x50, 0x00,
0x42, 0x07, 0x40, 0x68, 0xcb,
0x5c, 0x00, 0x10, 0x48, 0x50,
0x24, 0x05, 0x75, 0x90, 0x14,
0x08, 0x5a, 0x55, 0xd4, 0xe3,
0xbc, 0x05, 0xc5, 0xc0, 0xb8,
0x96, 0x87, 0x75, 0x24, 0x3c,
0xbc, 0x03, 0xf9, 0x68, 0x71,
0x24, 0x07, 0x99, 0x68, 0x71,
0x5c, 0x00, 0x48, 0x51, 0x48,
0x00, 0x00, 0x08, 0x58, 0x8b,
0x6c, 0x40, 0x02, 0x50, 0x00,
0x82, 0x24, 0xb8, 0x80, 0x64,
0x66, 0x00, 0x41, 0x1a, 0x48,
0x40, 0x00, 0x00, 0x40, 0x02,
0x5c, 0x81, 0x00, 0x80, 0x24,
0x88, 0x33, 0x68, 0x20, 0x48,
0x00, 0x00, 0x08, 0x60, 0x09,
0x57, 0x09, 0x4b, 0xa1, 0x48,
0x86, 0x2c, 0x1a, 0x80, 0x40,
0x55, 0x01, 0x2a, 0xbf, 0xd0,
0xa2, 0x16, 0x4a, 0x08, 0x81,
0x88, 0x06, 0x4a, 0x20, 0x64,
0x88, 0x0e, 0x1a, 0x08, 0x41,
0x88, 0x16, 0x48, 0x81, 0xc9,
0x88, 0x26, 0x08, 0x82, 0xf6,
0x66, 0x00, 0x40, 0xb8, 0x68,
0x40, 0x00, 0x02, 0x08, 0x00,
0x5c, 0x82, 0x00, 0x82, 0x20,
0x5c, 0x09, 0x68, 0x81, 0x24,
0xa0, 0x08, 0x18, 0x61, 0x8a,
0x88, 0x18, 0xb6, 0xe0, 0x00,
0x14, 0x82, 0x84, 0x47, 0x10,
0x00, 0xa4, 0x85, 0x2c, 0xa0,
0x04, 0x84, 0x20, 0x00, 0x00,
0x88, 0x0a, 0x0b, 0xc0, 0x78,
0xa0, 0x02, 0x08, 0x80, 0x20,
0x6c, 0x40, 0x02, 0x2e, 0x08,
0x84, 0x0c, 0x8b, 0xc4, 0x2f,
0x88, 0x0a, 0x43, 0x81, 0x24,
0x25, 0x90, 0x0b, 0xc3, 0x80,
0x66, 0x00, 0x41, 0x2a, 0x60,
0x88, 0x02, 0x00, 0x00, 0x00,
0x84, 0x08, 0x93, 0x01, 0x28,
0xbc, 0x2e, 0x46, 0xc4, 0x00,
0x1a, 0xe0, 0xa3, 0x20, 0x30,
0xbc, 0x1f, 0x86, 0xe0, 0x00,
0x1b, 0xe2, 0x73, 0x20, 0x78,
0xbc, 0x19, 0x06, 0xc4, 0x00,
0x22, 0xe0, 0x83, 0x01, 0x60,
0xbc, 0x13, 0x88, 0x80, 0xa4,
0x3a, 0x18, 0x75, 0x18, 0x5f,
0x86, 0x08, 0xa6, 0x82, 0x00,
0x0d, 0x82, 0x15, 0xb4, 0xc3,
0x18, 0x2e, 0x89, 0xc8, 0x01,
0x84, 0x80, 0xb3, 0x01, 0xf0,
0xbc, 0x05, 0x46, 0xc4, 0x00,
0x23, 0x40, 0xa2, 0x81, 0xa8,
0x98, 0x00, 0x92, 0xf1, 0x2d,
0x40, 0x00, 0x01, 0x82, 0x48,
0x42, 0x0b, 0x38, 0x40, 0xc8,
0xbc, 0x15, 0xf8, 0x80, 0xa4,
0x88, 0x0a, 0x46, 0xc4, 0x00,
0x20, 0xe0, 0x98, 0x60, 0x8a,
0x36, 0x98, 0x63, 0x01, 0xa8,
0xbc, 0x0d, 0x53, 0x20, 0x78,
0xbc, 0x0b, 0x08, 0x40, 0xc8,
0xbc, 0x09, 0x78, 0x40, 0xc8,
0xbc, 0x07, 0xf8, 0x80, 0xa4,
0x66, 0x00, 0x41, 0x2a, 0x60,
0x88, 0x02, 0x08, 0x80, 0xa4,
0x84, 0x0c, 0x80, 0x00, 0x00,
0x6e, 0x00, 0x01, 0xbe, 0x24,
0x32, 0x06, 0x0b, 0xc0, 0x91,
0x86, 0x08, 0x86, 0xc4, 0x00,
0x21, 0x00, 0x93, 0x69, 0x04,
0x30, 0x12, 0x8b, 0xc0, 0x35,
0x6c, 0x40, 0x02, 0x4e, 0x08,
0x84, 0x0c, 0x80, 0x00, 0x00,
0x88, 0x2b, 0x6b, 0xa1, 0x48,
0xa8, 0x03, 0x00, 0x00, 0x00,
0x6e, 0x00, 0x01, 0x48, 0x2c,
0x38, 0x12, 0x62, 0x59, 0xa0,
0xbc, 0x0a, 0x08, 0x63, 0x88,
0x6c, 0x40, 0x02, 0x46, 0x0a,
0x30, 0x1a, 0x0b, 0xc0, 0x50,
0x84, 0x10, 0x86, 0xc4, 0x00,
0x23, 0x60, 0xa0, 0x82, 0x00,
0x84, 0x14, 0x0b, 0xa1, 0x40,
};
