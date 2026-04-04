#include "space.h"

int main(void)
{
    //char *input;
    
    //input = get_input();
    //if (!input)
    // return (1);
    //printf("%s\n", input);
    ft_draw_plane();
    
    while (1)
    {
        usleep(500000);
        ft_rotate_plane();
    }
    
    //free(input);
    //input = NULL;
    return (0);
}

