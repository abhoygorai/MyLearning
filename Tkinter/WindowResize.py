from tkinter import *
from tkinter import font

root = Tk()
root.geometry("700x200")

def ChangeWindow():
    root.geometry(f"{width_value.get()}x{height_value.get()}")

label = Label(text="Enter the height and the width you want", font="calibri 20 bold")
label.pack()

height_value = StringVar()
width_value = StringVar()

height_label = Label(root, text= "Height")
width_label = Label(root, text= "Width")

width_entry = Entry(root, textvariable=width_value)
height_entry = Entry(root, textvariable=height_value)

width_label.pack()
width_entry.pack()

height_label.pack()
height_entry.pack()

apply_button = Button(root, text="Apply", command= ChangeWindow)
apply_button.pack()

root.mainloop()