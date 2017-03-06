#include"iostream"
using namespace std;
class node
{
public:
    node()
    {
        link=NULL;
    }
    int data;
    node* link;
};
class linkedlist
{
    public:
    node *p,*x,*h,*t;
    void create();
    void searchfromlast();

};
void linkedlist::create()                                    //function for creating the linked list
{
        int n;
        cout<<"Enter the number of nodes:";
        cin>>n;
        if(n>=1)
        {
            cout<<"Enter data";
            x=new node();
            cin>>x->data;
            p=x;
            h=p;
            for(int i=1;i<n;i++)
            {
                x=new node();
                cin>>x->data;
                p->link=x;
                p=x;
            }
            cout<<"LINKED LIST CREATED";

        }
        else
            cout<<"LINKED LIST CANNOT BE CREATED";
        p=h;
}
void linkedlist::searchfromlast()                                             //function for searching the element from the last.
{
            int fl,i=0;
            cout<<"\nEnter the kth element from the last:";
            cin>>fl;
            while(p->link!=NULL)
            {
                i++;
                if(i==fl-1)
                {
                    t=h;
                }
                p=p->link;
                if(i>fl-1)
                {
                    t=t->link;
                }
            }
            cout<<"The kth element from the last is: "<<t->data;
}
int main()
{
    linkedlist ll;                                        //creating the object
    ll.create();
    ll.searchfromlast();
}
