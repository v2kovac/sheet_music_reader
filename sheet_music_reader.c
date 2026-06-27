#include <stdio.h>
#include <raylib.h>
#include <string.h>

// includes implementation by default JSMN_HEADER makes it header only
#define JSMN_PARENT_LINKS 1
#include "jsmn.h"

#define array_size(arr) (sizeof(arr) / sizeof((arr)[0]))

void print_token(jsmntok_t token, int num) {
    printf("token %d: type(%d), start(%d), end(%d), size(%d), parent(%d)\n", num, token.type, token.start, token.end, token.size, token.parent);
}

void raylib_demo() {
    InitWindow(800, 600, "hello");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
    CloseWindow();
}

void json_demo() {
    jsmn_parser p;
    jsmntok_t tokens[128];
    jsmn_init(&p);
    char* s = "{\"abc\":[1,2,3]}";
    int r = jsmn_parse(&p, s, strlen(s), tokens, array_size(tokens));

    printf("input: %s\n", s);
    for (int i = 0; i < r; i++) {
        jsmntok_t token = tokens[i];
        print_token(token, i);
    }

    printf("num %d\n", r);
}

int main() {
    //raylib_demo();
    json_demo();
    return 0;
}
