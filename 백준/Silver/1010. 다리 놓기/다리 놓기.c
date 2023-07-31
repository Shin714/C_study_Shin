#pragma warning(disable:4996)
#include<stdio.h>

long long C(int N, int M) {
    long long a = 1;
    int x = N >= (M - N) ? N : M - N;

    int y = M - x;
    
    for (int i = M; i > x; i--) {
        a *= i;
    }

    for (int i = 1; i <= y; i++) {
        a /= i;
    }

    return a;
}

int main() {
    int T;
    int N, M;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &N, &M);
        printf("%d\n", C(N, M));
    }


    return 0;
}