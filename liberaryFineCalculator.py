"""
    A library charges a fine for every book returned late.
    For first 5 days the fine is 50 paise,
     for 6-10 days fine is one rupee and above 10 days fine is 5 rupees.
If you return the book after 30 days your membership will be cancelled.
Write a program to accept the number of days the member is late to return
 the book and display the fine or the appropriate message.

"""


def lateFeeCalculate(days: int) -> int:
    fine = 0
    match days:
        case days if 1 <= days <= 5:
            fine = days * .5
        case days if 6 <= days <= 10:
            fine = days
        case _:
            fine = days * 10
    return fine


while (True):
    days = int(input("Enter the no of days : "))
    if(days > 0):
        break
    print("Enter valid days ")
if days >30:
    print(f'''The total fine for {days} days is {lateFeeCalculate(days)}
     Your Membership is cancelled 
     as you have submit the book after 30 days ''')
else:
    print(f"The total fine for {days} days is {lateFeeCalculate(days)}")