#include <stdio.h>
#include <string.h>
void myformat(const char *s, char *fmt_s) {
    char buff[] = "    prs(\"";
    int len = strlen(s);
    int i, j;
    strcpy(fmt_s, buff);
    j = strlen(fmt_s);
    for (i=0; i<len; i++) {
        if (s[i] == '\"' || s[i] == '\\') {
            fmt_s[j++] = '\\';
        }
        fmt_s[j++] = s[i];
    }
    strcat(fmt_s, "\", (char *)&store);\n");
}
void prs(const char *s, char *store) {
    char format_s[256] = {0};
    if(0 == strcmp(s, "%s")) {
        printf("%s", store);
        printf("    prs(\"%%s\", (char *)&store);\n");
        printf("}\n");
    } else {
        printf("%s\n", s);
        myformat(s, (char *)&format_s);
        strcat(store, format_s);
    }
}
void main() {
    char store[4096] = {0};
    prs("#include <stdio.h>", (char *)&store);
    prs("#include <string.h>", (char *)&store);
    prs("void myformat(const char *s, char *fmt_s) {", (char *)&store);
    prs("    char buff[] = \"    prs(\\\"\";", (char *)&store);
    prs("    int len = strlen(s);", (char *)&store);
    prs("    int i, j;", (char *)&store);
    prs("    strcpy(fmt_s, buff);", (char *)&store);
    prs("    j = strlen(fmt_s);", (char *)&store);
    prs("    for (i=0; i<len; i++) {", (char *)&store);
    prs("        if (s[i] == '\\\"' || s[i] == '\\\\') {", (char *)&store);
    prs("            fmt_s[j++] = '\\\\';", (char *)&store);
    prs("        }", (char *)&store);
    prs("        fmt_s[j++] = s[i];", (char *)&store);
    prs("    }", (char *)&store);
    prs("    strcat(fmt_s, \"\\\", (char *)&store);\\n\");", (char *)&store);
    prs("}", (char *)&store);
    prs("void prs(const char *s, char *store) {", (char *)&store);
    prs("    char format_s[256] = {0};", (char *)&store);
    prs("    if(0 == strcmp(s, \"%s\")) {", (char *)&store);
    prs("        printf(\"%s\", store);", (char *)&store);
    prs("        printf(\"    prs(\\\"%%s\\\", (char *)&store);\\n\");", (char *)&store);
    prs("        printf(\"}\\n\");", (char *)&store);
    prs("    } else {", (char *)&store);
    prs("        printf(\"%s\\n\", s);", (char *)&store);
    prs("        myformat(s, (char *)&format_s);", (char *)&store);
    prs("        strcat(store, format_s);", (char *)&store);
    prs("    }", (char *)&store);
    prs("}", (char *)&store);
    prs("void main() {", (char *)&store);
    prs("    char store[4096] = {0};", (char *)&store);
    prs("%s", (char *)&store);
}
