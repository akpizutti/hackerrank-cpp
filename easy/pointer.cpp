#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
    int new_a, new_b;
    new_a = *a + *b;
    new_b = *a - *b;
    if(new_b < 0){
        new_b = new_b * -1;
    } 
    *a = new_a;
    *b = new_b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}