#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int playerY = 10;
int jump = 0;
int jumpCounter = 0;

// Function to draw the screen
void draw(int obsX, int score, int lives) {
    system("cls");

    // Info bar
    printf("SCORE: %d   LIVES: %d\n\n", score, lives);

    // Draw one row (player & obstacle)
    for (int i = 0; i < 20; i++) {
        if (i == 5 && playerY == 10)
            printf("O");      // Player
        else if (i == obsX && 10 == 10)
            printf("|");      // Obstacle
        else
            printf(" ");
    }
    printf("\n");

    // Draw ground
    for (int i = 0; i < 20; i++)
        printf("_");
}

// Function containing game logic
void playGame() {
    int obsX = 19;
    int score = 0;
    int lives = 3;

    while (lives > 0) {
        draw(obsX, score, lives);

        // Player jumping
        if (jump) {
            playerY = 8;
            jumpCounter++;

            if (jumpCounter == 3) {
                jump = 0;
                jumpCounter = 0;
            }
        } else {
            playerY = 10;
        }

        // Obstacle movement
        obsX--;

        // Collision detection
        if (obsX == 5 && playerY == 10) {
            lives--;
            printf("\n❌ Collision! Life Lost.\n");
            Sleep(700);
        }

        // Reset obstacle when it passes player
        if (obsX < 0) {
            obsX = 19;
            score++;     // SCORE INCREASE
        }

        // Jump input
        if (kbhit()) {
            char ch = getch();
            if (ch == ' ') {
                jump = 1;
            }
        }

        Sleep(120);  // Speed
    }

    system("cls");
    printf("💀 GAME OVER 💀\n");
    printf("Final Score: %d\n", score);
}

// Main program with menu + restart
int main() {
    int choice;

    while (1) {
        system("cls");
        printf("===== SIMPLE RUNNER GAME =====\n");
        printf("1. Start Game\n");
        printf("2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            playGame();

            printf("\nPlay Again? (1 = Yes / 0 = No): ");
            scanf("%d", &choice);
            if (choice == 1)
                continue;
            else
                break;
        }
        else {
            break;
        }
    }

    printf("\nThank you for playing!\n");
    return 0;
}
