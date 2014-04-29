#ifndef SDCARD_H
#define SDCARD_H

#include <stdint.h>

typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;

#define LOG2_BYTES_PER_SECTOR 9
#define BYTES_PER_SECTOR (1<<LOG2_BYTES_PER_SECTOR)

void sdInit(void);
void sdReadBlocks(u32 blockStart, u16 blockCount, u8 *buffer);

#endif
