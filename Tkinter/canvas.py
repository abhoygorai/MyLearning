from tkinter import *

root = Tk()

root.title("fucker")
canvas_width = 800
canvas_height = 400
root.geometry(f"{canvas_width}x{canvas_height}")

can_widget = Canvas(root, width=canvas_width, height=canvas_height)
can_widget.pack()

can_widget.create_line(0, 0, 800, 400, fill="red")  
can_widget.create_line(800, 0, 0, 400, fill="cyan")  

can_widget.create_rectangle(100, 100, 700, 300)
can_widget.create_text( 400, 200, text="hello") 


root.mainloop()