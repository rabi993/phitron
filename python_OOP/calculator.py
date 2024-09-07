class calculator :
    brand = 'Casio ms990'
    def add(self, num1, num2):
        text= f'{num1} + {num2} = {num1+num2}'
        return text
    
    def deduct(self, num1, num2):
        text= f'{num1} - {num2} = {num1 - num2}'
        return text
        
    def multiply(self, num1, num2):
        text= f'{num1} * {num2} = {num1 * num2}'
        return text
        
    def devide(self, num1, num2):
        text= f'{num1} / {num2} = {num1 / num2}'
        text1= f'{num1} // {num2} = {num1 // num2}'
        print(text1)
        return text

cal_result = calculator()
add_result = cal_result.add(6,9)
print(add_result)
deduct_result = cal_result.deduct(6,2)
deduct_result1 = cal_result.deduct(1,2)
print(deduct_result)
print(deduct_result1)
multi_result = cal_result.multiply(5,6)
print(multi_result)
devide_result = cal_result.devide(11,2)
print(devide_result)
devide_result1 = cal_result.devide(6,18)
print(devide_result1)