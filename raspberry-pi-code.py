import serial
döngü_sayısı = 1

ser = serial.Serial('/dev/ttyACM0', 9600) 
def gelen_veriyi_ayrıstırma(numbers_str):
  numbers = numbers_str.split('/')
  for i in range(5):
    exec(f'ultrasonik_sensor_{i+1} = numbers[{i}]')
    print(eval(f'ultrasonik_sensor_{i+1}'))
    

while True:
    print(döngü_sayısı,". döngü")
    arduinodan_gelen_veri = ser.readline().decode('utf-8') 
    gelen_veriyi_ayrıstırma(arduinodan_gelen_veri)
    döngü_sayısı += 1



 
 
