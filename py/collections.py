from collections import Counter

a = Counter('baby')
print(a)
# %%
b = Counter({'baby':4, 'aunty':3, 'akka':-2})
print(b)
#%%
print(b['baby'])
# %%
print(b['aunty'])
#%%

print (b.items())
#%%


count_items = sorted(b.items(), key=lambda x:(-x[1],x[0]))
print(count_items)
#%%
words, _ = list(zip(*count_items))
print(words)
#%%
print(_)
# %%

word_to_id = dict(zip(words,range(len(words))))
print(word_to_id)
#%%

new = ('aunty', 'radha', 'baby', 'chinni')
word_list = [word_to_id[word] for word in new if word in word_to_id]
print(word_list)
#%%