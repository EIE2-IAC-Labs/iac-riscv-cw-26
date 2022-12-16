file = open("dataram.mem", "w")

# Generate sine wave
for i in range(0x10000):
    file.write("0" + "\n")

file.close()