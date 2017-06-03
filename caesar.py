import cs50
import sys

if len(sys.argv)!= 2:
    print("Wrong number of command-line arguments")
    exit(1)

k = int(sys.argv[1])

print("plaintext: ",end="")
ptext = cs50.get_string()
print("ciphertext: ",end="")

for i in range(len(ptext)):
    if ptext[i].isupper():
        ctext = (((ord(ptext[i])-65)+k)% 26) + 65
    elif ptext[i].islower():
        ctext = (((ord(ptext[i])-97)+k)% 26) + 97
    else:
        ctext = ptext[i]
    print(chr(ctext), end="")
print("")
        
 
    
exit(0)