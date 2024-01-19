#ifndef MY_STRING_LIB_H
#define MY_STRING_LIB_H

#ifdef MYSTRINGLIB_EXPORTS
#define MYSTRINGLIB_API __declspec(dllexport)
#else
#define MYSTRINGLIB_API __declspec(dllimport)
#endif

extern "C" MYSTRINGLIB_API const char* getMyString();

#endif // MY_STRING_LIB_H