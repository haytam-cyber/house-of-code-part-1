#include <stdio.h>

void reverse_string ( char * str )
{  
   int length = 0;
while (str[length]!='\0') {
    length++;}
    length--; 
    int rev = 0; 
while (rev < length) { 
    char temp = str[rev];
    str[rev] = str[length];
    str[length] = temp;
    rev++;
    length--; }}//funtion to reverse the entire string
    
void reverse_words(char *str) {
    reverse_string(str);
    int start = 0 , end = 0;
while (str[end] != '\0') { 
    while (str[end] != ' ' && str[end] != '\0') { //Find the end of the current word
        end++;
    } 
    int wordend = end-1; //initialise variable wordend to point at last character in word
    while (start < wordend) { //same function as problrm 2
        char temp = str[start];
        str[start] = str[wordend];
        str[wordend] = temp;
        start++;
        wordend--;
    }
    end++; 
    start = end; //initialise start and end variables to the start of next word
}}

int main ( void )
 {
 char test1 [] = " The dragons are coming " ;
 char test2 [] = " code love I " ;
 char test3 [] = " G " ;

 printf ("Before:%s\n",test1) ;
 reverse_words (test1);
 printf ("After:%s\n\n",test1) ;

 printf ("Before:%s\n",test2) ;
 reverse_words ( test2 ) ;
 printf ("After:%s\n\n",test2) ;

 printf ("Before:%s\n",test3) ;
 reverse_words ( test3 ) ;
 printf ("After:%s\n\n",test3) ;

 return 0;
 }

