from tkinter import *
import tkinter.messagebox as tmsg

def myfunc():
    tmsg.showinfo("Order", f"wehave received your order of {var.get()}")

root =Tk()
root.title("RadioButton")
root.geometry("700x500")

var = StringVar()
var.set("radio")

Label(root,text="what do you like to eat", font="lucida 19 bold").pack()
radio = Radiobutton(root, text="Idli", padx=14, variable=var, value="Idli").pack(anchor="n",side=LEFT)
radio = Radiobutton(root, text="Dosa", padx=14, variable=var, value="Dosa").pack(anchor="n",side=LEFT)
radio = Radiobutton(root, text="Paratha", padx=14, variable=var, value="Paratha").pack(anchor="n",side=LEFT)
radio = Radiobutton(root, text="Samosa", padx=14, variable=var, value="Samosa").pack(anchor="n",side=LEFT)

submit = Button(text="Submit", command=myfunc).pack(anchor="s")

root.mainloop()