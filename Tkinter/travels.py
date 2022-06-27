from tkinter import *
from PIL import ImageTk, Image

root = Tk()

def getvals():
    print("Submiting form")
    print(f"{name_value.get(),phone_value.get(),gender_value.get(), foodservice_value.get()}")
    with open("records.txt", "a") as f:
        f.write(f"{name_value.get(),phone_value.get(),gender_value.get(), foodservice_value.get()}\n")




root.title("AG Travels")
root.geometry("700x500")

title_frame = Frame(root, bg="grey", borderwidth=5, relief=GROOVE)
title_frame.grid(row=0, column=1, pady=20)

Company_Label = Label(title_frame, text="Welcome to AG Travels", font="calibri 30 bold")
Company_Label.pack()

name = Label(root, text="Name", font="calibri 15 bold")
phone = Label(root, text="Phone No", font="calibri 15 bold")
gender = Label(root, text="Gender", font="calibri 15 bold")

name.grid(row=1, column=0, padx=30)
phone.grid(row=2, column=0, padx=30)
gender.grid(row=3, column=0, padx=30)

name_value = StringVar()
phone_value = StringVar()
gender_value = StringVar()
foodservice_value = IntVar()

name_entry = Entry(root, textvariable=name_value)
phone_entry = Entry(root, textvariable=phone_value)
gender_entry = Entry(root, textvariable=gender_value)
foodservice_entry = Checkbutton(text="Check if want to include fooding service")
foodservice_entry.grid(row=4, column=1)

name_entry.grid(row=1, column=1)
phone_entry.grid(row=2, column=1)
gender_entry.grid(row=3, column=1)

submit_but = Button(root,text="Submit", bg="cyan", fg= "black", command= getvals)
submit_but.grid(row=5, column=1)


root.mainloop()