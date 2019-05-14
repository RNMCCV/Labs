#ifndef compnum
#define compnum

using namespace std;

struct complex{
    float c1=0;
    float c2=0;
};

float mod(complex *a);
void oper(char zn, complex *a, complex *b);
#endif // compnum
