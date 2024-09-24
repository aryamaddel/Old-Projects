def armstrong_number(number):
    """
    Function to check if a number is an Armstrong number
    """
    if number<153:
        return False
    number_copy = number
    sum = 0
    while number_copy>0:
        sum += (number_copy%10)**3;
        number_copy=number_copy//10
    if sum == number:
        return True
    else:
        return False

number = int(input("Enter a number: "))
print(armstrong_number(number))
