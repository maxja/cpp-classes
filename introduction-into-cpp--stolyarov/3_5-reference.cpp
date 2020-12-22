#include <iostream>

void c_min_max(float *arr, int len, float *min, float *max) {
    int i;
    *min = arr[0];
    *max = arr[0];
    for(i=1; i<len; i++) {
        if(*min>arr[i]) *min = arr[i];
        if(*max<arr[i]) *max = arr[i];
    }
}

void min_max(float *arr, int len, float &min, float &max) {
    int i;
    min = arr[0];
    max = arr[0];
    for(i=1; i<len; i++) {
        if(min>arr[i]) min = arr[i];
        if(max<arr[i]) max = arr[i];
    }
}

int main() {
    int j{0};
    int *p = &j; // Pointer
    int &r = j; // Reference

    j++;
    (*p)++;
    r++;

    std::cout << j << "\n";

    float a[10];
    int i;
    float min, max;
    for(i=1; i<10; i++) {
        a[i]=i;
    }
    c_min_max(a, 10, &min, &max);

    std::cout << min << "\n";
    std::cout << max << "\n";
    
    for(i=1; i<10; i++) {
        a[i]=i+10;
    }

    min_max(a, 10, min, max);
    std::cout << min << "\n";
    std::cout << max << "\n";

    return 0;
}