#include <stdio.h>
#include <string.h>
void prs(const char *s, char *store) {
    char fmt_s[100];
    if(0 == strcmp(s, "%s")) {
        printf("%s", store);
        printf("    prs(\"%%s\", &store);\n");
        printf("}\n");
    } else {
        printf("%s\n", s);
        snprintf(&fmt_s, sizeof(fmt_s), "    prs(\"%s\", &store);\n", s);
        strcat(store, fmt_s);
    }
}
void main() {
    char store[1500] = {0};
    prs("#include <stdio.h>", &store);
    prs("#include <string.h>", &store);
    prs("void prs(const char *s, char *store) {", &store);
    prs("    char fmt_s[100];", &store);
    prs("    if(0 == strcmp(s, \"%s\")) {", &store);
    prs("        printf(\"%s\", store);", &store);
    prs("        printf(\"prs(\\\"%%s\\\", &store);\\n\");", &store);
    prs("        printf(\"}\\n\");", &store);
    prs("    } else {", &store);
    prs("        printf(\"%s\\n\", s)", &store);
    prs("        snprintf(&fmt_s, sizeof(fmt_s), \"    prs(\\\"%s\\\", &store);\\n\", s);", &store);
    prs("        strcat(store, fmt_s);", &store);
    prs("    }", &store);
    prs("}", &store);
    prs("void main() {", &store);
    prs("    char store[1500] = {0};", &store);
    prs("%s", &store);
}

