import cs50

while True:
    print("O hai! How much change is owed?")
    dollar = cs50.get_float()
    if dollar > 0:
        break
    
cents = round(dollar*100)
coin = 0
quarter = 25
dime = 10
nickel = 5
penny = 1

while cents >= quarter:
    coin+=1
    cents = cents -25
    
while cents >= dime:
    coin+=1
    cents = cents - 10
    
while cents >= nickel:
    coin+=1
    cents = cents - 5
    
while cents >= penny:
    coin+=1
    cents = cents - 1
    
print(coin)