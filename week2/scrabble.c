#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char *word);

int main(void)
{
    // Get input words from both players
    char word1[1000];
	char word2[1000];
	printf("Player 1: ");
	scanf("%s", word1);
	printf("Player 2: ");
	scanf("%s", word2);

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
	if (score1 > score2)
		printf("Player 1 wins!");
	else if (score1 < score2)
		printf("Player 2 wins!");
	else
		printf("Tie!");
}

int compute_score(char *word)
{
    // TODO: Compute and return score for string
	int	t = 0;
	int	result = 0;
	int	index;
	while (word[t] != '\0')
	{
		if (islower(word[t]))
			word[t] -= 32;
		t++;
	}
	t = 0;
	while (word[t] != '\0')
	{
		if (isalpha(word[t]))
		{
			index = (int)word[t] - 65;
			result += POINTS[index];
		}
		t++;
	}
	return (result);
}
