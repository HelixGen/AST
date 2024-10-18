#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int val;
    
}Queue;

Queue *Enque(int size,int elem , Queue *q1){
    Queue *q2=(Queue *)malloc((size+1)*sizeof(Queue));
    for(int i=0;i<size;i++){
        q2[i].val=q1[i].val;
    }
    q2[size].val=elem;
    free(q1);
    return q2;
    
}

Queue *Dequeue(int size, Queue *q1){
    Queue *q2=(Queue *)malloc((size-1)*sizeof(Queue));
    for(int i=0;i<size;i++){
        q2[i].val=q1[i+1].val;
    }

   free(q1);
   return q2;
    
    
    
}

int main() {
    
    Queue *q1=(Queue *)malloc(4*sizeof(Queue));
    q1[0].val=1;
    q1[1].val=2;
    q1[2].val=3;
    q1[3].val=4;
    
    
    Queue *q2=Enque(3,665,q1);
    
    
    

    return 0;
}