#include <iostream>
#include <string>

using namespace std;

class list;
class node
{
    string prn;
    string name;
    node *next;

public:
    node(string p, string n)
    {
        this->prn = p;
        this->name = n;
        next = NULL;
    }
    friend class list;
};

class list
{
    node *start;

public:
    list()
    {
        start = NULL;
    }

    void create();
    void display();
    void insertAtBeginning();
    void insertAtEnd();
    void insertAfter();
    void deleteAtFirst();
    void deleteByValue();
    void deleteAtEnd();
    int computeTotal();
    void concatList(list &q1);
};

void list::create()
{
    string Prn;
    string Name;
    if (start == NULL)
    {
        cout << "Enter PRN number: ";
        cin >> Prn;
        cout << "Enter name: ";
        cin >> Name;
        start = new node(Prn, Name);
        cout << "List has been created!\n";
    }
    else
    {
        cout << "\nList is already created.";
    }
}

void list::display()
{
    node *t;
    t = start;
    if (start == NULL)
        cout << "\n=============== Empty List ===============";
    else
    {
        cout << "\n=============== List: ===============\n";
        while (t != NULL)
        {
            cout << t->prn << " " << t->name << " \n";
            t = t->next;
        }
    }
}

void list::insertAtBeginning()
{
    string Prn;
    string Name;
    node *temp;
    if (start == NULL)
    {
        create();
    }
    else
    {
        cout << "\nEnter PRN Number : ";
        cin >> Prn;
        cout << "Enter Name : ";
        cin >> Name;
        temp = new node(Prn, Name);
        temp->next = start;
        start = temp;
        ;
        cout << "Inserted" << temp->name << "in the beginning";
    }
}

void list::insertAtEnd()
{
    string Prn;
    string Name;
    node *t;
    if (start == NULL)
        create();
    else
    {
        cout << "\nEnter PRN Number : ";
        cin >> Prn;
        cout << "Enter Name : ";
        cin >> Name;
        t = start;
        while (t->next != NULL)
            t = t->next;
        node *p = new node(Prn, Name);
        t->next = p;
    }
}

void list::insertAfter()
{
    string PRN;
    cout << "\nEnter PRN No. after do you want insert : ";
    cin >> PRN;
    node *t;
    t = start;
    string Name;
    string Prn;
    int flag = 0;
    while (t != NULL)
    {
        if (t->prn == PRN)
        {
            flag = 1;
            break;
        }
        t = t->next;
    }
    if (flag == 1)
    {
        node *p;
        cout << "\nEnter PRN Number : ";
        cin >> Prn;
        cout << "Enter Name : ";
        cin >> Name;
        p = new node(Prn, Name);
        p->next = t->next;
        t->next = p;
    }
    else
    {
        cout << "\n"
             << PRN << " is not in list.";
    }
}


void list::deleteAtFirst()
{
    node *t;
    if (start == NULL)
        cout << "\nClub is Empty..";
    else
    {
        t = start;
        start = start->next;
        t->next = NULL; // Not necessary

        delete t;
        cout << "\nPresident deleted..";
    }
}

void list::deleteByValue()
{
    string no;
    int flag = 0;
    node *t, *prev;
    if (start == NULL)
        cout << "\nList/Club is empty";
    else
    {
        cout << "\nEnter PRN No. of member to be deleted : ";
        cin >> no;
        t = start->next; // t=start if we have to delete president also..start->next is first member
        while (t->next != NULL)
        {
            if (t->prn == no)
            {
                flag = 1;
                break;
            }
            prev = t;
            t = t->next;
        }
        if (flag == 1)
        {
            prev->next = t->next;
            t->next = NULL;
            delete t;
            cout << "\nMember with PRN No: " << no << " is deleted.";
        }
        else
            cout << "\nMember not found in List./President or Secretary cannot be deleted.";
    }
}

void list::deleteAtEnd()
{
    node *t, *prev;
    t = start;
    if (start == NULL)
        cout << "\nClub is Empty..";
    else
    {

        while (t->next != NULL)
        {
            prev = t;
            t = t->next;
        }
        prev->next = NULL;
        delete t;
        cout << "\nSecretary Deleted.";
    }
}
int list::computeTotal()
{
    node *t;
    int
        count = 0;
    t = start;
    if (start == NULL)
    {
        cout << "\nList is empty.";
        return 0;
    }
    while (t != NULL)
    {
        count++;
        t = t->next;
    }
    return count;
}

void list::concatList(list &q1)
{

    node *t, *p;
    t = q1.start;
    if (t == NULL)
    {

        cout << "\nList 2 is empty";

        return;
    }
    p = start; // first
    // list
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = t;
    q1.start = NULL; // second
                     // list is set
                     // to
                     //             null
    cout<< "\nAfter concatenation list : \n";

    display();
}


int main()
{
    list *l;
    int choice, selectList;
    list l1, l2;
    l = &l1;

X:
    cout << "\nSelect List\n1.List 1\n2.List 2\nEnter choice : ";

    cin >> selectList;
    if (selectList == 1)
    {
        l = &l1;
    }
    else if (selectList == 2)
    {
        l = &l2;
    }
    else
    {
        cout << "\nWrong list Number.";
        goto X;
    }

    do
    {
        cout << "\n =============== Menu ===============";
        cout << "\n1. Create\n2. Insert President\n3. Insert secretary\n4. Insert after position(member)\n5. Display selected list";
        cout<<"\n6. Delete President\n7. Delete Secretart\n8. Delete Member\n9. Find total no. of members\n10. Concatenate list";
        cout<<"\n11. Select list\n12. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            l->create();
            break;

        case 2:
            l->insertAtBeginning();
            break;

        case 3:
            l->insertAtEnd();
            break;

        case 4:
            l->insertAfter();
            break;

        case 5:
            l->display();
            break;

        case 6:
            l->deleteAtFirst();
            break;

        case 7:
            l->deleteAtEnd();
            break;
        
        case 8:
            l->deleteByValue();
            break;
        
        case 9:
            cout << "\nTotal members(including President & Secretary) : " << l->computeTotal();
            break;

        case 10:
            l1.concatList(l2);
            break;
            
        case 11:
            goto X;
            break;

        default:
            break;
            // cout << "Wrong choice :(";
        }

    } while (choice != 0);

    cout << "\n =============== Program Teriminated ===============\n";
}
