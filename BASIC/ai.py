import RPi.GPIO as GPIO
from gpiozero import LineSensor, Robot
import time

# Set up GPIO pins
GPIO.setmode(GPIO.BOARD)
GPIO.setup(12, GPIO.OUT) # Motor 1 Enable
GPIO.setup(16, GPIO.OUT) # Motor 1 Pin 1
GPIO.setup(18, GPIO.OUT) # Motor 1 Pin 2
GPIO.setup(22, GPIO.OUT) # Motor 2 Enable
GPIO.setup(24, GPIO.OUT) # Motor 2 Pin 1
GPIO.setup(26, GPIO.OUT) # Motor 2 Pin 2

# Create LineSensor objects
left_sensor = LineSensor(17)
right_sensor = LineSensor(27)

# Create Robot object
robot = Robot(left=(16, 18), right=(24, 26))

# Main loop
try:
    while True:
        # Read sensor values
        left_value = left_sensor.value
        right_value = right_sensor.value

        # Make decisions based on sensor values
        if left_value == 0 and right_value == 0:
            # Both sensors detect the line
            robot.forward()
        elif left_value == 1 and right_value == 0:
            # Left sensor does not detect the line
            robot.right()
        elif left_value == 0 and right_value == 1:
            # Right sensor does not detect the line
            robot.left()
        else:
            # Neither sensor detects the line
            robot.stop()

        # Wait for a short time
        time.sleep(0.1)

# Clean up GPIO pins on program exit
finally:
    GPIO.cleanup()

