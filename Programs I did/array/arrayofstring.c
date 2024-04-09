#include <stdio.h>
void main()
{
    char *days[7];
    char TheDay[10];
    int day;
    days[0] = "Sunday";
    days[1] = "Monday";
    days[2] = "Tuesday";
    days[3] = "Wednesday";
    days[4] = "Thursday";
    days[5] = "Friday";
    days[6] = "Saturday";
    printf("Please enter a day: ");
    scanf("%9s", TheDay);
    day = 0;
    while ((day < 7) && (!samestring(TheDay, days[day])))
        day++;
    if (day < 7)
        printf("%s is day %d.\n", TheDay, day);
    else
        printf("No day %s!\n", TheDay);
}
int samestring(char *s1, char *s2) {
    int i;
    if (strlen(s1) !=strlen(s2))
    return 0;
    for (i = 0;i< strlen(s1); i++)
    if (s1[i] != s2[i])
    return 0;
    return 1;

}