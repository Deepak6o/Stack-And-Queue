class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int start=0;
       int storage=0;
       int shortage=0;
       for(int i=0;i<n;i++)
       {
           storage+=p[i].petrol-p[i].distance;
           if(storage<0)
           {
               start=i+1;
               shortage+=storage;
               
               storage=0;
           }
           
       }
       if(storage+shortage>=0)
       {
           return start;
       }
       return -1;
       
    }
};
