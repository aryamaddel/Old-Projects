"1,1,2,3,5,8,13,21,34"

a = 0
b = 1
result = '0, 1'
for i in range(10):
    sum = a+b
    result += ', ' + str(sum)
    a = b
    b = sum


print(result)
