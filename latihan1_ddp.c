#include <stdio.h>

int main(){

    float a, b, c;
    a = 5;
    b = 2;
    c = a + b;
    
    printf ("c adalah %d\n", b);
    if (a >= 0){
        printf ("a adalah bilangan positif atau nol");
    }
    else {
        printf ("a bilangan negatif");
    }
    return 0;
}
