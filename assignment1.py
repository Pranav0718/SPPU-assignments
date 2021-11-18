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
             print("/n lowest score is:";low)
             
             #function to calculate absent students
             
             def absents(m):
             count=0
             for i in m:
             if type(i)==type(""):
             count+=1
             print("/n No of absent student:"count)
             
             #function to calculate frequency
             
             def Frequencya(m):
             f[0]
             for j in range(1,100):
             if(type(m[i]!=type(""));
                if(m[i]==j):
                count=count+1
                f.append(count)
                print("/n The marks in the subject FDS are....")
                print(m)
                
                
                #obtaining marks of highest frequency
                
                for k in range(l,len(f)):
                if(f[k]==high):
                highest=k
                print("/highest frequency marks are",highest)
                
                #code
                marks=["NA",49,42,38,42,43,"AB",48,50,"AB",34]
                print("the marks in the subject'FDS'are")
                print(marks)
                average(marks)
                highestandlowestscore(marks)
                absent(marks)
                frequency(marks)
             
             
