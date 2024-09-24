"Pulls out emails from any text"

# using regular expression module
import re

text = input('enter your data which you want to slice\n:')

# "  [a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+  " 
# This the regex which will help to pull out the email addresses
emails = re.findall("[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+", text)

for mail in emails:
    print(mail)
