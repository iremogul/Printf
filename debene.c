#include <stdio.h>
#include <stdarg.h>

int main()
{
    // int sonuc = printf("%ü");
    // ft_printf("%d", sonuc);
    // printf("%d\n", ft_printf("%ü\n","asd")); // HATA VAR
    // printf("%d\n", printf("%ü\n","asd"));

    // printf("%d\n", ft_printf("%zu")); // Belki - 1 dönülebilir
    // printf("%d\n", printf("%zu"));


    printf("%d\n", ft_printf("%s as %d\n%", "sa", 12)); // Belki - 1 dönülebilir
    printf("%d\n", printf("%s as %d\n%", "sa", 12));

    return 0;
}
