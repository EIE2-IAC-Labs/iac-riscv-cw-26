filename = "gaussian.mem"
file = open(filename, "r")

pdfArray = []
for i in range(256):
    pdfArray.append(0)

for i in range(0x10000):
    dataString = file.read(3)[0:2]
    dataInt = int(dataString, 16) # Convert hex string to int
    pdfArray[dataInt] += 1
    if pdfArray[dataInt] == 200:
        break # Stop at max bin count

print(pdfArray)

file.close()