from tkinter import *
from PIL import ImageTk, Image

root = Tk()

root.title("scrollbar")
root.geometry("700x500")

scrollbar = Scrollbar(root)
scrollbar.pack(side = RIGHT, fill=Y)

listbox = Listbox(root, yscrollcommand=scrollbar.set)
for i in range(301):
    listbox.insert(END, f"Item number {i}")

listbox.pack(fill=BOTH)
scrollbar.config(command=listbox.yview)
root.mainloop()