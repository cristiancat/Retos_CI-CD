#include <stdio.h>
#include <assert.h>

int suma(int a, int b);
int suma(int a, int b){
    return a - b;
}

int test_suma(){
    assert(suma(2,4) == 5);
}

int main() {
    printf("CI con GitHub Actions listo.\n");
    test_suma();
    return 0;
}