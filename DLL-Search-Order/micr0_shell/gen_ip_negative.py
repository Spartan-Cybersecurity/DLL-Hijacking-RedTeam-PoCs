import socket
import struct

def ip_to_negated_hex(ip_address):
    # Convierte la IP en formato decimal a un entero de 32 bits
    packed_ip = struct.unpack("!I", socket.inet_aton(ip_address))[0]

    # Invierte el orden de los bytes (little endian)
    reversed_ip = struct.unpack("<I", struct.pack(">I", packed_ip))[0]

    # Aplica el complemento a dos (NEG)
    negated_ip = ~reversed_ip + 1

    # Convierte a hexadecimal sin el prefijo '0x' y en mayúsculas
    negated_ip_hex = hex(negated_ip & 0xFFFFFFFF).upper()

    return negated_ip_hex

# Ejemplo de uso
ip_address = "172.27.131.49"
negated_ip_hex = ip_to_negated_hex(ip_address)
print(f"El valor reverso y negado de la IP {ip_address} es: {negated_ip_hex}")