#ifndef OAMMANAGER_H
#define OAMMANAGER_H
#include <gb/gb.h> 

typedef enum {
	OAM_VERTICAL_FLAG   = 0x20,
	OAM_HORIZONTAL_FLAG = 0x40
} OAMFLAGS;

struct OAMData {
	UINT8 y;
	UINT8 x;
	UINT8 idx;
	UINT8 flags;
};
extern UINT8* oams;
#define OAM(A) ((struct OAMData*)(oams + (A << 2)))

extern UINT8 last_sprite_loaded;

UINT8 LoadSprite(UINT8 n_tiles, unsigned char* data, UINT8 bank, UINT8 frame_size, unsigned char* palette_idx);
void DrawOAMSprite(UINT8 idx, UINT8 x, UINT8 y, UINT8 flags);

#endif