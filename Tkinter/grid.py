from tkinter import *
from typing import Collection
from PIL import ImageTk, Image

root = Tk()

root.title("sign up")
root.geometry("700x500")

def getvals():
    print(username.get())
    print(userpass.get())


user = Label(root, text="Usernname")
user.grid(row=0, column=0)
password = Label(root, text="Password")
password.grid(row=1, column=0)

username = StringVar()
userpass = StringVar()

username_entry = Entry(root, textvariable=username)
username_entry.grid(row=0, column=2)
userpass_entry = Entry(root, textvariable=userpass)
userpass_entry.grid(row=1, column=2)

Submit = Button(root, text="Submit", command=getvals)
Submit.grid(row=3, column=0)


root.mainloop()