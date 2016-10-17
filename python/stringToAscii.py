import base64

a = raw_input("input: ")
print "len {}".format(len(a))
s = ""
for i in range(0, len(a)-1, 2):
    print a[i:i+2]
    ascint = int(a[i:i+2], 16)
    s += chr(ascint)

print s

