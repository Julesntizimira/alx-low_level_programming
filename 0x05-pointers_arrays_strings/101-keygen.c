#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 12

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time
    
    char password[PASSWORD_LENGTH+1]; // Create an array to store the password (plus a null terminator)
    
    const char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    const char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char digits[] = "0123456789";
    const char special[] = "!@#$%^&*()_+{}[];:<>,.?/~`|";
    
    const int num_lowercase = strlen(lowercase);
    const int num_uppercase = strlen(uppercase);
    const int num_digits = strlen(digits);
    const int num_special = strlen(special);
    
    int i = 0;
    password[i++] = lowercase[rand() % num_lowercase];
    password[i++] = uppercase[rand() % num_uppercase];
    password[i++] = digits[rand() % num_digits];
    password[i++] = special[rand() % num_special];
    
    while (i < PASSWORD_LENGTH) {
        const int charset_index = rand() % 4;
        const char* charset = NULL;
        int num_charset = 0;
        
        switch (charset_index) {
            case 0:
                charset = lowercase;
                num_charset = num_lowercase;
                break;
            case 1:
                charset = uppercase;
                num_charset = num_uppercase;
                break;
            case 2:
                charset = digits;
                num_charset = num_digits;
                break;
            case 3:
                charset = special;
                num_charset = num_special;
                break;
        }
        
        password[i++] = charset[rand() % num_charset];
    }
    
    password[PASSWORD_LENGTH] = '\0'; // Add a null terminator to the end of the password
    
    printf("%s", password); // Print the password
    
    return 0;
}

