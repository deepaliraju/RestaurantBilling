
// It initializes size of queue as 0 
#include "proj.h"


struct Queue* createQueue(int capacity) 
{ 
    struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue)); 
    queue->capacity = capacity; 
    queue->front = queue->size = 0;  
    queue->rear = capacity - 1;
    queue->array = (int*) malloc(queue->capacity * sizeof(int)); 
    return queue; 
} 
  
// Queue is full when size becomes equal to the capacity  
int isFull(struct Queue* queue) 
{  return (queue->size == queue->capacity);  } 
  
// Queue is empty when size is 0 
int isEmpty(struct Queue* queue) 
{  return (queue->size == 0); } 
  
// Function to add an item to the queue.   

void enQueue(struct Queue* queue, int item) 
{ 
    if (isFull(queue)){
        printf("Please wait as all queues are currently full!\n");
        return; 
    }
        
    queue->rear = (queue->rear + 1)%queue->capacity; 
    queue->array[queue->rear] = item; 
    queue->size = queue->size + 1; 
    //printf("%d enqueued to queue\n", item); 
} 
  
// Function to remove an item from queue.  

int deQueue(struct Queue* queue) 
{ 
    if (isEmpty(queue)) 
        exit(1);
    int item = queue->array[queue->front]; 
    queue->front = (queue->front + 1)%queue->capacity; 
    queue->size = queue->size - 1; 
    return item;
} 

int getMinof(struct Queue* q1,struct Queue* q2,struct Queue* q3,struct Queue* q4,struct Queue* q5){     // returns which queue is smallest
    int arr[] = {q1->size,q2->size,q3->size,q4->size,q5->size};
    int min = 0,minValue = arr[0];

    int i;
    for(i =1;i<5;i++){
        if(arr[i] < minValue){
            min = i;
        }
    }
    return min+1;
}

int bill_payment( int subTotal, int leave)
{
    int itemPrice, nofitems, diyakinahi,  balance, amt2bpaid,itemNo,quantity;
    
    printf("Welcome! Please select items to be purchased: ");
    printf("1. Toothbrush (Rs.10)"
           "2. Soap (Rs.30)"
           "3. Towel (Rs.100)"
           "4. Doormat (Rs.70)"
           "5. Air Freshner (Rs.300)"
           );
    do{
        subTotal= 0;
        scanf("%d",&itemNo);
        if(itemNo == 1)
        {
            itemPrice = 10;
        }
        if(itemNo == 2)
        {
            itemPrice = 30;
        }
        if(itemNo == 3)
        {
            itemPrice = 100;
        }
        if(itemNo == 4)
        {
            itemPrice = 70;
        }
        if(itemNo == 5)
        {
            itemPrice = 300;
        }
        subTotal = subTotal++;
    }while(itemNo == -1);
    
    printf("Your subtotal is: %d",subTotal);
    do{
        printf("Please pay required amount : ");
        scanf("%d",&diyakinahi);
    
                balance = 0;
                printf("Thank you for visiting, fuck off");
                return 1;
        
            if(diyakinahi < subTotal)
            {
                balance = 0;
                amt2bpaid = subTotal - diyakinahi;
                printf("Please pay %d",amt2bpaid);
                return 0;
            }
            if(diyakinahi > subTotal)
            {
                balance = diyakinahi - subTotal;
                printf("Balance amount = %d",balance);
                return 0;
            }
        }while(diyakinahi == subTotal);
}
    


