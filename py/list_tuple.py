#%%
a = [1,2,3,3,4,5,6]
b = [val-1 for val in a] #list comprehension from list
c = {val2-1:val2 for val2 in a} # dict comprehension from list
d = {val3-1 for val3 in a} #set comprehension from list
print(b)
print(c)
print(d) 
#%%
### Dict parssing
a= {1:'Raja', 2:'Rani' }
for key,val in a.items():
    print(f'{key} is {val}')

## Dict creation
#%%
dictionary = {'Biscuit':'ParleG', 'Watch':'Casio', 'Movie':'Inglourious Basterds', 'Actor':'Cristoph Waltz', 'Chocolate':'FiveStar'}
#for i in range(0,10,2):
    #key = input("Type Key:")
    #val = input("Type Value:")
    #dictionary[key] = val
print(dictionary)
#%%
dictionary = sorted(dictionary.items())
print(dictionary)
#%%
mod_dic = {key:value for key,value in dictionary if key <'C'} #Dictionary to dictionary comprehension
print(mod_dic)
#%%
# List of Tuples
listuple = [(i,i*i,'Squaredddd') for i in range(0,10)]
print(listuple)
#%%
# Sorting Lists
list1 = [i  for i in range(0,10)] 
list2=  [i for i in range(0,19,2)]
#for i in list2:
    #list1.append(i)
#print(list1)


## Set Operations
print(set(list1) ^ set(list2)) #XOR
print(set(list1) & set(list2)) #interseciton
print(set(list1) | set(list2)) #union
print(set(list1) - set(list2)) 
#Casting Back into List after Symmetric Difference
xor=  list(set(list1) - set(list2)) 
print(xor)
xor.sort(reverse=True)
print(xor)


#%%
list1.sort()
print(list1)
list1.sort(reverse=False)
print(list1)
#%%
## List of Lists
listoflist = [[] for i  in range(5)]
listoflist[0] = [1,2,3,4,5]

#%%
#Sets Operations
