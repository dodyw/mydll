#include "pch.h"

#define MYSTRINGLIB_EXPORTS
#include "my_string_lib.h"

// Function implementation
extern "C" MYSTRINGLIB_API const char* getMyString() {
    static const char myString[] = "Hello, World!";
    return myString;
}