#include "space.h"

void animation(void)
{
    while (1)
    {
        write(1, "(o_o)\r", 6);
        usleep(2000000);
        write(1, "(-_-)\r", 6);
        usleep(300000);
    }
}

void ft_draw_plane(void)
{
    char *spaceship = 
    "    ^ \n"
    "   / \\ \n"
    " __| |__ \n"
    "/__| |__\\ \n"
    "   | |  \n"
    "   /_\\ \n";

    write(1, spaceship, ft_strlen(spaceship));
    write(1, "\033[6A", 4);  
}
    
void ft_rotate_plane(void)
{
    char *spaceship = 
    "    ^ \n"
    "   / \\ \n"
    " __| |__ \n"
    "/__| |__\\ \n"
    "   | | \n"
    "   /_\\ \n";
   char *spaceship_rotate1 = 
    "    ^ \n"
    "   / \\ \n"
    "  _| |_ \n"
    " /_| |_\\ \n"
    "   | | \n"
    "   |_| \n";
    char *spaceship_rotate2 = 
    "    ^ \n"
    "   / \\ \n"
    "   | | \n"
    "   ||| \n"
    "   | | \n"
    "    | \n";
    
    int i;
    
    i = 0;
    while (i < 3)
    {
        write(1, spaceship_rotate1, ft_strlen(spaceship_rotate1));
        write(1, "\033[6A", 4);
        usleep(200000);
        
        write(1, spaceship_rotate2, ft_strlen(spaceship_rotate2));
        write(1, "\033[6A", 4);
        usleep(200000);
        
        write(1, spaceship, ft_strlen(spaceship));
        write(1, "\033[6A", 4);
        usleep(200000);
        i++;   
    }
}