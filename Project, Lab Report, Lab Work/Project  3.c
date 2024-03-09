#include <stdio.h>
#define QUEUE_SIZE 100
#define STACK_SIZE 100

struct Queue
{
    int items[QUEUE_SIZE];
    int front, rear;
};


struct Stack
{
    int items[STACK_SIZE];
    int top;
};


void initial(struct Queue *que, struct Stack *st)
{
    que->front = que->rear = -1;
    st->top = -1;
}


int Queue_Empty(struct Queue *que)
{
    return (que->front == -1);
}


int Queue_Full(struct Queue *que)
{
    return (que->rear == QUEUE_SIZE - 1);
}


void enqueue(struct Queue *que, int value)
{
    if (Queue_Full(que))
        {
        printf("Queue full. Enqueue is not possible.\n");
        return;
        }

    if (Queue_Empty(que))
        {
        que->front = que->rear = 0;
        }
    else
        {
        que->rear++;
        }

    que->items[que->rear] = value;
    printf("Item added");
}


int dequeue(struct Queue *que)
{
    if (Queue_Empty(que))
        {
        printf("Queue empty. Dequeue is not possible.\n");
        return -1;
        }

    int value = que->items[que->front];

    if (que->front == que->rear)
        {
        que->front = que->rear = -1;
        }
    else
        {
        que->front++;
        }

    return value;
}





int Stack_Empty(struct Stack *st)
{
    return (st->top == -1);
}


int Stack_Full(struct Stack *st)
{
    return (st->top == STACK_SIZE - 1);
}

void push(struct Stack *st, int value)
{
    if (Stack_Full(st))
        {
        printf("Stack full. Cannot push more item.\n");
        return;
        }
    st->items[++st->top] = value;
}


int pop(struct Stack *st)
{
    if (Stack_Empty(st))
        {
        printf("Stack empty. Cannot pop item.\n");
        return -1;
        }
    return st->items[st->top--];
}

void display_Queue(struct Queue *que)
{
    if (Queue_Empty(que))
        {
        printf("Queue is empty.\n");
        return;
        }

    printf("Queue elements: ");
    for (int i =que->front; i <= que->rear; i++)
        {
        printf("%d ", que->items[i]);
        }
    printf("\n");
}


void display_Stack(struct Stack *st)
    {
    if (Stack_Empty(st))
        {
        printf("Stack is empty.\n");
        return;
        }

    printf("Stack elements: ");
    for (int i = st->top; i >= 0; i--)
        {
        printf("%d ", st->items[i]);
        }
    printf("\n");
}

int main()
{
    struct Queue que;
    struct Stack st;
    initial(&que, &st);

    int ch, ele;

    while (1)
        {
        printf("\n1. Request to Book A Ticket\n2. Cancel The Request\n3. Update The Request\n4. Update Available Tickets\n5. Display Requested Tickets\n6. Display Available Tickets\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Enter the ticket request: ");
                scanf("%d", &ele);
                enqueue(&que, ele);
                break;

            case 2:
                ele = dequeue(&que);
                if (ele != -1)
                    {
                    printf("Canceled request for a ticket: %d\n", ele);
                    }
                break;

            case 3:
                printf("Enter the updated ticket request: ");
                scanf("%d", &ele);
                enqueue(&que, ele);
                break;

            case 4:
                printf("Enter the number of available tickets to add: ");
                scanf("%d", &ele);
                for (int i = 0; i < ele; i++)
                    {
                    push(&st, i + 1);
                    }
                break;

            case 5:
                display_Queue(&que);
                break;
            case 6:
                display_Stack(&st);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
