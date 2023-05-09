# See PyCharm help at https://www.jetbrains.com/help/pycharm/
hours = 0.0
rate = 0.0
overtime = 0.0
n = 0
while n == 0:
    # TODO Add option to calculate for different portions of time from user inputs
    hours = input('How much hours did you work last week?')
    try:
        hours = float(hours)
        if 168 >= hours >= 0:
            n = 1
        else:
            print('You have entered an invalid amount of hours, please re enter it now')
    except:
        print('Please enter a number')
while n == 1:
    rate = input('What is your hourly pay?')
    try:
        rate = float(rate)
        if rate >= 0:
            n = 2
        else:
            print('You have entered a negative amount of pay, please re enter it now')
    except:
        print('Please enter a number')
if hours > 40:
    overtime = hours - 40
calculation = hours * rate + overtime * 1.5
# TODO Add checker for user location in order to match currency type
print('$' + str(calculation) + ' dollars')
print(hours * rate)