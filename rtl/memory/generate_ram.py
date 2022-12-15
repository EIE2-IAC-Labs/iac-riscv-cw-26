file = open("dataram.mem", "w")

# Generate sine wave
for i in range(0x1FFFF):
    file.write("0" + "\n")

file.close()