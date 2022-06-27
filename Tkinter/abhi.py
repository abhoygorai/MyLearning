from tkinter import *
from time import strftime

root = Tk()

root.geometry("750x230")
root.title("Clock")

f1 = Frame(root, background="black", borderwidth=6, relief=RIDGE)
f1.pack(fill=X, padx=50, pady=50)



def time():
    string = strftime('%H:%M:%S %p')
    label.config(text=string)
    label.after(1000, time)

label = Label(f1, font=("ds-digital", 80), background="black", foreground="cyan")
label.pack(anchor=CENTER)

time()





root.mainloop()