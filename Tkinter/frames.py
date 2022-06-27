from tkinter import *
from typing import Sized
from PIL import ImageTk, Image

root = Tk()
root.title("Text Editor")

root.geometry("1920x1080")
f1 = Frame(root, background="grey", borderwidth=6, relief=RIDGE)
f1.pack(side=LEFT, fill=Y)

l1 = Label(f1, text="Files are here", font="Helvatica 15 bold", bg="grey")
l1.pack(side=LEFT)

f2 = Frame(root, background="cyan", borderwidth=6, relief=RIDGE)
f2.pack(fill=X)

l2 = Label(f2, text="Welcome to text editor", font="Helvatica 15 bold", bg="cyan")
l2.pack(pady=40)

root.mainloop()
