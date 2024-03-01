#include <X11/Xlib.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
  // Open a display
  Display* display = XOpenDisplay();

  if (display == NULL)
  {
      printf("Xorg server failed to open!\n");
      return -1;
  }
  
  printf("Xorg successfully opened!\n");
  return 0;
}