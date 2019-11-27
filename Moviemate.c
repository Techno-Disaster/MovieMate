
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int get_char();
int movie_search(char a[100]);
void display(char d[100]);
void remove_newline(char w[100]);
void remove_white_space(char u[100]);
char c;     //Global variable declared
FILE *fptr; //File pointer defined in stdio.h
int main()
{
    int i;
    char cha, ch, search[100];
    //Ensure that "Name.txt" file is in the same folder as that of this source code
    printf("Have you ensured that the source code(Moviemate.c) and the file \"Name.txt\" are in the same folder(Y/N):");
    //testing line so that errors do not occur
    scanf("%c", &ch);
    getchar();
    if (ch == 'Y' || ch == 'y')
    {
        do
        {
            fptr = fopen("Name.txt", "r"); /* File pointer to hold reference to file "Name" and file is opened
            in read only mode*/
            printf("Enter the name of the movie which you want to search:");
            /*difference between fgets and gets is fgets gets in the STREAM opened by fopen.
            STREAMS are how a program comuncates with the target environment*/
            fgets(search, 100, stdin); //Movie inputted by user is stored in search
            for (i = 0; search[i] != '\0'; i++)
            {
                search[i] = toupper(search[i]); //Lowercase letters are converted to uppercase
            }
            remove_newline(search);     //Function call to user-defined function
            remove_white_space(search); //Function call to user-defined function
            if (search[0] != '\0')      //Checking whether null string is entered or not
            {
                movie_search(search); //Function call to user-defined function
            }
            else
            {
                printf("No such movie found.\n");
            }
            printf("Do you want to continue(Y/N):");
            scanf("%c", &cha);
            getchar();
        } while (cha == 'Y' || cha == 'y');
        printf("Thank you.");
        fclose(fptr); // Close file to save file's data
    }
    else
    {
        printf("Please keep \"Name.txt\" file and Moviemate.c file in the same folder and then try again.\n");
    }
    return 0;
}
void remove_newline(char w[100]) //Removes '\n'(new line) from the string
{
    int j;
    for (j = strlen(w) - 1; j >= 0; j--)
    {
        if (w[j] == '\n')
        {
            w[j] = '\0'; //'\n'(New line) is replace by a null character
            break;
        }
    }
}
void remove_white_space(char u[100]) //Leading and trailing white spaces are removed from the inputted string
{
    int i, j;
    for (i = strlen(u) - 1; u[i] == 32; i--)
    {
        u[i] = '\0'; //Trailing spaces are replaced by a null character
    }
    for (i = 0;; i++)
    {
        if ((int)u[i] != 32)
        {
            for (j = i; u[j] != '\0'; j++)
            {
                u[j - i] = u[j]; /*Leading spaces are removed and accordingly, the elements of the character array are
                shifted by required positions*/
            }
            u[j - i] = '\0'; //Null character is inserted at the end of the string
            break;
        }
    }
}
int get_char()
{
    c = fgetc(fptr); //Character is read from the file
    if (feof(fptr))  //Checking whether end of file has been reached or not
    {
        printf("No such movie found.\n");
        return 0;
    }
    return 1;
}
int movie_search(char a[100]) //In this function, movie is searched for in the file
{
    int i, flag, j, r;
    for (i = 0; a[i] != '\0';)
    {
        r = get_char(); //get_char function is called
        if (r == 0)
        {
            return 0;
        }
        if (a[i] == c)
        {
            for (j = 1; a[j] != '\0'; j++)
            {
                r = get_char();
                if (r == 0)
                {
                    return 0;
                }
                if (a[j] != c)
                {
                    flag = 0;
                    break;
                }
                else
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1) //Movie has been found
        {
            break;
        }
    }
    if (flag == 1) //Movie has been found
    {
        puts(a);    //Movie's name is displayed
        display(a); //Display function is called
    }
    return 1;
}
void display(char d[100]) //In this function, the information stored about the movie is displayed
{
    char b[109];
    get_char();
    while (strstr(fgets(b, 109, fptr), d) == NULL) /*Movie's name is searched again in the file and until found, the content
    of the file is printed*/
    {
        fputs(b, stdout);
    }
}
