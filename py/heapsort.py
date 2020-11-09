import heapq

#%%
hq = []
for i in range(0,10):
    heapq.heappush(hq,i)
    heapq.heappush(hq,10-i)
print(hq)
#%%
#heapq.heapify(hq)
#hq_extract = [heapq.heappop(hq) for _ in  range(len(hq))]
#print(hq_extract)
#%%

def maxHeapify(heap,i,n):
    l = (2*i)+1
    r = (2*i)+2

    largest=i
    if(l<n):
        if(heap[l] > heap[i]):
            largest=l

    if(r<n):
        if(heap[r] > heap[largest]):
            largest=r
    
    if(largest!=i):
        heap[i], heap[largest] = (heap[largest], heap[i])
        maxHeapify(heap,largest,n)

def maxHeap(heap):
    n = len(heap)
    for i in range((n//2)-1,-1,-1):
        maxHeapify(heap,i,n)
    print(heap)

maxHeap(hq)

# %%
#maxHeapExtract = [heapq.heappop(hq) for _ in range(len(hq)) ]
#print(maxHeapExtract)
sortMaxHeap = []
for i in range(len(hq)-1,-1 ,-1):
    sortMaxHeap.append(hq[0])
    hq[i],hq[0] = (hq[0],hq[i])
    maxHeapify(hq,0,i)

print(sortMaxHeap)

# %%
