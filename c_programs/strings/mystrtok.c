#include <stdio.h>
#include <string.h>

char* Mystrtok(char* s, char ch) {
    // static pointers stay in memory even after the function ends
    static char* next_token = NULL;

    // If s is not NULL, we are starting a new string
    if (s != NULL) {
        next_token = s;
    }

    // If we've reached the end of the string, return NULL
    if (next_token == NULL || *next_token == '\0') {
        return NULL;
    }

    char* start = next_token; // Remember the start of this token
    char* p = next_token;

    while (*p != '\0') {
        if (*p == ch) {
            *p = '\0';            // Terminate the current token
            next_token = p + 1;   // Save the position for the NEXT call
            return start;         // Return the current token
        }
        p++;
    }

    next_token = NULL; // We reached the end of the string
    return start;
}

int main() {
    char s[50] = "vector embedded hyderabad india";
    char *token;

    // First call: pass the string
    token = Mystrtok(s, ' ');
    
    // Subsequent calls: pass NULL to continue where we left off
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = Mystrtok(NULL, ' ');
    }

    return 0;
}