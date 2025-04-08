#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * concatenate(const char * string1, const char * string2);

int main(int argc, const char * argv[]) 
{
    char str1[100] = "The United States";
    char str2[100] = "of America";

    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    char * str3;
    str3 = concatenate(str1, str2);
    
    printf("\nThe two strings concatenated: %s\n", str3);

    char str4[100] = "The University of North Carolina";
    char str5[100] = "at Charlotte";

    printf("\nFirst string: %s\n", str4);
    printf("Second string: %s\n", str5);

    char * str6;
    str6 = concatenate(str4, str5);

    printf("\nThe two strings concatenated: %s\n", str6);
    return 0;
}



char * concatenate(const char * string1, const char * string2)
{
    size_t len1 = strlen(string1);
    size_t len2 = strlen(string2);

    char *result = (char *)malloc(len1 + len2 + 2);
    if (result == NULL)
    {
        printf("Memory allovation failed\n");
        exit(1);
    }

    strcpy(result, string1);
    strcat(result, " ");
    strcat(result, string2);

    return result;
}
