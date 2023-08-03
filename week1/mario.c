#include  <stdio.h>

void    put_space(int space)
{
    while(space > 0)
        {
            printf(" ");
            space--;
        }
}
void    put_hashtag(int hashtag)
{
    while(hashtag > 0)
        {
            printf("#");
            hashtag--;
        }
}
int main(void)
{
    int height, hashtag, space, line = 1;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    } while((height < 1 || height > 8));
    
    while(line < height + 1)
    {
        put_space(height - line);
        put_hashtag(hashtag = line);
        printf("  ");
        put_hashtag(hashtag = line);
        put_space(height - line);
        printf("\n");
        line++;
    }
    return(0);
}