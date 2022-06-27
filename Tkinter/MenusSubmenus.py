from tkinter import *

root = Tk()
root.geometry("700x500")

def myfunc():
    print("My name is Abhoy")

def myfunc2():
    print("i am back")
#this creates a non dropdown menu
# my_menu = Menu(root)
# my_menu.add_command(label="file", command=myfunc)
# my_menu.add_command(label="Exit", command=quit)
# root.config(menu=my_menu)

YourMenu = Menu(root)
m1 = Menu(YourMenu, tearoff=0)
m1.add_command(label="print", command=myfunc)
m1.add_command(label="save", command=myfunc)
m1.add_separator()
m1.add_command(label="delete", command=myfunc2)
m1.add_command(label="fuck", command=myfunc)

YourMenu.add_cascade(label="file", menu=m1)

root.config(menu=YourMenu)

root.mainloop()