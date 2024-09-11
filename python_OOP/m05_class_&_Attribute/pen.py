class pen:
    manufactured = 'BD'

    def __init__(self, brand, color, price):
        self.brand = brand
        self.color = color
        self.price = price

    def send_sms(self,phone, sms):
        text = f'sending to: {phone} {sms}'
        print(text)

my_pen = pen('matadoor', 'red', 12)
print(my_pen.brand, my_pen.color, my_pen.price)

her_pen = pen('Echono', 'black', 10)
print(her_pen.brand, her_pen.color, her_pen.price)

my_pen.send_sms(6354165, ' i miss you')
her_pen.send_sms(5+6+65+5, 'i love you')

he_pen = pen('All time', 'golden', 80)
print(he_pen.brand, he_pen.color, he_pen.price)
