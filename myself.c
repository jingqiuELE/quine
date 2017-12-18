#include <stdio.h>
#include <string.h>
void puts_m(const char *s) {
    int i;
    for(i=0; i<strlen(s); i++) {
        if (s[i] == 10) {
            putchar(92);
            putchar(110);
        } else {
            putchar(s[i]);
        }
    }
}
void prs(char *s) {
    const char tail[] = {34, 59, 10, 32, 32, 32, 32, 112, 114, 115, 40, 115, 41, 59, 10, 125};
    fputs(s, stdout);
    putchar(34);
    puts_m(s);
    puts(tail);
}
void main() {
    char s[4096] = "#include <stdio.h>\n#include <string.h>\nvoid puts_m(const char *s) {\n    int i;\n    for(i=0; i<strlen(s); i++) {\n        if (s[i] == 10) {\n            putchar(92);\n            putchar(110);\n        } else {\n            putchar(s[i]);\n        }\n    }\n}\nvoid prs(char *s) {\n    const char tail[] = {34, 59, 10, 32, 32, 32, 32, 112, 114, 115, 40, 115, 41, 59, 10, 125};\n    fputs(s, stdout);\n    putchar(34);\n    puts_m(s);\n    puts(tail);\n}\nvoid main() {\n    char s[4096] = ";
    prs(s);
}
