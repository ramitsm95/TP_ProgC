#include <stdio.h>

int main(void) {
    // i. char
    char c = 'A';
    signed char sc = -50;
    unsigned char uc = 200;

    // ii. short
    short s = -12000;
    unsigned short us = 50000;

    // iii. int
    int i = -100000;
    unsigned int ui = 3000000000U;

    // iv. long int
    long int li = -2000000000L;
    unsigned long int uli = 4000000000UL;

    // v. long long int
    long long int lli = -9000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL;

    // vi. float
    float f = 3.14159f;

    // vii. double
    double d = 2.718281828459;

    // viii. long double
    long double ld = 1.618033988749895L;

    // Affichage
    printf("char : %c (valeur numérique : %d)\n", c, c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short : %hd\n", s);
    printf("unsigned short : %hu\n\n", us);

    printf("int : %d\n", i);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n\n", uli);

    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}