#kod hala tamamlanmamıştır ve sadece arduinodan gelen veriyi ayrıştırmayı sağlar.
arduinodan_gelen_veri = "121/211/212/212/21 "

# def gelen_veriyi_ayrıstırma(numbers_str):
#   numbers = numbers_str.split('/')
#   print(numbers)
#   ultrasonik_sensor_1 = numbers[0]
#   ultrasonik_sensor_2 = numbers[1]
#   ultrasonik_sensor_3 = numbers[2]
#   ultrasonik_sensor_4 = numbers[3]  
#   ultrasonik_sensor_5 = numbers[4]
#   print(ultrasonik_sensor_1)
#   print(ultrasonik_sensor_2)
#   print(ultrasonik_sensor_3)
#   print(ultrasonik_sensor_4)
#   print(ultrasonik_sensor_5)


#aşağıda gördüğünüz kod yukarıdaki kodun "range" kullanılarak kısaltılmış halidir
def gelen_veriyi_ayrıstırma(numbers_str):
  numbers = numbers_str.split('/')
  for i in range(5):
    exec(f'ultrasonik_sensor_{i+1} = numbers[{i}]')
    print(eval(f'ultrasonik_sensor_{i+1}'))
 
 
gelen_veriyi_ayrıstırma(arduinodan_gelen_veri)

