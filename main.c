#include <X11/Xlib.h>
#include <stdio.h>

int main()
{
    char* display_name = NULL;

    Display = OpenDisplay(display_name);

    if (*Display == NULL)
    {
        printf("Failed to open display!");
        return 1;
    }

    printf("Successfully opened a display!");

    return 0;
}