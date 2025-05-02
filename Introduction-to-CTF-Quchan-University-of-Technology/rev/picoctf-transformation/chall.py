def encode_original(flag):
    result =''
    result.join([chr((ord(flag[i]) << 8) + ord(flag[i + 1])) for i in range(0, len(flag), 2)])
    return result
















































def encode_beautiful(flag):
    result = ""

    for i in range(0, len(flag), 2):

        upper_byte = ord(flag[i]) << 8 #11110011,00000000
        lower_byte = ord(flag[i + 1])  #00000000,11010001

        current_data= upper_byte + lower_byte
        result += chr(current_data)

    return result
















def decode(result):
    flag = ""
    for i in range(len(result)):
        second_char = ord(result[i]) & 0x00ff
        first_char = ord(result[i]) >> 8
        #10,01
        #00,10
        input(f"{result[i]}: {chr(first_char)}, {chr(second_char)}")
        flag += chr(first_char)
        flag += chr(second_char)
    return flag
































def solve_challenge():
    encoded = open('./enc', 'r').read()
    print(decode(encoded))

solve_challenge()
