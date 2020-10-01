#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int sum = 0;
    int jump = 2;
    int i = 1;
    int flag = 1;
    while(flag){
        int j;
        for(int j = 0; j < 4 && flag; j++){
            if(i >= 1001 * 1001) flag = 0;
            sum += i;
            i += jump;
        }
        jump += 2;
    }

    printf("%d\n", sum);

    return 0;
}
