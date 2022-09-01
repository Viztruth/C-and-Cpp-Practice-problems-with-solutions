n = int(input("Enter the no: "))
count = 0
for i in range(2, int(n/2)):
    if (n % i == 0):
        count = count+1
if (count == 0):
    print("Prime no.")
else:
    print("Not a prime no.")
