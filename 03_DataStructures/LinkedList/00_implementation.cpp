#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;

Node *p, *q, *head = NULL, *tail = NULL;

void createAtStart()
{
    p = (Node *)malloc(sizeof(Node));
    std::cout << "Enter data: ";
    cin >> p->data;

    if (head == NULL)
    {
        head = p;
        p->next = NULL;
    }
    else
    {
        p->next = head;
        head = p;
    }
}

void createAtEnd()
{
    p = (Node *)malloc(sizeof(Node));

    cout << "Enter data: ";
    cin >> p->data;

    if (head == NULL)
    {
        head = p;
        p->next = NULL;
    }
    else
    {
        q = head;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
        p->next = NULL;
    }
}

void createAtGivenLocation() {}
void deleteAtStart() {}
void deleteAtEnd() {}
void deleteAtGivenLocation() {}
void traverse()
{
    q = head;
    if (head == NULL)
    {
        cout << "Linked List is Empty" << endl;
    }
    else
    {
        while (q != NULL)
        {
            cout << q->data << " ";
            q = q->next;
        }
        cout << endl;
    }
}

int main()
{
    int i = 0;
    do
    {
        std::cout << "Choose Option: ";
        std::cin >> i;

        switch (i)
        {
        case 1:
            createAtStart();
            break;

        case 2:
            createAtEnd();
            break;

        case 3:
            createAtGivenLocation();
            break;

        case 4:
            deleteAtStart();
            break;

        case 5:
            deleteAtEnd();
            break;

        case 6:
            deleteAtGivenLocation();
            break;

        case 7:
            traverse();
            break;

        case 8:
            break;

        default:
            std::cout << "Wrong Input" << endl;
            break;
        }

    } while (i != 8);

    std::cout << "Exit......." << endl;

    return 0;
}