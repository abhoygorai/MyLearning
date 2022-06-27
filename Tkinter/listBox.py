from tkinter import *

def add():
    global i
    lbx.insert(ACTIVE, f"{i}")
    i += 1

i = 0
root = Tk()
root.title("List Box")
root.geometry("700x500")

lbx = Listbox(root)
lbx.insert(END, "first item of a listbox")
lbx.pack()

button = Button(root, text="Add Item", command=add).pack()

root.mainloop()