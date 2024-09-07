def call():
    print('calling someone i dont know')
    return 'call done'


class phone:
    price = 12555
    color = 'blue'
    brand = 'samsung'
    features = ['camera', 'speaker', ' hammer']

    def call(self):
        print( 'calling one person')
    
    def send_sms(self, phone, sms):
        text = f'sending sms to: {phone} and message: {sms}'
        return text

my_phone = phone()
print(my_phone.features)
my_phone.call() 
result = my_phone.send_sms(4500056,'I forgot to miss you')
print(result)