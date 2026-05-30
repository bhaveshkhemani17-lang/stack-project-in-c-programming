#include<iostream>
#include<conio.h>
using namespace std;
class Stack
{
public:

    int ST[10];
};
class StackOperation : public Stack
{
public:
    int TOP,MaxSize;
    StackOperation()
    {
        TOP = -1;
        cout<<"Enter Size of Stack -- ";
        cin>>MaxSize;
    }
    int push()
    {
        system("cls");
        cout<<"Push in Stack Module..\n\n";
        int DATA,PS=0;
        cout<<"Enter Element You Want to Insert -- ";
        cin>>DATA;
        if(TOP == MaxSize-1){
            cout<<"Stack is Overflow .. \n\n";
            return 0;
        }
        if(TOP == -1){
            TOP=0;
            ST[TOP]=DATA;
            PS=1;
        }
        else{
            TOP=TOP+1;
            ST[TOP]=DATA;
            PS=1;
        }
        if(PS==1){
            cout<<"\n\nData Successfully Inserted..\n\n";
        }
    }
    int pop()
    {
        system("cls");
        cout<<"POP from STACK Module..\n\n";
        if(TOP == -1){
            cout<<"Stack is Underflow/ Empty .. \n\n";
            return 0;
        }
        ST[TOP]=0;
        TOP=TOP-1;
        cout<<"\n\nData Deleted Sucessfully\n\n";
    }
    int peek()
    {
        if(TOP == -1){
            cout<<"\n\nStack is Empty..\n\n";
            return 0;
        }
        cout<<"Stack Elements are -- \n\n";
        for(int i=TOP;i>=0;i++){
            cout<<ST[i]<<" -> ";
        }
        cout<<"\n\n";
    }
    void MainModule()
    {
        system("cls");
        cout<<"\tStack Operation -- \n\n";
        cout<<"1. Push.. \n";
        cout<<"2. Pop.. \n";
        cout<<"3. Peek.. \n";
        cout<<"4. Exit.. \n";
        cout<<"Choose any One of them..\n";
        char c = getch();
        if(c=='1'){
            push();
        }
        else if(c=='2'){
            system("cls");
            pop();
        }
        else if(c=='3'){
            system("cls");
            cout<<"Peek / Traversal Module..\n\n";
            peek();
        }
        else if(c=='4'){
            exit(0);
        }
        cout<<"\n\nDo you want to continue.. Press 1 else any key..";
        c = getch();
        if(c=='1'){
            MainModule();
        }
    }
};
int main()
{
    StackOperation r;
    r.MainModule();
    cout<<"\n\nThank You for using My App";
}
