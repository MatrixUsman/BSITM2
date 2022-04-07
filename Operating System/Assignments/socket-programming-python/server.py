# first of all import the socket library
from calendar import c
import socket
print("Name: Usman Razwan")
print("Roll no: BSIT-M2-20-48")
# next create a socket object
s = socket.socket()
print("Socket successfully created")

# reserve a port on your computer in our
# case it is 12345 but it can be anything
port = 14314

# Next bind to the port
# we have not typed any ip in the ip field
# instead we have inputted an empty string
# this makes the server listen to requests
# coming from other computers on the network
s.bind(('', port))
print("socket binded to %s" % (port))

# put the socket into listening mode
s.listen(5)
print("socket is listening")

# a forever loop until we interrupt it or
# an error occurs
while True:
    s, addr = s.accept()
    print('Got connection from', addr)

# send a thank you message to the client. encoding to send byte type.
    s.send('Thank you for connecting'.encode())

# Close the connection with the client
    s.close()

# Breaking once connection closed
    break
