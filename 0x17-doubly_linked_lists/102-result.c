#include "lists.h"
/**
 * is_palindrome - Checks if a number is a palindrome.
 * @num: The number to be checked.
 *
 * Return: 1 if it's a palindrome, 0 otherwise.
 */

int is_palindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return original == reversed;
}

/**
 * find_largest_palindrome - Finds the largest palindrome made from the product of two 3-digit numbers.
 *
 * Return: The largest palindrome.
 */
int find_largest_palindrome() {
    int largest_palindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    return largest_palindrome;
}
/**
 * main - Entry point of the program.
 *
 * Return: 0 on successful execution.
 */
int main() {
    int result = find_largest_palindrome();

    FILE *file = fopen("102-result", "w");
    fprintf(file, "%d", result);
    fclose(file);

    return 0;
}

