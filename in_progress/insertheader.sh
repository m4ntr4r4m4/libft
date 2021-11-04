for f in *.c
       awk -v filename="$f" '
                NR==12 {print "\#\include \"\libft.h\""}1
        ' $f

