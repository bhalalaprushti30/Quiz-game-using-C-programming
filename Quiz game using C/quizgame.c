#include <stdio.h>

// Function prototypes
void displayQuestion(char question[], char options[][100], char correctOption);

int main() {
    int score = 0;
    char answer;

    printf("Welcome to the C Programming Quiz Game!\n");
    printf("---------------------------------------\n\n");

    // Question 1
    char q1[] = "1. Which of the following is a valid C data type?";
    char options1[][100] = {"A. intiger", "B. float", "C. decimal", "D. number"};
    displayQuestion(q1, options1, 'B');
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') score++;

    printf("\n");

    // Question 2
    char q2[] = "2. Which symbol is used to terminate a statement in C?";
    char options2[][100] = {"A. .", "B. :", "C. ;", "D. ,"};
    displayQuestion(q2, options2, 'C');
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') score++;

    printf("\n");

    // Question 3
    char q3[] = "3. What is the size of an 'int' on a 32-bit system?";
    char options3[][100] = {"A. 2 bytes", "B. 4 bytes", "C. 8 bytes", "D. 16 bytes"};
    displayQuestion(q3, options3, 'B');
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') score++;

    printf("\n");

    // Question 4
    char q4[] = "4. How do you declare a constant in C?";
    char options4[][100] = {"A. #define", "B. const", "C. static", "D. final"};
    displayQuestion(q4, options4, 'A');
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') score++;

    printf("\n");

    // Question 5
    char q5[] = "5. Which loop is guaranteed to execute at least once?";
    char options5[][100] = {"A. for loop", "B. while loop", "C. do-while loop", "D. None"};
    displayQuestion(q5, options5, 'C');
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') score++;

    printf("\n");

    // Question 6
    char q6[] = "6. What is the output of 'printf(\"%d\", 5+3);'?";
    char options6[][100] = {"A. 5", "B. 8", "C. 53", "D. Error"};
    displayQuestion(q6, options6, 'B');
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') score++;

    printf("\n");

    // Question 7
    char q7[] = "7. What is the purpose of the 'return' statement?";
    char options7[][100] = {"A. To exit the program", "B. To return a value from a function", "C. To print output", "D. To declare a variable"};
    displayQuestion(q7, options7, 'B');
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') score++;

    printf("\n");

    // Question 8
    char q8[] = "8. How do you comment a single line in C?";
    char options8[][100] = {"A. /* comment */", "B. -- comment", "C. // comment", "D. # comment"};
    displayQuestion(q8, options8, 'C');
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') score++;

    printf("\n");

    // Question 9
    char q9[] = "9. What is the keyword to define a function in C?";
    char options9[][100] = {"A. function", "B. define", "C. void", "D. None of the above"};
    displayQuestion(q9, options9, 'D');
    scanf(" %c", &answer);
    if (answer == 'D' || answer == 'd') score++;

    printf("\n");

    // Question 10
    char q10[] = "10. What does 'sizeof()' return?";
    char options10[][100] = {"A. Value of a variable", "B. Number of bits", "C. Size in bytes", "D. None"};
    displayQuestion(q10, options10, 'C');
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') score++;

    printf("\n---------------------------------------\n");
    printf("Quiz Over! Your total score is: %d/10\n", score);

    return 0;
}

// Function to display a question and its options
void displayQuestion(char question[], char options[][100], char correctOption) {
    printf("%s\n\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%s\n", options[i]);
    }
    printf("\nEnter your answer (A/B/C/D): ");
}
