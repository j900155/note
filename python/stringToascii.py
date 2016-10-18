s = raw_input("data :")
a = ""
for i in s:
    a += "".join("{:02x}".format( ord(i) ) )

print a
