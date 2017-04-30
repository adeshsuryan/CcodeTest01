
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int output = 0;
    int ip1;
    scanf("%d", &ip1);
    int ip2;
    scanf("%d", &ip2);
    int ip3_size = 0;
    int ip3_i;
    scanf("%d", &ip3_size);
    int ip3[ip3_size];
    for(ip3_i = 0; ip3_i < ip3_size; ip3_i++) {
        int ip3_item;
        scanf("%d", &ip3_item);
        
        ip3[ip3_i] = ip3_item;
    }
    output = GetJumpCount(ip1,ip2,ip3_size,ip3);
    printf("%d\n", output);
    return 0;
}

   int GetJumpCount(int input1,int input2,int input3_size, int* input3)
    {
        //@declaration of params
        int i,j,count=0;
        //@debug
        
        //printf("in\n");
        //first loop for iput_size
        
        for(i=0;i<input3_size;i++){
            //inner loop for input3 as per input3_size count
           // printf("%d\n", input3[i]);
           j = 0;  
            while(j<=input3[i]){
            j+=input1;   
            
              //first incr the count 
             // printf("%d\n", j);
               count++;
             //   printf("%d\n", count);
               
               //@validatej and input count, break if both are equal  
               //if(j>=input3[i])
                if(j>=input3[i])
                break;
                j=j-input2;
                // printf("%d\n", j);
            }
            
        }
        return count;
    }
