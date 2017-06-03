import cs50

while True:
    height = cs50.get_int()
    print("Height: {}".format(height))
    if height >= 0 or height <=23:
        break

for i in range(height):
    j=0
    for j in range(height - i - 1):
        print(" ", end="")
    print("#" * i, end="")
    print("  ", end="")
    print("#" * i)
        
        