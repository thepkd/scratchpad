#%%
import heapq
hq = []
for i in range(0,10):
    heapq.heappush(hq,i)
    heapq.heappush(hq,10-i)
print(hq)
#%%
def quickSort(arr,l,r):
    if(l<r):
     pi = partition(arr,l,r)

     quickSort(arr,l,pi-1)
     quickSort(arr,pi+1,r)

def partition(arr,l,r):
    #using last element as partition boundary
    i=j=l
    for j in range(l,r):
        if(arr[j] < arr[r]):
            arr[i], arr[j] = (arr[j],arr[i])
            i+=1
    arr[i],arr[r] = (arr[r],arr[i])
    return i

#%%
quickSort(hq,0,len(hq)-1)
print(hq)

# %%
