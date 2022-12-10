file = open("dataram.mem", "w")

# Generate sine wave
for i in range(4095):
    file.write("0" + "\n")

file.close()