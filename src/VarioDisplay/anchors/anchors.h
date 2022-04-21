#ifndef ANCHORS_H
#define ANCHORS_H

#include "varioversion.h"

//BOOT SCREEN

#if (VARIOVERSION == 154)
#include "_15P.h"
#endif //15P

#if ((VARIOVERSION == 291) || (VARIOVERSION == 293) || (VARIOVERSION == 294) || (VARIOVERSION == 391) || (VARIOVERSION == 393) || (VARIOVERSION == 394))
#include "_29P.h"
#endif //29P

#if ((VARIOVERSION == 290) || (VARIOVERSION == 292) || (VARIOVERSION == 390) || (VARIOVERSION == 392))
#include "_29L.h"
#endif //29L

#endif //ANCHORS_H