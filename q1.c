#include <stdio.h>
#include <stdlib.h>

int three_five (int max){
    int i, sum;
    for(i = 0; i < max; i++) if (i % 3 == 0 || i % 5 == 0) sum += i;
    return sum;
}

int main(int argc, char const *argv[]) {
    printf("%d\n",three_five(1000) );
    return 0;
}
