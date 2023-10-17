#include <iostream>

using namespace std;

struct node{
int data;
node *link;
};
class Stack{
private:
node *top;
public:
Stack(){
top=NULL;
}
void pushValue(int i);
int popValue();
void viewTop();
void viewAll();
~Stack(){
if(top == NULL)
return;
node *temp;
while(top != NULL)
{
temp = top;
top = top->link;
delete temp;
}
}
};
void Stack::pushValue(int i)
{
node *temp;
temp = new node;
temp->data = i;
temp->link = NULL;
if( top == NULL)
{
top = temp;
}
else
{
temp->link = top;
top = temp;
}
}
int Stack::popValue()
{
node *temp;
int n;
if( top == NULL)
{
cout<<"Stack Empty"<<endl;
return NULL;
}
else
{
n = top->data;
temp= top;
top = top->link;
delete temp;
}
return n;
}
void Stack::viewTop()
{
if( top == NULL)
{
cout<<"Stack Empty"<<endl;
}
else
{
cout<<"Top is: "<< top->data;
}

}
void Stack::viewAll()
{
node *temp;
temp = top;
while(temp->link != NULL)
{
cout << temp->data <<endl;
temp= temp->link;
}
}

int main()
{ Stack s;
int temp;
int pilihan;
while(1)
{
cout<<"Stack"<<endl;
cout<<"1.Push Data"<<endl;
cout<<"2.View Top"<<endl;
cout<<"3.Pop Data"<<endl;
cout<<"4.View All Data"<<endl;
cout<<"5.Exit"<<endl;
cout<<"Enter your choice:";
cin>>pilihan;
switch(pilihan)
{
cout<<endl;
case 1:
cout<<"Insert Data:"<<endl;
cin>>temp;
s.pushValue(temp);
break;
case 2:
s.viewTop();
break;
case 3:
temp= s.popValue();
cout<<temp<< "has removed"<<endl;
break;
case 4:
s.viewAll();
break;
case 5:
return 0;
}

return 0;
}
