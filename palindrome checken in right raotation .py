ss="cfabn"
p=0
for i in range(len(ss)):
    ss = ss[1:]+ss[:1]
    if ss == ss[::-1]:
        print(ss,'pal')
        p=1;
         
if p!=1:
    print("not happen")
