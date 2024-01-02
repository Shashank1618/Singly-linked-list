//  Creation of Singly linked list

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int DATA;
    struct node *LINK;
};

int main()
{
    int ch;
    struct node *FIRST = (struct node *)malloc(sizeof(struct node)); // for first node
    if (FIRST == NULL)
    {
        cout << "Write Underflow";
    }

    cout << "Enter data: ";
    cin >> (FIRST->DATA);
    cout << (FIRST->DATA);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr = FIRST;
    cout << (ptr->DATA);
    cout << endl
         << "Enter your Choice" << endl
         << "1 For Insertion" << endl
         << "0 For Stop" << endl;

    while (1)
    {
        cout << "Enter your choice:";
        cin >> ch;
        if (ch == 0)
        {
            break;
        }
        struct node *temp = (struct node *)malloc(sizeof(struct node));

        cout << "Enter data for insertion:";
        cin >> (temp->DATA);
        temp->LINK = NULL;
        ptr->LINK = temp;
        ptr = temp;
    }

    /*LOOP FOR OUTPUT
     When we write the output using FIRST node the we lost the name of FIRST node
    as it becomes the last node while traversing it.*/
    while (FIRST != NULL)
    {
        cout << " " << (FIRST->DATA);
        FIRST = FIRST->LINK;
    }
    return 0;
}
