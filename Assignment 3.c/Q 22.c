#include <stdio.h>
#include <string.h>

int main() {
    char word[10001];
    scanf("%s", word);

    int x = 0, y = 0 ;
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'z' || word[i] == 'Z')
            x++;
        else if (word[i] == 'o' || word[i] == 'O')
            y++;
    }
    if (2 * x == y)
        printf("Yes");
    else
        printf("No");

    return 0;
}

