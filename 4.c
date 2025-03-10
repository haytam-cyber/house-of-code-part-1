# include <stdio.h>
# include <stdbool.h>

 bool isValid ( const char * str )
{
    char stack[strlen(str)]; //Create empty stack
    int top = -1; //Stack pointer initialized to -1 show it's empty
     for (int i=0;str[i]!='\0';i++) { //Traverse through each character in the string
        char ch = str[i];
        if (ch=='('||ch=='{'||ch=='[') { //If it's an opening bracket add it to stack
            stack[++top]=ch; //Increment top and push the opening bracket
        }
        else if (ch==')'||ch=='}'||ch==']') {//If it's a closing bracket check if the stack is empty or mismatched
            if (top== -1) { //Check if the stack is empty
                return false;//no opening bracket present
            }
            char last = stack[top--];//Pop last element from stack
            if ((ch ==')' &&last!='(') ||
                (ch =='}' &&last!='{') ||
                (ch ==']' &&last!='[')) {//Check if the popped element matches the current closing bracket
                return false; //incorrect order
            }}}
    //If stack is empty it's balanced
    return top == -1;}

 int main ( void )
 {
 const char * test1 = " () " ;
 const char * test2 = " [{() }] " ;
 const char * test3 = " {[( a + b ) * x } " ;
 const char * test4 = " {[ a + b ]*( x / y ) } " ;

 printf ("Test 1:%s\n",test1);
 printf ("Is valid:%d\n", isValid (test1));

 printf ("Test 2:%s\n",test2);
 printf ("Is valid:%d\n", isValid (test2));

 printf ("Test 3:%s\n",test3);
 printf ("Is valid:%d\n", isValid (test3));

 printf ("Test 4:%s\n",test4);
 printf ("Is valid:%d\n", isValid (test4));

 return 0;
 }
