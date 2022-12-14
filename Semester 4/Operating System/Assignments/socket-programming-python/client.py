# Import socket module
import socket
print("Name: Usman Razwan")
print("Roll no: BSIT-M2-20-48")
# Create a socket object
s = socket.socket()

# Define the port on which you want to connect
port = 14314

# connect to the server on local computer
s.connect(('127.0.0.1', port))

# receive data from the server and decoding to get the string.
print(s.recv(1024).decode())
# close the connection
s.close()
