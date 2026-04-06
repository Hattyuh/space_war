#include "space.h"

void ft_putnbr(int nb)
{
    char c;
    
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        nb = -nb;
        write(1, "-", 1);
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    c = nb % 10 + '0';    
    write(1, &c, 1);    
}

int ft_atoi(char *str)
{
    int nb;
    int i;
    int change;
    
    nb = 0;
    i = 0;
    change = 1;
    while (ft_is_char_whitespace(str[i]) == 1)
            i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            change = -change;
        i++;
    }
    while (ft_in_char_numerical(str[i]) == 1)
    {
        nb = nb * 10 + str[i] - '0';
        i++;
    }   
    return (nb * change);
}

int ft_is_char_whitespace(char c)
{
    if (c == ' ' || c == '\t' 
        || c == '\n' || c == '\v' 
        || c == '\f' || c == '\r')
    {
        return (1);
    }
    return (0);
}

int ft_is_char_printable(char c)
{
    if (32 <= c && c <= 126)
        return (1);
    return (0);
}

int ft_in_char_numerical(char c)
{
    if ('0' <= c && c <= '9')
        return (1);
    return (0);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    if (n == 0)
        return (0);
    while (i < n && s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);    
}

char *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }   
    dest[i] ='\0';
    return (dest);
}

char *ft_strdup(char *str)
{
     char *copy;
     copy = malloc((ft_strlen(str) + 1) * sizeof(char));
     if (!copy)
         return (NULL);
     copy = ft_strcpy(copy, str);
     return (copy);
}

int ft_strlen(char *str)
{
    int len;
    
    len = 0;
    while (str[len])
        len++;
    return (len);
}

char *get_input(void)
{
    char *buffer[100];
    int byte;
    char *input;
    
    byte = read(0, buffer, 99);
    input = malloc(byte + 1);
    //ft_strcpy(input, buffer);
    return (input);
}
