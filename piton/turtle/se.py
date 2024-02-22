from turtle import *
turtle = Turtle()
a = 50
b = 60
goto(0, 0)
goto(a, 0)
goto(a, b)
goto(-a, b)
goto(-a, 0)
goto(0, 0)
write(a, move=False, align='left', font=('Arial', 8, 'normal'))
turtle.screen.mainloop()
