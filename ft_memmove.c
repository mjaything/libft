#include "libft.h"

void    *memmove(void *dst, const void *src, size_t len)
{
    void    *buf;

    if (!(buf = (void *)malloc(lne * sizeof(void *))))
        return (NULL);
    ft_memcpy(buf, src, len);
    ft_memcpy(dst, buf, len);
    free(buf);
    return (dst);
}
