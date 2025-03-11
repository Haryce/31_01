#include <iostream>
using namespace std;

void Max(int* a, int* b, int* max) {
    if (*a > *b) {
        *max = *a; 
    } else {
        *max = *b; 
    }
}

void swap(int* a, int* b) {
    int temp = *a; 
    *a = *b;   
    *b = temp;
}

int main() {
    int x = 10, y = 5;
    int max;
    Max(&x, &y, &max);
    cout << "Максимум: " << max << endl;
    swap(&x, &y);
    cout << "После обмена: x = " << x << ", y = " << y << endl;
    return 0;
}