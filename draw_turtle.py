import turtle # Import the turtle graphics module

screen = turtle.Screen() # Create a drawing window
screen.title("Next Line Programming")
 
t = turtle.Turtle() # Create a turtle object for drawing

t.color("blue") # Set the turtle's color to blue
t.pensize(3) # Set the thickness of the turtle's pen

t.forward(120) # Move the turtle forward by 120 units
t.left(90) # Turn the turtle left by 90 degrees
t.forward(120) # Move the turtle forward by 120 units
t.left(90)
t.forward(120)
t.left(90)
t.forward(120)
t.left(90)

turtle.done()