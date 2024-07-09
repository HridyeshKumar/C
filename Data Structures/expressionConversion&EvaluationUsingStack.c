#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char item) {
if(top >= MAX-1)
printf("\nStack Overflow.");
else {
top = top+1;
stack[top] = item;
}
}
char pop() {
char item;
if(top < 0) {
printf("stack under flow: invalid infix expression");
getchar();
exit(1);
} else {
item = stack[top];
top = top-1;
return(item);
}
}
int is_operator(char symbol) {
if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
return 1;
else
return 0;
}
int precedence(char symbol) {
if(symbol == '^')
return(3);
else if(symbol == '*' || symbol == '/')
return(2);
else if(symbol == '+' || symbol == '-')
return(1);
else
return(0);
}
void InfixToPostfix(char infix_exp[], char postfix_exp[]) {
int i, j;
char item;
char x;
push('(');
strcat(infix_exp,")");
i=0;
j=0;
item=infix_exp[i];
while(item != '\0') {
if(item == '(')
push(item);
else if( isdigit(item) || isalpha(item)) {
postfix_exp[j] = item;
j++;
} else if(is_operator(item) == 1) {
x=pop();
while(is_operator(x) == 1 && precedence(x)>= precedence(item)) {
postfix_exp[j] = x;
j++;
x = pop();
}
push(x);
push(item);
} else if(item == ')') {
x = pop();
while(x != '(') {
postfix_exp[j] = x;
j++;
x = pop();
}
} else {
printf("\nInvalid infix Expression.\n");
getchar();
exit(1);
}
i++;
item = infix_exp[i];
}
if(top>0) {
printf("\nInvalid infix Expression.\n");
getchar();
exit(1);
}
postfix_exp[j] = '\0';
}
int stack_int[MAX];
int top_int = -1;
void push_int(int item) {
if(top_int >= MAX-1)
printf("\nStack Overflow.");
else {
top_int = top_int+1;
stack_int[top_int] = item;
}
}
char pop_int() {
int item;
if(top_int < 0) {
printf("stack under flow");
getchar();
exit(1);
} else {
item = stack_int[top_int];
top_int = top_int-1;
return(item);
}
}
void EvalPostfix(char postfix_exp[]) {
int i;
char ch;
int val;
int A, B;
for(i=0; postfix_exp[i] != '\0'; i++) {
ch = postfix_exp[i];
if(isdigit(ch)) {
push_int(ch-'0');
} else if(is_operator(ch) == 1) {
A = pop_int();
B = pop_int();
switch(ch) {
case '*':
val = B * A;
break;
case '/':
val = B / A;
break;
case '+':
val = B + A;
break;
case '-':
val = B - A;
break;
case '^':
val = pow(B,A);
break;
default:
printf("\nInvalid operator");
getchar();
exit(1);
}
push_int(val);
}
}
val = pop_int();
printf("Value of expression: %d", val);
}
int main() {
char infix[MAX], postfix[MAX];
printf("\nEnter Infix expression : ");
gets(infix);
InfixToPostfix(infix,postfix);
printf("Postfix Expression: ");
puts(postfix);
EvalPostfix(postfix);
return 0;
}
