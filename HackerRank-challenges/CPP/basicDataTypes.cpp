#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a; 
    long b; 
    long long c; 
    char d; 
    float f; 
    double e; 
    scanf("%d %ld %lld %c %f %lf", &a, &b, &c, &d, &f, &e);
    printf("%d \n%ld \n%lld \n%c \n%f \n%lf", a, b, c, d, f, e);
    return 0;
}

