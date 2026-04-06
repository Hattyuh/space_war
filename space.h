#ifndef SPACE_H
    #define SPACE_H

//OTHER HEADER FILES
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>

//STRUCTS, TYPEDEFS, MACROS
    typedef struct s_gameobject
    {
        int     x;
        int     y;
        char    *skin;
    }  gameobject;

//FUNCTIONS
    //utils.c
    void	ft_putnbr(int nb);
    int		ft_atoi(char *str);
    int		ft_is_char_whitespace(char c);
    int		ft_in_char_numerical(char c);
    int		ft_is_char_printable(char c);
    int		ft_strcmp(char *s1, char *s2);
    int		ft_strlen(char *str);
    char	*get_input(void);
    
    //animation.c
    void		animation(void);
    void		ft_draw_plane(void);
    void		ft_rotate_plane(void);
    gameobject	create_spaceship();
    void        draw_sprite(gameobject obj);
    void        clear_screen();

    //terminal.c
	
#endif