#include <stdio.h>
 
int main(){
int a = 27;
int b = 19;
int c = 22;

printf("!(!a) = %d\n",!(!a));

printf("!a = %d\n",!a);


printf("a | a = %d\n",a | a);

printf("a | !a = %d\n",a | !a);


printf("!a | !b = %d = %d =!(a & b)\n", !a | !b, !(a & b));


printf("!a & !b = %d = %d =!(a | b)\n", !a & !b, !(a | b));



printf("a & b = %d \n", a & b);


printf("a & !a = %d \n", a & !a);


printf("a | b = %d = b | a \n", b | a);


printf("a & b = %d = b & a \n", b & a);


printf("(a | b) | c = %d = %d = a | (b | c)\n", (a | b) | c, a | (b | c));


printf("(a & b) & c = %d = %d = a & (b & c)\n", (a & b) & c, a & (b & c));


printf("a & b | a & c = %d = %d = a & (b | c)\n", a & b | a & c, a & (b | c));


printf("(a | b) & (a | c) = %d = %d = a | (b & c)\n", (a | b) & (a | c), a | (b & c));


printf("a | a & b = %d = %d = a\n", a | a & b, a);


printf("a & b | a & !b = %d = %d = b\n", a & b | a & !b, b);


printf("(a & b) | (!a & c) | (b & c) = %d = %d = (a & c) | (!a & c)\n", (a & b) | (!a & c) | (b & c), (a & b) | (!a & c));


printf("(a | b) & (!a | c) & (b | c) = %d = %d = (a | b) & (!a | c)\n", (a | b) & (!a | c) & (b | c), (a | b) & (!a | c));


printf("a & (a | b) = %d = %d = a\n", a & (a | b), a);

printf("(a | b) & (a | !b) = %d = %d = a\n", (a | b) & (a | !b), a);


 


return 0;
}
