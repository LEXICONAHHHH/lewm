#include <X11/Xlib.h>
#include <stdio.h>

int main()
{
    const char* display_name = "lewm server";

    Display *XOpenDisplay(display_name);

    printf("%d\n", Display);

    return 0;
}