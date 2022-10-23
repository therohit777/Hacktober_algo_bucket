def BMI():
    Imperial = input("Do you want to use imperial unitsystem? Y or N: ")
    if Imperial == "Y":
        Height = 2.54 * float(input("Enter your height in inches: "))
        Weight = 0.453 * float(input("Enter your Weight in lb: "))
    elif Imperial == "N":
        Height = float(input("Enter your height in centimeters: "))
        Weight = float(input("Enter your Weight in Kg: "))
    else:
        print("Wrong input write Y or N")
    Height = Height/100

    BMI = Weight/(Height*Height)
    print("your Body Mass Index is: ", BMI)
    if(BMI > 0):
        if(BMI <= 16):
            print("you are severely underweight")
        elif(BMI <= 18.5):
            print("you are underweight")
        elif(BMI <= 25):
            print("you are Healthy")
        elif(BMI <= 30):
            print("you are overweight")
        else:
            print("you are severely overweight")
    else:
        ("enter valid details")


if __name__ == "__main__":
    BMI()
