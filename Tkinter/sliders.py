from tkinter import *
import tkinter.messagebox as tmsg


def getdollar():
    # print(f"You got {my_slider2.get()} dollars in you account")
    tmsg.showinfo(
        "Dollars", f"You got {my_slider2.get()} dollars in you account")


root = Tk()
root.geometry("700x500")
root.title("Sliders")

label = Label(text="How many dollars you waant")
label.pack()

my_slider2 = Scale(root, from_=0, to=100, orient=HORIZONTAL, tickinterval=10, length=400, activebackground="red", resolution=10)
# my_slider2.set(50)
my_slider2.pack()

button = Button(text="Get Dollars", command=getdollar)
button.pack(pady=20)


root.mainloop()