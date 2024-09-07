class phone:
    manufactured = 'china'

    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price

    def send_sms(self,phone, sms):
        text = f'sending to: {phone} {sms}'
        print(text)

my_phone = phone('kala chan', 'oppo', 1200)
print(my_phone.owner, my_phone.brand, my_phone.price)

her_phone = phone('sada chan', 'iphone', 122550)
print(her_phone.owner, her_phone.brand, her_phone.price)

my_phone.send_sms(6354165, ' i miss you')
her_phone.send_sms(5+6+65+5, 'i love you')

he_phone = phone('chan', 'pixel', 8000000)
print(he_phone.owner, he_phone.brand, he_phone.price)
