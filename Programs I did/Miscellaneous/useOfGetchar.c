#include<stdio.h>

int get_answer(void)
{
    int c;
    int answer = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        if (answer == 0 && (c == 'y' || c == 'n'))
            answer = c;
    }
    return answer;
}

int main(void)
{
    int F, C;
    char line[4096];

    printf("Do you have a Fever? y/n\n");
    F = get_answer();

    printf("Do you have a runny nose or cough? y/n\n");
    C = get_answer();


    printf("Here are the results you input:\n");
    printf("Do you have a fever? %c\n", F);
    printf("Do you have a runny nose or cough? %c\n", C);

    return 0;
}
