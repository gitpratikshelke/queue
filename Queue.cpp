#include<iostream>
using namespace std;
class queue{
    int q[10];
    int f,r;
    public :queue()
    {
        f=r=-1;
    }
    void enqueue(int x);
    int dequeue();
    int isEmpty();
    int isFull();
    void display();
    int showFront();

};
int queue::isFull(){

    if((r+1)==10)
        return 1;
    return 0;


}
int queue::isEmpty()
{

  if(f==-1)
        return 1;
    return 0;
}
void queue::enqueue(int x)
{
    if(isFull())
    {
        cout<<"queue is full:";
        return ;
        }
    else if(isEmpty())
    f=r=0;
    else
    r++;

    q[r]=x;

}

int queue::dequeue()
{
    int x;
    if(isEmpty())
        cout<<"queue is Empty:";
    else if(f==r)
    {
        x=q[f];
        f=r=-1;

    }
    else{
        x=q[f];
        f++;
    }
    return x;
    }
void queue::display()
{
    if(isEmpty())
    {
        cout<<"queue is empty:";
    }
    else
    {
        for(int i=f;i<=r;i++)
        {
            cout<<q[i];
        }
    }
}
int queue ::showFront()
{

    if(!isEmpty())
        return q[f];
}
int main()
{
    int x;
    queue p;
    p.enqueue(x);
    p.dequeue();
    p.display();
    p.isEmpty();
    p.isFull();
   p.showFront();




}



