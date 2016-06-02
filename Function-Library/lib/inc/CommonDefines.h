

/** Common color definitions **/

#define BLACK 0
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define	MAGENTA 5
#define CYAN 6
#define WHITE 7

/** Graphics rendition **/

#define setFColor(i) printf("\33[%dm", 30+i) 
#define setBColor(i) printf("\33[%dm", 40+i)
#define resetColor() printf("\33[39;49m")
#define setFRGB(r,g,b) printf("\33[38;5;%d;%d;%dm", r, g, b)
#define setBRGB(r,g,b) printf("\33[48;5;%d;%d;%dm", r, g, b)

/** cursor manipulation **/

#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))
#define hidecur() printf("\033[?25l")
#define showcur() printf("\033[?25h")
#define savecur() printf("\33[s")
#define restorecur() printf("\33[u")
#define curup(n) printf("\33[%dA", n)
#define curdown(n) printf("\33[%dB", n)
#define curforward(n) printf("\33[%dC", n)
#define curbackward(n) printf("\33[%dD", n)


/** console io operation **/

#define clear() printf("\033[H\033[J")
#define clrscr(n) printf("\33[%dJ", n)
#define erase(n) printf("\33[%dK", n)

/** text formatting **/

#define setBold() printf("\33[1m")
#define setItalic() printf("\33[3m") // not widely supported.
#define setUnderline() printf("\33[4m")
#define resetAll() printf("\33[0m")
#define setFont(n) printf("\33[%dm", n)

