#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int green, purple;
        scanf("%d %d", &green, &purple);

        int n;
        scanf("%d", &n);

        int p1 = 0, p2 = 0;
        
        for (int i = 0; i < n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            p1 += a;
            p2 += b;
        }

        long long cost1 = (long long)p1 * green + (long long)p2 * purple;
        long long cost2 = (long long)p1 * purple + (long long)p2 * green;

        printf("%lld\n", (cost1 < cost2) ? cost1 : cost2);
    }

    return 0;
}
