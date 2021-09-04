#include <stdio.h>

int main() {
    static int x = 10;
    int y = 10;
    x=x+1;
    y=y+1;
    printf("%d \n",x);
    printf("%d",y);
    return 0;
}
