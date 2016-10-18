x = 0

def a():
    x = 0 
    x +=1
    print x
    print "a"
    x +=1
    print x

    yield 99
    x +=1
    print x
    print "a2"
    x +=1
    print x

    yield 98
    x +=1
    print x

b = a()
b
#print x
print "``````````"
print b.next()
#print x
#b.next()
#print x
print b
print "``````````"
for i in b:
    print i


