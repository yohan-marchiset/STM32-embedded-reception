
// Exponential filter for the frequency 40,0 kHz

#ifndef _EXP400_H__
#define _EXP400_H__

#include "global.h"

const int32_t cos_40000[256]= {
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
};
const int32_t sin_40000[256]= {
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
0,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
0,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
3784,
-2897,
-1568,
4096,
-1568,
-2897,
3784,
-1,
-3785,
2896,
1567,
-4096,
1567,
2896,
-3785,
-1,
};

#endif
