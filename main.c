#include "space.h"

int main(void)
{
    gameobject  player;
    player = create_spaceship();
    while (1)
    {
        clear_screen();
        draw_sprite(player);
        usleep(500000);
    }
    return (0);
}

