#include <stdio.h>
#include <stdlib.h>

typedef struct r
{
    char name[20];
    int ID;
    int math, comput;
    float AVG;
}R;

typedef struct node
{
    R data;
    struct node* next;
}Node;

typedef Node* NodePtr;

void insert(NodePtr* sPtr);
void delete(NodePtr* sPtr, unsigned int ID);
void printList(NodePtr currentPtr);

int main(void)
{
    NodePtr startPtr = NULL;
    unsigned int a,b;
    printf_s("1.新增學生資料\n2.刪除學生資料\n3.結束\n請輸入1~3:");
    scanf_s("%u", &a);

    while (a != 3)
    {
        if (a == 1)
        {
            insert(&startPtr);
        }

        else
        {
            if (startPtr == NULL)
            {
                printf_s("目前沒有資料\n");
            }
            else
            {
                printf_s("輸入要刪除的學生ID:\n");
                scanf_s("%u", &b);
                delete(&startPtr, b);
                printf_s("刪除完成\n");
            }
        }
        printList(startPtr);
        printf_s("1.新增學生資料\n2.刪除學生資料\n3.結束\n請輸入1~3:");
        scanf_s("%u", &a);
    }

    printf_s("結束程式\n");
    return 0;
    
}


void insert(NodePtr* sPtr)
{
    NodePtr newPtr = malloc(sizeof(Node));
    
    if (newPtr != NULL)
    {
        printf_s("請輸入學生姓名:\n");
        scanf_s("%s", newPtr->data.name,19);
        printf_s("請輸入學生學號ID:\n");
        scanf_s("%d", &newPtr->data.ID);
        printf_s("請輸入學生數學成績:\n");
        scanf_s("%d", &newPtr->data.math);
        printf_s("請輸入學生程式成績:\n");
        scanf_s("%d", &newPtr->data.comput);
        newPtr->data.AVG = (newPtr->data.math + newPtr->data.comput) / 2.0;
        newPtr->next = NULL;

        NodePtr previousPtr = NULL;
        NodePtr currentPtr = *sPtr;

        while (currentPtr != NULL && newPtr->data.ID > currentPtr->data.ID)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->next;
        }
        if (previousPtr == NULL)
        {
            newPtr->next = *sPtr;
            *sPtr = newPtr;
        }
        else
        {
            previousPtr->next = newPtr;
            newPtr->next = currentPtr;
        }
    }

    else
    {
        printf_s("無法新增學生資料\n");
        return;
    }
}

void delete(NodePtr* sPtr, unsigned int ID)
{
    if (*sPtr == NULL) 
    {
        printf_s("錯誤，沒有資料可以刪除\n");
        return;
    }

    NodePtr previousPtr = NULL;
    NodePtr currentPtr = *sPtr;

    while (currentPtr != NULL && currentPtr->data.ID != ID) 
    {
        previousPtr = currentPtr;
        currentPtr = currentPtr->next;
    }

    if (currentPtr == NULL) 
    {
        printf_s("學號 %u 未找到。\n", ID);
        return;
    }

    if (previousPtr == NULL)
    {
        *sPtr = currentPtr->next;
    }
    else 
    {
        previousPtr->next = currentPtr->next;
    }

    free(currentPtr);
}

void printList(NodePtr currentPtr)
{
    printf_s("姓名     學號ID      數學成績    程式成績    平均\n");
    if (currentPtr == NULL)
    {
        printf_s("錯誤，沒有資料\n");
        return;
    }
    else
    {
        while(currentPtr != NULL)
        { 
            printf_s("%-3s      %-6d      %-6d      %-6d      %-6.2f\n",currentPtr->data.name,currentPtr->data.ID,currentPtr->data.math,currentPtr->data.comput,currentPtr->data.AVG);
            currentPtr = currentPtr->next;
        }
    }   
}