#include <X11/Xlib.h>
#include <stdio.h>

int main()
{
    const char* display_name = "Hello, world!";

    XOpenDisplay(display_name);
    return 0;
}