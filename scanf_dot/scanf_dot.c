// This code is based on an example from reHex Ninja
// URL: https://rehex.ninja/posts/scanf-and-hateful-dot/
#include <stdio.h>

void sum() {
    double buffer[20];
    int n = 0;
    double s = 0;

    printf("How many numbers do you want to add?\n");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("Number[%d]: ", i);
        scanf("%lf", &buffer[i]);
        s += buffer[i];
    }
    printf("Your sum: %lf\n", s);
}

int main() {
    sum();
    return 0;
}
