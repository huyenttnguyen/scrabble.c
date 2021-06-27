#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
int findValue(char c)
{
    char words[ ] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int points[ ] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    for (int i = 0; i < 26; i++)
    {
        if (words[i] == toupper(c))
        {
            int findValue = points[i];
            return findValue;
        }
    }
    return 0;
}
int sumText(string player)
{
    int sum = 0;

    for (int k = 0, n = strlen(player); k < n; k++)
    {
        char currentCharacter = player[k];
        sum = sum + findValue(currentCharacter);
    }
    return sum;
}
int main(void)
{
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");
    int sum1 = sumText(player1);
    int sum2 = sumText(player2);

    if (sum1 < sum2)
    {
        printf("Player 2 wins!\n");
    }
    else if (sum1 > sum2)
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
