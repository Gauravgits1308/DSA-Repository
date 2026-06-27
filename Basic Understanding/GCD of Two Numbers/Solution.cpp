class Solution {
public:
   int GCD(int n1,int n2) {
     
       int max,min ;
     
       if(n1 > n2) max = n1 ;
       else max = n2 ;
     
       min = (n1+n2) - max ;
     
       for(int i = min ; i >= 1 ; i--){
         
           if((max%i == 0) && (min%i == 0)){
               return i ;
           }
         
       }
       return 1 ;
   }
};
