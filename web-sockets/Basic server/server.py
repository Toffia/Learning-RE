import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM) # протокол сетевого уровня и транспортного

s.bind(('localhost',8888))
s.listen(1)
conn, addr = s.accept()

while True:
    data = conn.recv(1024) # читаем данные
    if not data: break
    conn.sendall(data) # возвращаем обратно
conn.close()

# socket.AF_INET - ipv4
# socket.AF_INET6 - ipv6
# socket.SOCK_STREAM - TCP
# socket.SOCK_DGRAM - UDP
