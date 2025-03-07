 #include <stdio.h>

void reverse_string ( char * str )
{  
   int length = 0;
while (str[length]!='\0') {
    length++;}   //string length function

    length--; //adjust variable to point to last character in string
    int rev = 0; //variable pointing at the start of the string
  
while (rev < length) { //loop to the middle of the string
    char temp = str[rev];//store the character corresponding to rev in temp 
    str[rev] = str[length];//overwrite the character stored in rev with the one in lenght
    str[length] = temp;//overwrite the charachter in lenght position with the one stored in temp
    rev++;//incremebt rev up
    length--;//decrement lenght
}}


int main ( void )
{
char test1 [] = " edoc fo esuoH oT emocleW " ;
char test2 [] = " uoy pleh lliw ti ;3 melborp ni noitcnuf siht esU " ;
char test3 [] = " Hello World " ;
char test4 [] = " G " ;
printf ("Before:%s\n",test1) ;
reverse_string ( test1 ) ;
printf ("After:%s\n\n",test1) ;
printf ("Before:%s\n",test2) ;
reverse_string ( test2 ) ;
printf ("After:%s\n\n",test2) ;
printf ("Before:%s\n",test3) ;
reverse_string ( test3 ) ;
printf ("After:%s\n\n",test3) ;
printf ("Before:%s\n",test4) ;
reverse_string ( test4 ) ;
printf ("After:%s\n\n",test4) ;
return 0;}