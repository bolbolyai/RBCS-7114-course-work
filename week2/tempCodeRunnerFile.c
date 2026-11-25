#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
#define MAX_SCORE 100
int main() {
    char name[MAX_LEN];
    int score;

    printf("Enter your name: ");
    fgets(name, MAX_LEN, stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline character

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > MAX_SCORE) {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
        return 1;
    }

    printf("Hello, %s! Your score is %d.\n", name, score);
    return 0;
}eg