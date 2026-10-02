# Grocery Bill Generation Program

# Accept customer name
customer_name = input("Enter customer name: ")

# Input prices of 3 products
price1 = float(input("Enter price of Product 1: "))
price2 = float(input("Enter price of Product 2: "))
price3 = float(input("Enter price of Product 3: "))

# Calculate total amount
total = price1 + price2 + price3

# Calculate GST (14%)
gst = total * 0.14

# Calculate final amount
final_bill = total + gst

# Display the bill
print("\n========== GROCERY BILL ==========")
print("Customer Name :", customer_name)
print("----------------------------------")
print(f"Product 1 : ${price1:.2f}")
print(f"Product 2 : ${price2:.2f}")
print(f"Product 3 : ${price3:.2f}")
print("----------------------------------")
print(f"Total      : ${total:.2f}")
print(f"GST (14%)  : ${gst:.2f}")
print("----------------------------------")
print(f"Final Bill : ${final_bill:.2f}")
print("==================================")

