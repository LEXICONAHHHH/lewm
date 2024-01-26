#include <X11/Xlib.h>
#include <stdio.h>

int main()
{
    Display *XOpenDisplay(display_name)
        char *display_name;

    display_name = "Hello, world!";
    return 0;
}