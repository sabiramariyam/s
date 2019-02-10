def isEditDistanceOne(n1, n2): 
  
    
    m = len(n1) 
    n = len(n2) 
  
    
    if abs(m - n) > 1: 
        return false 
  
    count = 0    
  
    i = 0
    j = 0
    while i < m and j < n: 
        
        if n1[i] != n2[j]: 
            if count == 1: 
                return false 
  
            if m > n: 
                i+=1
            elif m < n: 
                j+=1
            else:    
                i+=1
                j+=1
  
            
            count+=1
  
        else:    
            i+=1
            j+=1
  
   
    if i < m or j < n: 
        count+=1
  
    return count == 1
  

n1 = str(input(""))
n2 = str(input(""))
if isEditDistanceOne(n1, n2): 
    print ("Yes")
else: 
    print ("No")
