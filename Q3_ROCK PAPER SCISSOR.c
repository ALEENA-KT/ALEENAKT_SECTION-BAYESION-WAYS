#include <stdio.h>  // Include standard input-output library

// Function to determine the winner of a single round
char determineWinner(char player1, char player2) {
    // Check if both players have the same move
    if (player1 == player2) {
        return 'D';  // Return 'D' for Draw
    } 
    // Check if Player 1 wins
    else if ((player1 == 'R' && player2 == 'S') || 
             (player1 == 'P' && player2 == 'R') || 
             (player1 == 'S' && player2 == 'P')) {
        return '1';  // Return '1' for Player 1 wins
    } 
    // Otherwise, Player 2 wins
    else {
        return '2';  // Return '2' for Player 2 wins
    }
}

int main() {
    int rounds = 10;  // Number of rounds to play
    int player1Wins = 0;  // Counter for Player 1 wins
    int player2Wins = 0;  // Counter for Player 2 wins
    char player1, player2;  // Variables to store players' moves

    // Loop for 10 rounds
    for (int i = 1; i <= rounds; i++) {
        printf("Round %d\n", i);  // Print the round number
        printf("Player 1 (R, P, S): ");
        scanf(" %c", &player1);  // Read input for Player 1
        printf("Player 2 (R, P, S): ");
        scanf(" %c", &player2);  // Read input for Player 2

        // Determine the winner of the current round
        char result = determineWinner(player1, player2);

        // Check the result and update the win counters
        if (result == '1') {
            printf("Player 1 wins this round\n");
            player1Wins++;
        } else if (result == '2') {
            printf("Player 2 wins this round\n");
            player2Wins++;
        } else {
            printf("This round is a draw\n");
        }
    }

    // Determine the final winner
    if (player1Wins > player2Wins) {
        printf("Final Winner: Player 1 with %d wins\n", player1Wins);
    } else if (player2Wins > player1Wins) {
        printf("Final Winner: Player 2 with %d wins\n", player2Wins);
    } else {
        printf("The game is a draw with both players having %d wins\n", player1Wins);
    }

    return 0;  // Return 0 to indicate successful execution
}
