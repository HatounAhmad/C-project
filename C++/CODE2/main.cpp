#include <iostream>
#include<string>
#include<math.h>
using namespace std;
struct node{
   double info;
    node *next;
};
class stack2{
   private:
       node *top;
   public:
stack2(){top=NULL;}
bool isEmpty();
void push(double);
double pop();
double peak();
};

bool stack2::isEmpty(){
if (top==NULL)
return true;
else
return false; }

void stack2 :: push ( double item ) {
node *p = new node;
p->info=item;
p->next= top;
top=p; }

double stack2 :: pop () {
if (isEmpty()) {
cout<<"underflow\n";
return -1; }
else {
node *t = top;
double x = top-> info;
top = top->next;
delete t;
return x;
}}

double stack2 :: peak() {
if (isEmpty()) {
cout<<"empty\n";
return 0;
}
return top->info;
}

double operation(double op1, double op2, char symb) {
   switch(symb){
   case '+':
      return (op1+op2);
   case '-':
      return (op1-op2);
   case '*':
     return (op1*op2);
  case '/':
      return (op1/op2);
   case '^':
      return pow(op1,op2);
   case '%':
    return fmod(op1,op2);
   }
    return 0;
}

double evaluate(string postfix){
  stack2 opstk;
int i=0;
char symb;
double opnd1,opnd2,value;

while(postfix[i]!='\0'){
    symb=postfix[i];
       if (symb >= '0' && symb <= '9')
           opstk.push((double)(symb - '0'));
        else{
             opnd2=opstk.pop();
             opnd1=opstk.pop();
            value=operation(opnd1,opnd2,symb);
            opstk.push(value);
}
    i++;
}
    return (opstk.pop());
}

int main()
{
    string postfix;
    cout << "Enter postfix expression:";  //   245/53-5^4^*+       623+-382/+*2^3+
    cin>>postfix;
     cout<<endl<<postfix<<" will evaluate to --> "<<evaluate(postfix)<<endl;
}





