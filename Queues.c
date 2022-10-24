
#include<stdio.h>
int Queue[10];
int size=10; 
void Dequeue(void);
void Enqueue(void);
void Display(void);
int head=-1, tail=-1, element;
// this the function to enqueue
void Enqueue(){
	if(tail==size-1) // checking if Queue is full or not
		printf("Queue is Full");
	else {
		if(head==-1) // this is to ensure we are at the index 0
			head=0;
		printf("Enter the element to insert into the Queue:");
		scanf("%d", &element);
			Queue[tail]=element;
			tail++;
	}
}
// this is the function to dequeue
void Dequeue(){
	if(tail==-1||head>tail) // checking if Queue is empty
		printf("Queue is empty");
		else {
			element=Queue[head];
			printf("%d is deleted from the Queue", element);
			head++;
		}
}
// this is the function to display all the elements in the Queue
void Display() {
	int i;
	if(tail==-1 || head>tail)
		printf("Queue is empty");
	else { // printing out the elements
		for(i=head;i<tail;i++){
			printf("\n\t%d", Queue[i]);
		}
	}
}
main()
{
    int choice;
    while (1)
    {
    	printf("\n*--------------------------------------------------*\n");
        printf("1.Insert element to the queue \n");
        printf("2.Delete element from the queue \n");
        printf("3.Display all elements of the queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        printf("\n*--------------------------------------------------*");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            Enqueue();
            break;
            case 2:
            Dequeue();
            break;
            case 3:
            Display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
		}
   }
}



