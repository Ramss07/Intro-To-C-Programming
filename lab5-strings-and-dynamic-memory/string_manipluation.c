#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char fullName[] = "Ramley Hirneisen";
    char schoolName[] = "The University of North Carolina at Charlotte";

    int fullNameLength = strlen(fullName);
    int schoolNameLength = strlen(schoolName);

    int counterName = 0;
    int counterSchool = 0;
    char target = 'O';

    printf("Name length: %d\n", fullNameLength);
    printf("School length: %d\n", schoolNameLength);

    for(char *ptr = fullName; *ptr != '\0'; ptr++)
    {
        *ptr = toupper(*ptr);
    }

    for(char *ptr = schoolName; *ptr != '\0'; ptr++)
    {
        *ptr = toupper(*ptr);
    }

    printf("Name in uppercase = %s\n", fullName);
    printf("School in uppercase = %s\n", schoolName);

    int compareResult = strcmp(fullName, schoolName);
    if(compareResult < 0)
    {
        printf("The lesser string is %s\n", fullName);
    }
    else if (compareResult > 0)
    {
        printf("The lesser string is %s\n", schoolName);
    }
    else
    {
        printf("The strings are equal.\n");
    }

    char *ptr = fullName;
    while (*ptr != '\0')
    {
        if (*ptr == target)
        {
            counterName++;
        }
        ptr++;
    }
    printf("'o' was found %d times in name\n", counterName);

    ptr = schoolName;
    while (*ptr != '\0')
    {
        if (*ptr == target)
        {
            counterSchool++;
        }
        ptr++;
    }
    printf("'o' was found %d times in school\n", counterSchool);
}