from tkinter import *
from PIL import ImageTk, Image


root = Tk()

root.geometry("1600x944")
root.title("My GUI")

lab = Label(text='''Abel Makkonen Tesfaye (born February 16, 1990), known professionally as the Weeknd, is a Canadian singer, songwriter, and record \nproducer. Noted for his distinctive singing voice with a soaring falsetto and its singular tremolo,[2] Tesfaye is considered an influential figure in \ncontemporary popular music.[3][4] Beginning his musical career in 2009 by anonymously releasing music to YouTube, Tesfaye founded the XO record label in \n2011, and released the critically acclaimed mixtapes House of Balloons, Thursday, and Echoes of Silence that year; he subsequently signed with Republic \nRecords, and released his debut studio album, Kiss Land, in 2013. Tesfaye gained major critical and commercial success with his second studio album, \nBeauty Behind the Madness (2015), which reached atop the US Billboard 200 and produced the Billboard Hot 100 number-one singles "Can't Feel My Face" and \n"The Hills". Tesfaye's third studio album, Starboy (2016), achieved similar commercial success, and included the number-one single of the same name.''',background="blue", foreground= "white", font=("calibri", 13), padx=40, pady=40, borderwidth= 5, relief=RIDGE)

lab.pack(anchor="ne", side=BOTTOM, fill=X)





root.mainloop()
