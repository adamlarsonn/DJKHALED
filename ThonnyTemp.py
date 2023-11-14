import serial
# imports serial to read in ACM0 file containing arduino code 
if __name__=='__main__':
    ser = serial.Serial('/dev/tty/ACM0', 9600, timeout=1)
    ser.flush()

    while True:
        # Reads in and prints voltage, celsius, and fahrenheit
        line = ser.readline().decode('utf-8').rstrip()
        print(line)

# if ser.in_waiting > 0:
