
#include <intrin.h>
#define __restrict__ __restrict

#include <cstdint>

#define HI32(X) \
    _mm_srli_si128((X), 4)


#define EXTRACT64(X) \
    ((uint64_t)(uint32_t)_mm_cvtsi128_si32(X) | \
    ((uint64_t)(uint32_t)_mm_cvtsi128_si32(HI32(X)) << 32))