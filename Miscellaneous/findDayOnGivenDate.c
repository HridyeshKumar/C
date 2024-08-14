
#include <stdio.h>

const char *wd(int year, int month, int day)
{
  static const char *weekdayname[] = {"Monday", "Tuesday",
        "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  size_t JND =                                                     \
          day                                                      \
        + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) \
        + (365 * (year + 4800 - ((14 - month) / 12)))              \
        + ((year + 4800 - ((14 - month) / 12)) / 4)                \
        - ((year + 4800 - ((14 - month) / 12)) / 100)              \
        + ((year + 4800 - ((14 - month) / 12)) / 400)              \
        - 32045;
  return weekdayname[JND % 7];
}

int main()
{
  int year, month, date;

  printf("Enter Year : ");
  scanf("%d",&year);
  printf("\nEnter Month : ");
  scanf("%d",&month);
  printf("\nEnter Date : ");
  scanf("%d",&date);

  printf("\n%d-%02d-%02d: %s\n", year, month, date, wd(year, month, date));

  return 0;
}
