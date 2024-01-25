import random
print("Dropdown copmuter number: ")
num1_comp = random.randint(1,6)
print(num1_comp)
print("Dropdown computer second number: ")
num2_comp = random.randint(1,6)
print(num2_comp)
sum_comp = num1_comp + num2_comp
print("Dropdown your number: ")
num1_user = random.randint(1,6)
print(num1_user)
print("Dropdown your another number: ")
num2_user = random.randint(1,6)
print(num2_user)
sum_user = num1_user + num2_comp
if sum_user > sum_comp:
    print("you won")
else:
    print("not won unfurtulntly")


