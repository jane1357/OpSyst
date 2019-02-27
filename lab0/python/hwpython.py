import re
l=[]
ls=[]
s=set()
with open('input.txt') as f:
    text = f.read()
l=re.findall(r'\d+', text)
for e in l:
    e=int(e)
    ls.append(e)
    s.add(e)
    ls.sort()
    if len(s)==1:
        print("Packet is complete")
    else:
        if s.symmetric_difference(range(ls[0],ls[len(ls)-1]+1))==set():
            print("Packet is complete")
        else:
            print("These elements aren`t in list:")
            print(s.symmetric_difference(range(ls[0],ls[len(ls)-1]+1)))