#include <stdio.h>
#include <string.h>

char p[] = " \
#include <stdio.h>\n\
#include <string.h>\n\
void main() {\n\
    int i;\n\
    printf(\"char s[] = {\\n\");\n\
    for (i = 0; i < sizeof(s); i++) {\n\
        printf(\"\\t%d,\\n\", s[i]);\n\
    }\n\
    printf(\"};\\n\");\n\
    printf(\"%s\", s);\n\
}\n\
";

int main() {
    int i = 0;
    int len = strlen(p);

    printf("char s[] = {\n");
    for (i=0; i<len; i++) {
        printf("\t%d,\n", p[i]);
    }
    printf("};\n");
    printf("%s", p);
    return 0;
}
