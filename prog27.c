Hangman game
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6

int main() {
    char word[] = "apple";
    int length = strlen(word);
    char guess, guessedWord[length + 1];
    int triesLeft = MAX_TRIES;
    int correctGuesses = 0;
    for (int i = 0; i < length; i++) {
        guessedWord[i] = '_';
    }
    guessedWord[length] = '\0'; 

    printf("Welcome to Hangman!\n");
    printf("The word has %d letters. Try to guess it!\n", length);

    while (triesLeft > 0 && correctGuesses < length) {
        printf("\nYou have %d tries left.\n", triesLeft);
        printf("Current word: %s\n", guessedWord);
        printf("Enter a letter: ");
        scanf(" %c", &guess); 

        guess = tolower(guess);
        int found = 0;
        for (int i = 0; i < length; i++) {
            if (word[i] == guess && guessedWord[i] == '_') {
                guessedWord[i] = guess;
                correctGuesses++;
                found = 1;
            }
        }
        if (!found) {
            triesLeft--;
            printf("Wrong guess! Try again.\n");
        } else {
            printf("Good guess!\n");
        }
    }
    if (correctGuesses == length) {
        printf("\nCongratulations! You guessed the word: %s\n", word);
    } else {
        printf("\nGame over! You ran out of tries. The word was: %s\n", word);
    }

    return 0;
}
