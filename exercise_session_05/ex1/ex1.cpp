#include <stdio.h>
#define N 1000

struct complex_vector {
    double *real;
    double *imag;
};

int linear_combination(complex_vector *x, complex_vector *y, complex_vector *z, double a) {
    for (int i = 0; i < N; ++i) {
        z->real[i] = x->real[i] + a * y->real[i];
        z->imag[i] = x->imag[i] + a * y->imag[i];
    }
    return 0;
}

int main (int argc, char *argv[]){
    double a = 24.4;
    struct complex_vector *x = new complex_vector;
    struct complex_vector *y = new complex_vector;
    x->real = new double[N];
    x->imag = new double[N];
    y->real = new double[N];
    y->imag = new double[N];
    
    struct complex_vector *z = new complex_vector;
    z->real = new double[N];
    z->imag = new double[N];
    
    x->real[0] = 4.3;
    x->imag[0] = 6.3;
    y->real[0] = 13.4;
    y->imag[0] = 1.2;
    
    linear_combination(x,y,z,a);
    printf("z[0] = %.15e + i %.15e\n",z->real[0],z->imag[0]);
    return 0;
}