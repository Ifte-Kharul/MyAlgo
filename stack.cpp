#include<bits/stdc++.h>
using namespace std;

int Stack[100];
int top=-1;

void push(){
    if(top==99)
    {
        cout<<"Stack is full\n";

    }
    else{
        cout<<"Enter an integer to push\n";
        top++;
        cin>>Stack[top];
    }
}
void pop(){
 if(top<0)
 {
     cout<<"stack is empty\n";
 }
 else{
    cout<<Stack[top]<<" Popped out from stack\n";
    top--;

 }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<Stack[i]<<endl;
    }
}
int main()
{
     int n;

     while(1)
     {
       cout<<"Enter Your Choice\n1.push \n2.pop \n3.display \n4.quit\n";
       cin>>n;
       switch(n){
           case 1:push();
                 break;
           case 2: pop();
                   break;
           case 3: display();
                    break;
           case 4: exit(1);
                  break;
       }
     }
     return 0;
}
