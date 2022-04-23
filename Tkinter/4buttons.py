from tkinter import *
from PIL import ImageTk, Image

root = Tk()

def fname():
    print("Abhoy")
def lname():
    print("Gorai")
def car():
    print("Celerio")
def pet():
    print("No Pet")



root.geometry("700x500")
f1 = Frame(root, bg="red", borderwidth=10, relief=GROOVE)
f1.pack(side=LEFT, padx=50)
b1 = Button(f1, bg="white", text="my    first    name", command=fname)
b1.pack()
b2 = Button(f1, bg="white", text="my second name", command=lname)
b2.pack()

f2 = Frame(root, bg="blue", borderwidth=10, relief=GROOVE)
f2.pack(side=RIGHT, padx=50)
b3 = Button(f2, bg="white", text="my car name", command=car)
b3.pack()
b4 = Button(f2, bg="white", text="my pet name",command=pet)
b4.pack()


root.mainloop()