Rock,Paper,Scissor
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    char *choices[] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;
    printf("Rock, Paper, Scissors Game!\n");
    printf("Choose an option:\n");
    printf("0 for Rock\n");
    printf("1 for Paper\n");
    printf("2 for Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &userChoice);
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice. Please enter 0, 1, or 2.\n");
        return 1;
    }
    computerChoice = rand() % 3;
    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) { 
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
