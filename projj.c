//main.c
#include "proj_util.c"

int main()
{
    int counter ,subTotal ,leave;
    struct Queue *tmp;
    //int tmp;
    int customer,choice = 1,index;
    printf("WELCOME TO THE BILLING SECTION!\n");
    //Open the first queue for the initial customers
    struct Queue *q1 = createQueue(4); //Capacity of each queue will be 4
    struct Queue *q2 = createQueue(4);
    struct Queue *q3 = createQueue(4);
    struct Queue *q4 = createQueue(4);
    struct Queue *q5 = createQueue(4);

    do{
       

        printf("1 - A customer has arrived!\n2 - A customer has left!\n3 - Exit\n:");
        scanf(" %d",&choice);
       // printf("in");


        
        if(choice == 1){
            //printf("c1");
            index = getMinof(q1,q2,q3,q4,q5);

            switch (index)
            {
                case 1:
                    printf("Please enter the 1st counter! \n");
                    enQueue(q1,1);
                    break;
                case 2:
                    printf("Please enter the 2nd counter! \n");
                    enQueue(q2,1);
                    break;
                case 3:
                    printf("Please enter the 3rd counter! \n");
                    enQueue(q3,1);
                    break;
                case 4:
                    printf("Please enter the 4th counter! \n");
                    enQueue(q4,1);
                    break;
                case 5:
                    printf("Please enter the 5th counter! \n");
                    enQueue(q5,1);
                    break;
            
                default:
                    printf("Error!\n");
                    break;
                };
            }
        

           if(choice == 2){
               int bill_payment(int subTotal, int leave);
               if(leave == 1)
               {
                   printf("What counter did the customer leave from? :");
                   scanf(" %d", &counter);

                   switch (counter)
                   {
                       case 1:
                
                           if( !isEmpty(q1) ){
                               deQueue(q1);
                           }else
                           {
                               printf("This counter is already empty!Please proceed.\n");
                           }
                
                
                           break;
                       case 2:
                           if( !isEmpty(q2) ){
                               deQueue(q2);
                           }else
                           {
                               printf("This counter is already empty!Please proceed.\n");
                           }
                           break;
                       case 3:
                           if( !isEmpty(q3) ){
                               deQueue(q3);
                           }else
                           {
                               printf("This counter is already empty!Please proceed.\n");
                           }
                           break;
                       case 4:
                                if( !isEmpty(q4) ){
                                    deQueue(q4);
                                }else
                                {
                                    printf("This counter is already empty!Please proceed.\n");
                                }
                           break;
                       case 5:
                           if( !isEmpty(q5) ){
                               deQueue(q5);
                           }else
                           {
                               printf("This counter is already empty!Please proceed.\n");
                           }
                           break;
            
                       default:
                           printf("Error! this counter does not exist\n");
                           break;
                    };
               }
           }
               
           }while(choice != 3);

       
       
}
