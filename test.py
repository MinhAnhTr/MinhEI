'''from asyncio.windows_events import NULL
from cmath import inf


a = "a"
try:
    print("he")
    a = int(a)
except:
    a = -1
print(a)


x = 5
if  x == 5 :
    erger = 0
    print('Is 5')
    print('Is Still 5')
    print('Third 5')
for i in [1,2,3]:
    erge = i
print(erge)





largest = None
smallest = None
while True:
    num = input("Enter a number: ")
    if num == "done":
        break
    print(num)
    try:
        num = int(num)
    except:
        continue
    if largest is None:
        largest = num
        smallest = num
    largest = max(largest, num)
    smallest = min(smallest, num)

print("Invalid input\nMaximum is", largest)
print("Maximum is", smallest)'''





fname = "input.txt"
fh = open(fname)
count = 0
for i in fh:
    if not i.startswith("From"): continue
    i = i[5:]
    print(i[:i.find(" ")])
    count += 1
print("There were", count, "lines in the file with From as the first word")


