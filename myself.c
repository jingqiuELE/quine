#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    FILE *input;
    char c;
    char p[1250];
    int i = 0;

    if (argc != 2) return 0;
    input = fopen(argv[1], "r");
    printf("char s[] = {\n");
    for ( c = fgetc(input); c != EOF; c = fgetc(input)) {
        printf("\t%d,\n", c);
        p[i++] = c;
    }
    printf("};\n");
    printf("%s", p);
    return 0;
}
