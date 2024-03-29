// Debug printf: is a NOP if debug is disabled
#define DEBUG
#if defined(DEBUG)
#include <stdio.h>
#define DEBUG_PRINTF(fmt, args...)                                             \
  fprintf(stderr, "DEBUG: %s:%d:%s(): " fmt, __FILE__, __LINE__, __func__,     \
          ##args)
#define DEBUG_HEX(va, n)                                                       \
  for (size_t i = 0; i < n; i++) {                                             \
    printf("%02x ", ((unsigned char *)va)[i]);                                 \
  }                                                                            \
  { printf("\n"); }
#else
#define DEBUG_PRINTF(fmt, args...)
#define DEBUG_HEX(va, n)
#endif
