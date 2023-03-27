#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void) {
    char password[PASSWORD_LENGTH + 1];
    const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(NULL)); // initialize random seed with current time

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = valid_chars[rand() % (sizeof(valid_chars) - 1)]; // choose a random valid character
    }
    password[PASSWORD_LENGTH] = '\0'; // add null terminator to end of password

    printf("Random password: %s\n", password);

    return 0;
}

