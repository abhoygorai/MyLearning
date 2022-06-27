from tkinter import *
from PIL import ImageTk, Image

root = Tk()
root.geometry("1920x1080")
root.title("NCT 1 Times")
NewspaperName= Label(text="NCT 1 Times", font=("Times New Roman", 50, "bold"), bg="grey",borderwidth= 5, relief=RIDGE)
NewspaperName.pack(side=TOP, fill=X)

img1 = ImageTk.PhotoImage(Image.open("1.jpg"))
img1_label=Label(image=img1)
img1_label.pack(side=LEFT, anchor="nw", padx=200)

txt1= Label(text='''Text messaging, or texting, is the act of composing and sending electronic messages, typically consisting \nof alphabetic and numeric characters, between two or more users of mobile devices, desktops/laptops, or \nanother type of compatible computer. Text messages may be sent over a cellular network, or may also be\n sent via an Internet connection. The term originally referred to messages sent using the Short Message \nService (SMS).''', font=("Times New Roman", 12))
txt1.pack(side=LEFT, anchor="w")






root.mainloop()