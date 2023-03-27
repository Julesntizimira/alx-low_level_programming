#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main() {
    srand(time(NULL)); /* Seed the random number generator with the current time */
    
    char password[PASSWORD_LENGTH+1]; /* Create an array to store the password (plus a null terminator) */
    int i;
    
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        int random = rand() % 62; /* Generate a random number between 0 and 61 */
        
        if (random < 10) {
            password[i] = random + '0'; /* Use a digit */
        } else if (random < 36) {
            password[i] = random - 10 + 'A'; /* Use an uppercase letter */
        } else {
            password[i] = random - 36 + 'a'; /* Use a lowercase letter */
        }
    }
    
    password[PASSWORD_LENGTH] = '\0'; /* Add a null terminator to the end of the password */
    
    printf("%s", password); /* Print the password */
    
    return 0;
}

