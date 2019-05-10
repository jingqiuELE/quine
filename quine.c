#include <stdio.h>
#include <string.h>

void main() {
    int i;
    printf("char s[] = {\n");
    for (i = 0; i < sizeof(s); i++) {
        printf("\t%d,\n", s[i]);
    }
    printf("};\n");
    printf("%s", s);
}
