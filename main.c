
#include <X11/Xlib.h>

int main()
{
    Display* display;

    display = XOpenDisplay("simey:0");
    
    if (display == NULL)
    { 
      printf("Xorg server failed to open! \n");

      return 0;
    }
}
