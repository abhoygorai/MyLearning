from tkinter import *
from PIL import ImageTk, Image
import tkinter.messagebox as tmsg

root = Tk()

root.title("mMessageBox")
root.geometry("700x500")

def retry():
    tmsg.askretrycancel("Retry Request", "You can't retry this function")

def showInfo():
    tmsg.showinfo("Information", "You are a idiot")

main_menu = Menu(root)

m1 = Menu(main_menu, tearoff=0)

m1.add_command(label="retry", command=retry)
m1.add_command(label="showinfo", command=showInfo)

main_menu.add_cascade(label="FILE", menu=m1)

root.config(menu=main_menu)


root.mainloop()