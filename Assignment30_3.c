//Write a program which return addition of all even elemnt from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    
    if(*Head == NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head,int No)
{
    PNODE newn = NULL;
    PNODE Temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    
    if(*Head == NULL)
    {
        *Head=newn;
    }
    else
    {
         while(Temp->next!=NULL)
        {
            Temp = Temp -> next;
        }
         Temp->next = newn;
    }
}
void Display(PNODE Head)
{
    printf("Element of linked list are :\n");

    while(Head != NULL)
    {
        printf("| %d | ->",Head->data);
        Head = Head->next;
        
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}
void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)  //case1
    {
        return;
    }
    else if((*Head) -> next == NULL)   //case2
    {
        free(*Head);
        *Head = NULL;
    }
    else        //case3
    {
        *Head = (*Head)->next;
        free(Temp);
    }
}
void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;

     if(*Head == NULL)    
    {
        return;
    }
    else if((*Head) -> next == NULL)     
    {
        free(*Head);
        *Head = NULL;
    }
    else    
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp -> next;
        }
        free(Temp -> next);
        Temp -> next = NULL;
    }
}
void InsertAtPos(PPNODE Head,int No,int iPos)
{
    int size = 0;

    size = Count(*Head);
    PNODE newn = NULL;
    int i=0;
    PNODE Temp = *Head;

     if((iPos<1) || (iPos>size+1))
     {
        printf("Invalid Position\n");
        return;
     }
    if(iPos == 1)
    {
        InsertFirst(Head,No);
    }
    else if(iPos == size+1)
    {
        InsertLast(Head,No);
    }
    
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for(i=1;i<iPos-1;i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
}
void DeleteAtPos(PPNODE Head,int iPos)
{
    int size = 0;

    size = Count(*Head);
    PNODE Temp = *Head;
    PNODE targetednode = NULL;
    int i = 0;

    
     if((iPos<1) || (iPos>size))
     {
        printf("Invalid Position\n");
        return;
     }
    
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == size+1)
    {
        DeleteLast(Head);
    }
    
    else
    {
        for(i=1;i<iPos-1;i++)
        {
            Temp = Temp->next;
        }
        targetednode = Temp->next;

        Temp->next = Temp->next->next;
        free(targetednode);
    }
}
int SumEvenElements(PNODE Head)
{
    int sum = 0;

    while (Head != NULL)
    {
        if (Head->data % 2 == 0)
        {
            sum += Head->data;
        }
        Head = Head->next;
    }

    return sum;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    Display(First);
    iRet = Count(First);
    printf("Number of element are : %d\n",iRet);

    int sumEven = SumEvenElements(First);
    printf("Sum of even elements: %d\n", sumEven);

    // InsertLast(&First,111);
    // Display(First);
    // iRet = Count(First);
    // printf("Number of element are : %d\n",iRet);

    return 0;
}