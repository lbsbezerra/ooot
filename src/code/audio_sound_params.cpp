#define INTERNAL_SRC_CODE_AUDIO_SOUND_PARAMS_C
#include "ultra64.h"
#include "global.h"
#include "z64audio.h"
#include "def/audio_sound_params.h"

SoundParams sEnemyBankParams[] = {
    { 0x18, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x38, 0x1 },    { 0x40, 0x1 },    { 0x30, 0x3 },
    { 0x38, 0x3 },    { 0x40, 0x3 },    { 0x30, 0x2 },    { 0x30, 0x3 },    { 0x30, 0x2 },    { 0x20, 0x81 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x38, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x38, 0x3 },
    { 0x40, 0x3 },    { 0x20, 0x2000 }, { 0x28, 0x3 },    { 0x28, 0x3 },    { 0x20, 0x2 },    { 0x28, 0x3 },
    { 0x38, 0x3 },    { 0x30, 0x3 },    { 0x40, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x40, 0x1 },    { 0x18, 0x0 },    { 0x14, 0x0 },
    { 0x14, 0x0 },    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x44, 0x3 },    { 0x18, 0x0 },    { 0x30, 0x2 },
    { 0x32, 0x2 },    { 0x38, 0x1 },    { 0x20, 0x0 },    { 0x40, 0x1 },    { 0x18, 0x0 },    { 0x28, 0x0 },
    { 0x18, 0x0 },    { 0x30, 0x0 },    { 0x38, 0x1 },    { 0x40, 0x1 },    { 0x14, 0x0 },    { 0x18, 0x80 },
    { 0x38, 0x2 },    { 0x30, 0x0 },    { 0x28, 0x1 },    { 0x30, 0x0 },    { 0x38, 0x1 },    { 0x40, 0x1 },
    { 0x30, 0x0 },    { 0x18, 0x0 },    { 0x20, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x20, 0x1 },
    { 0x40, 0x1 },    { 0x38, 0x1 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x40, 0x1 },    { 0x38, 0x1 },
    { 0x20, 0x0 },    { 0x30, 0x0 },    { 0x40, 0x1 },    { 0x40, 0x1 },    { 0x30, 0x3 },    { 0x30, 0x2000 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x18, 0x3 },    { 0x30, 0x3 },    { 0x28, 0x0 },    { 0x30, 0x0 },
    { 0x18, 0x0 },    { 0x30, 0x0 },    { 0x28, 0x0 },    { 0x30, 0x0 },    { 0x38, 0x1 },    { 0x40, 0x1 },
    { 0x28, 0x0 },    { 0x30, 0x0 },    { 0x40, 0x1 },    { 0x14, 0x0 },    { 0x30, 0x0 },    { 0x20, 0x0 },
    { 0x40, 0x1 },    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x20, 0x0 },    { 0x38, 0x1 },
    { 0x20, 0x0 },    { 0x38, 0x1 },    { 0x40, 0x1 },    { 0x14, 0x0 },    { 0x30, 0x3 },    { 0x20, 0x1 },
    { 0x20, 0x1 },    { 0x30, 0x2 },    { 0x30, 0x2 },    { 0x38, 0x2 },    { 0x40, 0x2 },    { 0x40, 0x2 },
    { 0x14, 0x81 },   { 0x34, 0x0 },    { 0x40, 0x0 },    { 0x20, 0x0 },    { 0x28, 0x0 },    { 0x28, 0x0 },
    { 0x30, 0x0 },    { 0x14, 0x0 },    { 0x38, 0x1 },    { 0x40, 0x1 },    { 0x20, 0x0 },    { 0x30, 0x3 },
    { 0x30, 0x0 },    { 0x40, 0x1 },    { 0x40, 0x3 },    { 0x40, 0x1 },    { 0x28, 0x1 },    { 0x30, 0x3 },
    { 0x20, 0x0 },    { 0x38, 0x1 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x20, 0x0 },    { 0x20, 0x0 },
    { 0x38, 0x2000 }, { 0x30, 0x3 },    { 0x30, 0x2000 }, { 0x30, 0x0 },    { 0x14, 0x0 },    { 0x38, 0x1 },
    { 0x40, 0x1 },    { 0x14, 0x0 },    { 0x20, 0x0 },    { 0x20, 0x0 },    { 0x30, 0x0 },    { 0x40, 0x1 },
    { 0x40, 0x1 },    { 0x30, 0x0 },    { 0x34, 0x1 },    { 0x40, 0x1 },    { 0x30, 0x3 },    { 0x30, 0x2 },
    { 0x30, 0x2000 }, { 0x20, 0x43 },   { 0x20, 0x2 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },
    { 0x38, 0x3 },    { 0x30, 0x2000 }, { 0x30, 0x3 },    { 0x30, 0x2 },    { 0x30, 0x2000 }, { 0x30, 0x3 },
    { 0x38, 0x3 },    { 0x40, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x403 },  { 0x38, 0x1 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x20, 0x0 },    { 0x34, 0x0 },    { 0x18, 0x1 },    { 0x20, 0x2000 },
    { 0x30, 0x2000 }, { 0x14, 0x3 },    { 0x28, 0x3 },    { 0x28, 0x3 },    { 0x40, 0x3 },    { 0x30, 0x3 },
    { 0x20, 0x0 },    { 0x14, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x28, 0x0 },    { 0x28, 0x0 },
    { 0x40, 0x1 },    { 0x40, 0x1 },    { 0x20, 0x0 },    { 0x20, 0x0 },    { 0x14, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x40, 0x1 },    { 0x30, 0x0 },    { 0x30, 0x3 },    { 0x30, 0x3 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x38, 0x3 },    { 0x38, 0x3 },    { 0x30, 0x3 },
    { 0x30, 0x3 },    { 0x40, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x38, 0x1 },    { 0x28, 0x3 },
    { 0x28, 0x83 },   { 0x28, 0x82 },   { 0x30, 0x3 },    { 0x30, 0x2000 }, { 0x30, 0x2000 }, { 0x38, 0x1 },
    { 0x20, 0x0 },    { 0x34, 0x0 },    { 0x38, 0x1 },    { 0x40, 0x1 },    { 0x34, 0x2000 }, { 0x20, 0x0 },
    { 0x38, 0x0 },    { 0x40, 0x1 },    { 0x30, 0x3 },    { 0x30, 0x2 },    { 0x30, 0x2 },    { 0x38, 0x3 },
    { 0x30, 0x3 },    { 0x32, 0x3 },    { 0x34, 0x3 },    { 0x34, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },
    { 0x30, 0x3 },    { 0x28, 0x82 },   { 0x40, 0x3 },    { 0x40, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },
    { 0x20, 0x0 },    { 0x20, 0x0 },    { 0x30, 0x0 },    { 0x20, 0x80 },   { 0x30, 0x3 },    { 0x18, 0x3 },
    { 0x34, 0x3 },    { 0x30, 0x3 },    { 0x38, 0x3 },    { 0x18, 0x3 },    { 0x30, 0x2000 }, { 0x38, 0x3 },
    { 0x30, 0x3 },    { 0x40, 0x3 },    { 0x40, 0x2000 }, { 0x38, 0x3 },    { 0x30, 0x2000 }, { 0x30, 0x3 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x2 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x38, 0x2000 }, { 0x38, 0x3 },    { 0x38, 0x3 },    { 0x38, 0x3 },
    { 0x38, 0x2000 }, { 0x40, 0x2000 }, { 0x18, 0x0 },    { 0x30, 0x3 },    { 0x30, 0x2 },    { 0x20, 0x2 },
    { 0x24, 0x3 },    { 0x28, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },    { 0x30, 0x3 },    { 0x18, 0x1 },    { 0x34, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },
    { 0x34, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x1 },    { 0x14, 0x0 },
    { 0x40, 0x1 },    { 0x30, 0x1 },    { 0x30, 0x1 },    { 0x30, 0x1 },    { 0x38, 0x3 },    { 0x30, 0x0 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x38, 0x3 },    { 0x38, 0x3 },    { 0x30, 0x2 },    { 0x38, 0x3 },
    { 0x38, 0x3 },    { 0x30, 0x83 },   { 0x38, 0x3 },    { 0x30, 0x3 },    { 0x34, 0x3 },    { 0x20, 0x2 },
    { 0x34, 0x3 },    { 0x30, 0x3 },    { 0x38, 0x3 },    { 0x20, 0x3 },    { 0x14, 0x0 },    { 0x20, 0x1 },
    { 0x30, 0x3 },    { 0x40, 0x1 },    { 0x38, 0x1 },    { 0x40, 0x1 },    { 0x20, 0x0 },    { 0x20, 0x0 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x28, 0x2 },    { 0x30, 0x0 },
    { 0x38, 0x1 },    { 0x28, 0x2 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x38, 0x3 },    { 0x40, 0x3 },
    { 0x14, 0x0 },    { 0x30, 0x0 },    { 0x38, 0x1 },    { 0x30, 0x1 },    { 0x40, 0x1 },    { 0x28, 0x0 },
    { 0x28, 0x0 },    { 0x30, 0x2 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },
    { 0x30, 0x2000 }, { 0x38, 0x3 },    { 0x38, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x34, 0x3 },
    { 0x38, 0x3 },    { 0x40, 0x3 },    { 0x10, 0x0 },    { 0x34, 0x0 },    { 0x18, 0x0 },    { 0x30, 0x0 },
    { 0x14, 0x0 },    { 0x34, 0x0 },    { 0x28, 0x1 },    { 0x38, 0x1 },    { 0x40, 0x1 },    { 0x30, 0x0 },
    { 0x38, 0x3 },    { 0x20, 0x0 },    { 0x20, 0x2 },    { 0x30, 0x2 },    { 0x30, 0x3 },    { 0x30, 0x3 },
    { 0x38, 0x3 },    { 0x30, 0x3 },    { 0x20, 0x2000 }, { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x40, 0x1 },
    { 0x30, 0x0 },    { 0x20, 0x0 },    { 0x38, 0x1 },    { 0x40, 0x1 },    { 0x30, 0x0 },    { 0x30, 0x2000 },
    { 0x30, 0x3 },    { 0x30, 0x2 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x18, 0x0 },    { 0x28, 0x0 },
    { 0x34, 0x0 },    { 0x34, 0x0 },    { 0x34, 0x0 },    { 0x38, 0x1 },    { 0x40, 0x1 },    { 0x30, 0x3 },
    { 0x30, 0x0 },    { 0x38, 0x1 },    { 0x40, 0x1 },    { 0x38, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x40, 0x3 },    { 0x40, 0x2 },    { 0x18, 0x0 },    { 0x44, 0x3 },    { 0x34, 0x0 },    { 0x18, 0x0 },
    { 0x30, 0x0 },    { 0x38, 0x1 },    { 0x40, 0x1 },    { 0x18, 0x3 },    { 0x30, 0x3 },    { 0x38, 0x3 },
    { 0x38, 0x3 },    { 0x40, 0x3 },    { 0x30, 0x3 },    { 0x36, 0x3 },    { 0x34, 0x3 },    { 0x28, 0x82 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },
    { 0x30, 0x0 },    { 0x30, 0x2000 }, { 0x30, 0x2000 }, { 0x30, 0x2000 }, { 0x30, 0x0 },    { 0x30, 0x2000 },
    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x28, 0x3 },    { 0x30, 0x3 },    { 0x40, 0x3 },    { 0x30, 0x3 },
    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x20, 0x0 },    { 0x20, 0x3 },
    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x38, 0x3 },    { 0x38, 0x3 },
    { 0x20, 0x3 },    { 0x30, 0x3 },    { 0x44, 0x3 },    { 0x30, 0x83 },   { 0x30, 0x3 },    { 0x30, 0x3 },
    { 0x34, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x20, 0x2 },    { 0x30, 0x3 },    { 0x20, 0x3 },
    { 0x30, 0x0 },    { 0x30, 0x2 },    { 0x40, 0x2 },    { 0x40, 0x3 },    { 0x34, 0x2 },    { 0x30, 0x3 },
    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x1 },    { 0x34, 0x3 },    { 0x24, 0x3 },    { 0x34, 0x1 },
    { 0x20, 0x0 },    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x8, 0x1 },     { 0x30, 0x1 },    { 0x30, 0x3 },
    { 0x38, 0x3 },    { 0x20, 0x2000 }, { 0x34, 0x3 },    { 0x34, 0x2000 }, { 0x8, 0x0 },     { 0x40, 0x3 },
    { 0x34, 0x3 },
};

SoundParams sPlayerBankParams[] = {
    { 0x20, 0x480 }, { 0x20, 0x480 }, { 0x20, 0x480 }, { 0x20, 0x480 },  { 0x20, 0x440 }, { 0x20, 0x440 },
    { 0x20, 0x440 }, { 0x20, 0x440 }, { 0x20, 0x480 }, { 0x20, 0x440 },  { 0x20, 0x480 }, { 0x20, 0x400 },
    { 0x20, 0x400 }, { 0x20, 0x400 }, { 0x20, 0x400 }, { 0x20, 0x400 },  { 0x30, 0x400 }, { 0x30, 0x400 },
    { 0x30, 0x400 }, { 0x30, 0x400 }, { 0x30, 0x400 }, { 0x30, 0x400 },  { 0x30, 0x400 }, { 0x30, 0x400 },
    { 0x30, 0x400 }, { 0x30, 0x400 }, { 0x30, 0x400 }, { 0x30, 0x400 },  { 0x30, 0x400 }, { 0x30, 0x400 },
    { 0x30, 0x400 }, { 0x30, 0x400 }, { 0x40, 0x440 }, { 0x40, 0x440 },  { 0x40, 0x440 }, { 0x40, 0x440 },
    { 0x40, 0x440 }, { 0x40, 0x440 }, { 0x40, 0x440 }, { 0x40, 0x440 },  { 0x40, 0x440 }, { 0x40, 0x440 },
    { 0x40, 0x440 }, { 0x40, 0x440 }, { 0x40, 0x440 }, { 0x40, 0x440 },  { 0x40, 0x440 }, { 0x40, 0x440 },
    { 0x30, 0x80 },  { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x400 }, { 0x30, 0x400 },
    { 0x30, 0x400 }, { 0x30, 0x40 },  { 0x30, 0x40 },  { 0x30, 0x80 },   { 0x30, 0x400 }, { 0x30, 0x400 },
    { 0x40, 0x400 }, { 0x30, 0x400 }, { 0x30, 0x402 }, { 0x30, 0x400 },  { 0x30, 0x40 },  { 0x30, 0x40 },
    { 0x30, 0x40 },  { 0x30, 0x40 },  { 0x30, 0x40 },  { 0x30, 0x40 },   { 0x30, 0x40 },  { 0x30, 0x40 },
    { 0x30, 0x40 },  { 0x30, 0x40 },  { 0x30, 0x40 },  { 0x30, 0x40 },   { 0x30, 0x0 },   { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x80, 0x0 },   { 0x80, 0x0 },    { 0x80, 0x0 },   { 0x80, 0x0 },
    { 0x80, 0x0 },   { 0x80, 0x0 },   { 0x80, 0x0 },   { 0x80, 0x0 },    { 0x80, 0x0 },   { 0x80, 0x0 },
    { 0x80, 0x0 },   { 0x80, 0x0 },   { 0x80, 0x0 },   { 0x80, 0x0 },    { 0x80, 0x0 },   { 0x80, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x0 },
    { 0x30, 0x400 }, { 0x30, 0x400 }, { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x0 },
    { 0x30, 0x3 },   { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x80 },
    { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x3 },   { 0x30, 0x1 },    { 0x30, 0x0 },   { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x2000 }, { 0x30, 0xC00 }, { 0x30, 0x400 },
    { 0x30, 0x400 }, { 0x30, 0x400 }, { 0x20, 0x80 },  { 0x20, 0x80 },   { 0x20, 0x80 },  { 0x20, 0x80 },
    { 0x20, 0x40 },  { 0x20, 0x40 },  { 0x20, 0x40 },  { 0x20, 0x40 },   { 0x20, 0x80 },  { 0x20, 0x80 },
    { 0x20, 0x80 },  { 0x20, 0x0 },   { 0x20, 0x0 },   { 0x20, 0x0 },    { 0x20, 0x0 },   { 0x20, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x40, 0x0 },   { 0x40, 0x0 },
    { 0x40, 0x0 },   { 0x40, 0x0 },   { 0x40, 0x0 },   { 0x40, 0x0 },    { 0x40, 0x0 },   { 0x40, 0x0 },
    { 0x40, 0x0 },   { 0x40, 0x0 },   { 0x40, 0x0 },   { 0x40, 0x0 },    { 0x40, 0x0 },   { 0x40, 0x0 },
    { 0x40, 0x0 },   { 0x40, 0x0 },   { 0x30, 0x440 }, { 0x30, 0x440 },  { 0x30, 0x440 }, { 0x30, 0x440 },
    { 0x30, 0x440 }, { 0x30, 0x440 }, { 0x30, 0x440 }, { 0x30, 0x440 },  { 0x30, 0x440 }, { 0x30, 0x440 },
    { 0x30, 0x440 }, { 0x30, 0x440 }, { 0x30, 0x440 }, { 0x30, 0x440 },  { 0x30, 0x440 }, { 0x30, 0x440 },
    { 0x30, 0xC00 }, { 0x30, 0x80 },  { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x60, 0x2 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x800 },
    { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },
};

SoundParams sItemBankParams[] = {
    { 0x30, 0x8040 }, { 0x30, 0x40 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x440 },  { 0x30, 0x440 },
    { 0x60, 0x83 },   { 0x30, 0x440 },  { 0x80, 0x43 },   { 0x30, 0x0 },   { 0x30, 0x40 },   { 0x30, 0x400 },
    { 0x30, 0x401 },  { 0x50, 0x0 },    { 0x90, 0x2 },    { 0x50, 0x2 },   { 0x30, 0x400 },  { 0x40, 0x2 },
    { 0x30, 0x40 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x34, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x40, 0x0 },    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x80 },   { 0x30, 0x40 },   { 0x30, 0x400 },  { 0x20, 0x400 }, { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x400 }, { 0x30, 0x400 },  { 0x60, 0x43 },
    { 0x30, 0x1 },    { 0x30, 0x401 },  { 0x30, 0x0 },    { 0x30, 0x0 },   { 0xA0, 0x2 },    { 0xA0, 0x2 },
    { 0x30, 0x400 },  { 0x30, 0x0 },    { 0x60, 0x0 },    { 0x60, 0x0 },   { 0x60, 0x0 },    { 0x30, 0x400 },
    { 0x30, 0x0 },    { 0x60, 0x81 },   { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x60, 0x8003 }, { 0x60, 0x8003 },
    { 0x60, 0x8003 }, { 0x30, 0x4000 }, { 0x30, 0x4000 }, { 0x30, 0x40 },  { 0x80, 0x3 },    { 0x80, 0x3 },
    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x40 },   { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },   { 0x80, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },    { 0x30, 0x0 },
};

SoundParams sEnvBankParams[] = {
    { 0x70, 0x640 }, { 0x80, 0x40 },   { 0x30, 0x0 },    { 0x30, 0x40 },   { 0x30, 0x40 },   { 0x40, 0x40 },
    { 0x30, 0x480 }, { 0x38, 0x2 },    { 0x30, 0x40 },   { 0x30, 0x40 },   { 0x80, 0x2 },    { 0xA0, 0x3 },
    { 0x30, 0x3 },   { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x2 },    { 0x30, 0x40 },
    { 0x30, 0x40 },  { 0x30, 0x0 },    { 0x60, 0x0 },    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x82 },
    { 0x30, 0x0 },   { 0x40, 0x0 },    { 0x38, 0x0 },    { 0x28, 0x0 },    { 0x60, 0x0 },    { 0x70, 0x3 },
    { 0x30, 0x3 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0xA0, 0x2008 }, { 0x20, 0x2 },    { 0x30, 0x0 },
    { 0x30, 0x800 }, { 0x30, 0x8800 }, { 0x30, 0x8000 }, { 0x30, 0x2 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x400 },  { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x80 },
    { 0x60, 0x42 },  { 0x10, 0x0 },    { 0xA0, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x10 },   { 0x30, 0x3 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x2 },    { 0x30, 0x0 },    { 0xA0, 0x3 },
    { 0x30, 0x0 },   { 0x30, 0x400 },  { 0x30, 0x400 },  { 0x70, 0x13 },   { 0x60, 0x8000 }, { 0x30, 0x8000 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x2003 }, { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x2010 }, { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x1 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x40, 0x0 },    { 0x30, 0xC2 },   { 0x70, 0x2 },
    { 0x60, 0x2 },   { 0x30, 0x0 },    { 0x60, 0x1 },    { 0x30, 0x2 },    { 0x30, 0x0 },    { 0x90, 0x3 },
    { 0x90, 0x3 },   { 0x30, 0x0 },    { 0x30, 0x2 },    { 0x30, 0x3800 }, { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x3 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x803 },  { 0x30, 0x0 },    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x2 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x2 },    { 0x30, 0x2 },    { 0x30, 0x2 },    { 0x40, 0x0 },    { 0x1C, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x60, 0x200 },  { 0x30, 0x800 },  { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x3 },
    { 0x30, 0x3 },   { 0x30, 0x2000 }, { 0x30, 0x2000 }, { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x80 },  { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x800 }, { 0x30, 0x800 },  { 0x30, 0x2 },    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x20, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x8000 }, { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x2 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x3 },    { 0x60, 0x3 },
    { 0x30, 0x80 },  { 0x30, 0x2000 }, { 0x30, 0x0 },    { 0x30, 0x1 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x2 },   { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0xA0, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0xC0 },   { 0x30, 0x2 },
    { 0x30, 0x2 },   { 0x30, 0x0 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x0 },    { 0x30, 0x4083 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x80, 0x0 },   { 0x60, 0x0 },    { 0x90, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x60, 0xC3 },  { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x3 },    { 0x30, 0x3 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0xA0, 0x800 },  { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x2 },    { 0x30, 0x0 },    { 0x30, 0x3 },    { 0x20, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },   { 0x30, 0x0 },
};

SoundParams sSystemBankParams[] = {
    { 0xC0, 0x0 },  { 0xC0, 0x0 }, { 0xB0, 0x20 }, { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x50, 0x0 },
    { 0x30, 0x20 }, { 0x30, 0x0 }, { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x20, 0x0 }, { 0x30, 0x0 },
    { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x28, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 },
    { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 },  { 0x18, 0x0 }, { 0x2C, 0x0 }, { 0x2C, 0x0 }, { 0x20, 0x0 },
    { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 },
    { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x20, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 },
    { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x60, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 },
    { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 },
    { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 },
    { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 },  { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 }, { 0x30, 0x0 },
    { 0x30, 0x0 },  { 0x30, 0x0 },
};

SoundParams sOcarinaBankParams[] = {
    { 0x30, 0x0 }, { 0x30, 0x20 }, { 0x30, 0x642 }, { 0x30, 0x0 },
    { 0x30, 0x0 }, { 0x30, 0x0 },  { 0x30, 0x0 },   { 0x30, 0x0 },
};

SoundParams sVoiceBankParams[] = {
    { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x20, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },
    { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x442 },  { 0x30, 0x442 },  { 0x30, 0x402 },
    { 0x30, 0x402 },  { 0x50, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },
    { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },
    { 0x30, 0x482 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x80, 0x402 },
    { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x20, 0x402 },
    { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x442 },
    { 0x30, 0x442 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x50, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },
    { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },
    { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x481 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },
    { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x30, 0x402 },  { 0x60, 0x20 },   { 0x30, 0x20 },
    { 0x30, 0x20 },   { 0x60, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x0 },
    { 0x30, 0x0 },    { 0x30, 0x0 },    { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 },
    { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 },
    { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 },
    { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 },
    { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 },
    { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 },
    { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8043 }, { 0x30, 0x8043 }, { 0x30, 0x8043 },
    { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 }, { 0x30, 0x8041 },
    { 0x30, 0x8041 }, { 0x30, 0x8041 },
};

SoundParams* gSoundParams[7] = {
    sPlayerBankParams, sItemBankParams,    sEnvBankParams,   sEnemyBankParams,
    sSystemBankParams, sOcarinaBankParams, sVoiceBankParams,
};
