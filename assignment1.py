#function to calculate average

def average(m):
  sum=0
  absent=0
  for(int i in range(0,len(m))):
    absent=absent+1
    else:
      sum=sum+m[1]
      avg=sum/(len(m)-absent)
      print("average marks are" avg )
      
      
      #Function to calculate highest and lowest marks in the class
      
      def highestandlowest(m):
        high=0
        low=100
        for i in range (0,len(m)):
          if(type(m[i]!=type("")):
             if(m[i]>high):
             high=m[i]
             if((m[i]<low)and type (m[i])!=type("")):
             low=m[i]
             print("/n highest score is:",high)
             
             
