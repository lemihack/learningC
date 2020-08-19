first = input("enter first number: ")
second = input("enter second number: ")
exp = '"';

if(exp in first and exp in second):
    tring1 = first[1:len(first)-1]
    tring2 = second[1:len(second)-1]
    print(tring1 + tring2)

elif(exp not in first and exp in second or exp not in second and exp in first):
    print("Something went wrong!!!")

else:
    print(int(first)+int(second))