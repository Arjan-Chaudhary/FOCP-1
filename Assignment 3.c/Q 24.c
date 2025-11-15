#include <stdio.h>
#include <ctype.h>

int main() {
    char S[105];
    scanf("%s", S);

    for (int i = 0; S[i] != '\0'; i++) {
        if (islower(S[i])) {
            S[i] = toupper(S[i]);
        } else if (isupper(S[i])) {
            S[i] = tolower(S[i]);
        }
    }

    printf("%s", S);
    return 0;
}
