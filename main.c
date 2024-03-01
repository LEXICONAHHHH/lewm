#include <X11/Xlib.h>

int main()
{
    Display* display;

    display = XOpenDisplay("lewm");
    int scr;

    Window root;
    Window win;
    XEvent ev;

    #define POSY   500
    #define POSX   500
    #define WIDTH  400
    #define HEIGHT 400
    #define BORDER = 15

    if (display == NULL)
    { 
      printf("Xorg server failed to open! \n");

      return -1;
    }
    /* get default screen and root window */
    scr = DefaultScreen(display);
    root = RootWindow(display, scr);

    /* Creating our simple window */
    win = XCreateSimpleWindow(display, root, POSX, POSY, WIDTH, HEIGHT, BORDER, BlackPixel(display, scr), WhitePixel(display, scr));
    /* Map our window to the display server */
    XMapWindow(display, win);

    while (XNextEvent(display, &ev) == 0)
    {
        
    }

    /* Unmap our simple window */
    XUnmapWindow(display, win);
    
    XDestroyWindow(display, win);

    XCloseDisplay(display);
    return 0;
}
