#pragma comment(linker, "/SUBSYSTEM:CONSOLE")

#include <cstdio>

void dump(const char* str) {
    printf("This is a string %s\n", str);
}

void dump(float f) {
    printf("This is a floating point number: %f\n", f);
}

int main(int argc, char const *argv[])
{
    dump("Hello");
    dump(1.001);
    return 0;
}
