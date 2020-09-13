
#include "floor_function.h"

 int floor_function::function(double num){
    
        int value = 0;

            if (num<0){
       
                float left_over = num;
   
                for(int j = 0; j>= num; j--){
           
           
           
                value = j-1;
                      
                left_over++;
                      
                

            
                if (left_over == 1){value = value + 1;}

                }
       
       
       
            }
   
   
        if (num>0){
   
            for(int i = 0; i<= num; i++ ){
           
                value = i;
            }
        }
   
   
    return value;
   
   
}   







