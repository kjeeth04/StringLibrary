#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main(){
    puts("all_letters test:");
    printf("%d\n", all_letters("Hello World"));
    printf("%d\n", all_letters("Hell0 World"));
    fflush(stdin);

    puts("num_in_range test:");
    printf("%d\n", num_in_range("Yellow", 'f', 'm'));
    fflush(stdin);

    puts("diff test:");
    printf("%d\n", diff("Book", "Back"));
    fflush(stdin);

    puts("shorten test:");
    char a[] ="Hello World";
    shorten(a, 5);
    printf("%s\n", a);
    char b[] ="Hello World";
    shorten(b, 20);
    printf("%s\n", b);
    fflush(stdin);

    puts("len_diff test:");
    printf("%d\n", len_diff("Philadelphia", "Hello"));
    fflush(stdin);

    puts("rm_left_space test:");
    char c[] = "   Hello";
    rm_left_space(c);
    printf("%s\n", c);
    fflush(stdin);

    puts("rm_right_space test:");
    char d[] = "Hello   ";
    rm_right_space(d);
    printf("%s\n", d);
    fflush(stdin);

    puts("rm_space test:");
    char e[] = "   Hello   ";
    rm_space(e);
    printf("%s\n", e);
    fflush(stdin);

    puts("find test:");
    printf("%d\n", find("Hello", "l"));
    printf("%d\n", find("Hello", "q"));
    fflush(stdin);

    puts("ptr_to test:");
    char f[] = "Hello";
    char* f1 = ptr_to(f, "l");
    printf("%c\n", *f1);
    fflush(stdin);
    char* f2 = ptr_to(f, "q");
    printf("%s\0", f2);
    puts("");
    fflush(stdin);

    puts("is_empty test:");
    printf("%d\n", is_empty(" "));
    printf("%d\n", is_empty("Hello"));
    fflush(stdin);

    puts("str_zip test:");
    char *g = str_zip("Temple", "Hello");
    printf("%s\n", g);
    free(g);
    fflush(stdin);

    puts("capitalize test:");
    char h[] = "hello world";
    capitalize(h);
    printf("%s\n", h);
    fflush(stdin);

    puts("strcmp_ign_case test:");
    printf("%d\n", strcmp_ign_case("hello", "goodbye"));
    printf("%d\n", strcmp_ign_case("Hello", "hello"));
    fflush(stdin);

    puts("take_last test:");
    char i[] = "hello";
    take_last(i, 3);
    printf("%s\n", i);
    char i1[] = "hello";
    take_last(i1, 6);
    printf("%s\n", i1);
    fflush(stdin);

    puts("dedup test:");
    char *k = dedup("hello");
    printf("%s\n", k);
    free(k);
    fflush(stdin);

    puts("pad test:");
    char *l = pad("hello", 6);
    printf("%s\n", l);
    free(l);
    char *m = pad("hello", 5);
    printf("%s\n", m);
    free(m);
    fflush(stdin);

    puts("end_with_ignore_case test:");
    printf("%d\n", ends_with_ignore_case("Coding", "ing"));
    printf("%d\n", ends_with_ignore_case("Coding", "ed"));
    fflush(stdin);

    puts("repeat test:");
    char *n = repeat("hello", 3, '-');
    printf("%s\n", n);
    fflush(stdin);

    puts("replace test:");
    char *o = replace("Steph is the X", "X", "best");
    printf("%s\0\n", o);
    free(o);
    puts("");
    fflush(stdin);

    puts("str_connect test:");
    char *p[] = {"Hello", "world", "Hello", "world"};
    char *q = str_connect(p, 4, '-');
    printf("%s\n", q);
    fflush(stdin);

    puts("rm_empties test:");
    char *r[] = {"Hello", "World", " ", " ", "Steph", NULL}; 
    rm_empties(r);
    for (int i = 0; r[i] != NULL; ++i){
        printf("%s ", r[i]);
    }
    puts("");
    fflush(stdin);

    puts("str_chop_all test:");
    char *s = "Hello/world/Hello/world";
    char **t = str_chop_all(s, '/');
    for (int i = 0; t[i] != NULL; ++i){
        printf("%s ", t[i]);
    }
    free(t);
    fflush(stdin);
    puts("");
}