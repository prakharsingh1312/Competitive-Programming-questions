def migratoryBirds(arr,n):
    lst1=[]
    dict1={}
    count=0
    set1=[1,2,3,4,5]
    for i in set1:
        for j in arr:
            if i==j:
                count+=1 
        dict1.update({int(i):int(count)})
        count=0
    result=max(dict1.values())
    for i in dict1:
        if dict1.get(i)==result:
            lst1.append(i)
            

    return min(lst1)
