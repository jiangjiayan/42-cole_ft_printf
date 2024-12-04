# 42_school_ft_printf
## Suject:
ft_printf
Because ft_putnbr() and ft_putstr() aren’t enough

Cette project refait le fonction de printf() dans la bibliothèque de <stdio.h>.
Dans les code,on fait :

•%c Prints a single character.

• %s Prints a string (as defined by the common C convention).

• %p The void * pointer argument has to be printed in hexadecimal format.

• %d Prints a decimal (base 10) number.

• %i Prints an integer in base 10.

• %u Prints an unsigned decimal (base 10) number.

• %x Prints a number in hexadecimal (base 16) lowercase format.

• %X Prints a number in hexadecimal (base 16) uppercase format.

• %% Prints a percent sign.

Et encore ajouter le cas "print(0)",il va sortir -1.

Pour makefile, on va aller à Libft d’abord et fais make pour obtenir libft.a et copyer libft.a à le document de ft_printf. 

## Test

```bash
git clone https://github.com/Tripouille/printfTester.git
cd printfTester
make
```

Si on regarde quelques erreurs,on peut utiliser la fiche main.c pour regarder la trace. Normalment tous les résultats et tous les nombres sont pareils dans printf et ft_printf.
