import csv
# contact class
class My_Contacts:
  # contact input
  def __init__(
    self, first_name, last_name, phone_number, email_address, street, city, state, zip_code, notes
    ):
    self.first_name = first_name
    self.last_name = last_name
    self.phone_number = phone_number
    self.email_address = email_address
    self.street = street
    self.city = city
    self.state = state
    self.zip_code = zip_code
    self.notes = notes
  # when contact is called this will print
  def __repr__(self):
    contact_output = 'First Name: {first_name}\nLast Name: {last_name}\nPhone Number: {phone_number}\nEmail Address: {email_address}\nStreet: {street}\nCity: {city}\nState: {state}\nZip code: {zip_code} \nNotes: {notes}'.format(first_name=self.first_name, last_name=self.last_name, phone_number=self.phone_number, email_address=self.email_address, street=self.street, city=self.city, state=self.state, zip_code=self.zip_code, notes=self.notes)
    return contact_output
#making a list to input data in csv
  def my_id(self):
    id_me = [self.first_name, self.last_name, self.phone_number, self.email_address, self.street, self.city, self.state, self.zip_code, self.notes]
    return id_me
#menu switch
print("      ***MENU***")
print("1 - Enter New Contact")
print("2 - Update Contact")
print("3 - Delete Contact")
print("4 - View Contact")
print("5 - View Contacts")
print("\n")
choice = input("Make a selection: ")
#if statment for menu
if int(choice) == 1:
  # class for user input of a contact
  class user_input(My_Contacts):
    def __init__(self):
      # user inputs
      self.first_name = input("Enter First Name: ")
      self.last_name = input("Enter Last Name: ")
      self.phone_number = input("Enter Phone Number: ")
      self.email_address = input("Enter Email Address: ")
      self.street = input("Enter Street: ")
      self.city = input("Enter City: ")
      self.state = input("Enter State: ")
      self.zip_code = input("Enter Zip Code: ")
      self.notes = input("Enter Notes: ")
  #new contact
  new_contact = user_input()
  num_rows = 0
  for row in open('contacts.csv'):
    num_rows += 1
  if num_rows <=1:
    # vvv for csv file vvv
    with open('contacts.csv', 'w') as contacts_csv:
      row_header = ['First Name', 'Last Name', 'Phone Number', 'Email Address', 'Street', 'City', 'State', 'Zip code', 'Notes']
      writer = csv.writer(contacts_csv)
      writer.writerow(row_header)
      writer.writerow(new_contact.my_id())
  else:
    with open('contacts.csv', 'a') as contacts_csv:
      row_header = ['First Name', 'Last Name', 'Phone Number', 'Email Address', 'Street', 'City', 'State', 'Zip code', 'Notes']
      writer = csv.writer(contacts_csv)
      writer.writerow(new_contact.my_id())

elif int(choice) == 5:
  with open('contacts.csv') as contacts_csv:
    contacts_data = contacts_csv.readlines()
    for line in contacts_data:
      print(line)
