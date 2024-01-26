#include <X11/Xlib.h>
#include <stdio.h>

int main()
{
    Display *XOpenDisplay(NULL);

    if (Display == NULL)
    {
        printf("Failed to open display!");
        return 1;
    }

    printf("Successfully opened a display!");

    return 0;
}