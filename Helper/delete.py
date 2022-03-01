import os

dir_name = "E:\CompetitiveProgramming\OOPS"
test = os.listdir(dir_name)
for item in test:
    if item.endswith(".exe"):
        file=os.path.join(dir_name, item)
        print(file)
        os.remove(file)