from tkinter import *
from PIL import ImageTk, Image

def Upload():
    var.set("Loging in......")
    sbar.update()
    import time
    time.sleep(1)
    var.set("Ready")

root = Tk()

root.title("Statusbar")
root.geometry("700x500")

var = StringVar()
var.set("Ready")
sbar = Label(root, textvariable= var, relief=SUNKEN, anchor="w")
sbar.pack(side=BOTTOM, fill=X)

Button(root, text="Login", command=Upload).pack()

root.mainloop()