#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

struct DummyStruct;

typedef struct DummyStruct TransparentComplexWrappingStructTuple;

typedef uint32_t TransparentPrimitiveWrappingStructTuple;

typedef struct DummyStruct TransparentComplexWrappingStructure;

typedef uint32_t TransparentPrimitiveWrappingStructure;

typedef struct DummyStruct TransparentComplexWrapper_i32;

typedef uint32_t TransparentPrimitiveWrapper_i32;

void root(TransparentComplexWrappingStructTuple a,
          TransparentPrimitiveWrappingStructTuple b,
          TransparentComplexWrappingStructure c,
          TransparentPrimitiveWrappingStructure d,
          TransparentComplexWrapper_i32 e,
          TransparentPrimitiveWrapper_i32 f);
