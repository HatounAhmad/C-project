#include <iostream>
#include <string>
using namespace std;
struct node{
char info;
node *next;
};
class stack{
private:
    node *top;
public:
stack(){top=NULL;}
bool isEmpty();
void push(char);
char pop();
void traverse();
char peak();
};
bool stack::isEmpty(){
if (top==NULL)
return true;
else
return false; }

void stack :: push ( char item ) {
node *p = new node;
p->info=item;
p->next= top;
top=p; }

char stack :: pop () {
if (isEmpty()){
cout<<"underflow\n";
return '0'; }
else { node *t = top;
char x = top-> info;
top = top->next;
delete t;
return x;
}}

void stack :: traverse () {
if (isEmpty()) { cout<<"empty\n"; }
else {
for ( node *curr = top ; curr ; curr=curr->next ){
cout<<curr->info<<" ";
}}}

char stack :: peak() {
if (isEmpty()) {
cout<<"empty\n";
return '0';
}
return top->info;
}

bool IsOperand(char);
bool prcd(char,char);
int GetOperator(char);
int main(){
    stack opstk;
    int i=0,n;
    string infix,postfix;
    char symb;
  cout<<"Enter an infix arithmetic expression:\n";
  getline(cin,infix);
  n=infix.length();
  while(i<n){
    char topsym;
    symb=infix[i];
    if(IsOperand(symb))
        postfix+=symb;
    else{
        while(!opstk.isEmpty()&&prcd(opstk.peak(),symb))
        {  topsym=opstk.pop();
            postfix+=topsym;
        }
        if(opstk.isEmpty()||symb!=')')
            opstk.push(symb);
        else
        topsym=opstk.pop();
        }
    i++;} //End of while

    while(!opstk.isEmpty()){
        char topsymb=opstk.pop();
        postfix+=topsymb;
    } //END OF while

    cout<<"postfix expression :\n"<<postfix;
    return 0;
}
bool IsOperand(char symb)
{
if( symb >= 'A' && symb <= 'Z')
return true;
if (symb >= 'a' && symb <= 'z')
return true;
if(symb >= '0' && symb <= '9')
return true;
return false;
}

bool prcd(char a ,char op){
if(op=='('||a=='(')
return false;

int top = GetOperator(a);
int currsymb = GetOperator(op);
if (top == currsymb)
{
if (a == '^' )
return false;

return true;
}
if(top>currsymb){
return true;}
return false;
}
int GetOperator(char op)
{
if(op == '+' || op == '-')
return 1;
if (op == '*' || op == '/'||op=='%')
return 2;
if(op == '^')
return 3;

return 0;
}
