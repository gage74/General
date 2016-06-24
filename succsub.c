#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define F(x) ((-1 + pow(x, 2) + 2*pow(x, 0.05))/3);

int main(void){
    
    double tol = 0.00001;
    double xguess = 0.1;
    double Err = 1;
    double xnew, xold;
    int i;
    i = 0;
    xold = xguess;
    
    while(Err > tol){
        xnew = F(xold);
        Err = fabs(xnew-xold);
        xold = xnew;
        i++;
    }
    printf("The error is %.8f\n", Err);
    printf("The solution is %.8f\n", xold);
    printf("iterated %i times to find solution!\n", i);
    return 0;
    
}