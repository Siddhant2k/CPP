public class Program
{
    public static void main(String[] args) {
   
   
   
   int arr[]={23,12,11,76,34,1,8,2};
   
   
   int len=arr.length;
   
   for(int i=0;i<len;i++)
   {
       
      for(int j=0;j<len-i-1;j++)
      {
    
        if(arr[j] > arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
          
      } 
           
   }
   
   
   for(int i=0;i<len;i++)
   {
       System.out.print(arr[i]+" ");
   }
   
   
   
        
    }
    
}
