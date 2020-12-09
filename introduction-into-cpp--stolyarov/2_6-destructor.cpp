#pragma comment(linker, "/SUBSYSTEM:CONSOLE")

#include <iostream>
#include <stdio.h>

class File
{
private:
    FILE* fd;
public:
    File() {}

    ~File() {
        if (fd != nullptr) {
            fclose(fd);
        }
    }
    
    bool OpenRO(const char *name) {
        fd = fopen(name, "r");
        return (fd != nullptr);
    }

    void PrintContent() {
        char buffer[100];
        if (fd != nullptr) {
            while (!feof(fd)) {
                if (fgets(buffer, 100, fd) == nullptr) break;
                fputs(buffer, stdout);
            }
        }
    }
};

int main() {
    File f;
    f = File();
    if (f.OpenRO("./README.md")) {
        std::cout << "Opened" << std::endl;
        f.PrintContent();
    }

    return 0;
}