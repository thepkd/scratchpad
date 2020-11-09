#Merge Sort
## Log N for Partitions and N for Merging. Total O(NlogN)
#%%
def mergeSort(arr):
    n = len(arr)
    if(n>1):
        mid = n//2
        L = arr[:mid]
        R = arr[mid:]
        mergeSort(L)
        mergeSort(R)

        i=0
        j=0
        k=0
        while(i<len(L) and j<len(R)):
            if(L[i]<R[j]):
                arr[k] = L[i]
                i=i+1
            else:
                arr[k] = R[j]
                j=j+1
            k=k+1

        while(i<len(L)):
            arr[k] = L[i]
            i+=1
            k+=1

        while(j<len(R)):
            arr[k]= R[j]
            j+=1
            k+=1
        
import heapq
hq = []
for i in range(0,10):
    heapq.heappush(hq,i)
    heapq.heappush(hq,10-i)
print(hq)


mergeSort(hq)
# %%
