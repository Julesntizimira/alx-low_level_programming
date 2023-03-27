#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12
#define WORDLIST_FILE "wordlist.txt"

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time
    
    char password[PASSWORD_LENGTH+1]; // Create an array to store the password (plus a null terminator)
    FILE* wordlist_file = fopen(WORDLIST_FILE, "r"); // Open the wordlist file for reading
    
    if (wordlist_file == NULL) {
        printf("Error: Could not open wordlist file.\n");
        return 1;
    }
    
    int num_words = 0;
    char word[256];
    
    // Count the number of words in the wordlist file
    while (fgets(word, sizeof(word), wordlist_file) != NULL) {
        num_words++;
    }
    
    // Generate a random number between 0 and num_words-1
    int random_index = rand() % num_words;
    
    // Reset the file pointer to the beginning of the file
    rewind(wordlist_file);
    
    // Select the word at the random index
    for (int i = 0; i <= random_index; i++) {
        fgets(word, sizeof(word), wordlist_file);
    }
    
    // Remove the newline character at the end of the word
    int len = strlen(word);
    if (word[len-1] == '\n') {
        word[len-1] = '\0';
    }
    
    // Copy the word to the password array
    strncpy(password, word, PASSWORD_LENGTH);
    password[PASSWORD_LENGTH] = '\0'; // Add a null terminator to the end of the password
    
    fclose(wordlist_file); // Close the wordlist file
    
    printf("%s", password); // Print the password
    
    return 0;
}

