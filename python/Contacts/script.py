def enter_contact():
    first_name = input('First name: ')
    last_name = input('Last name: ')
    phone_numer = input('Phone number: ')
    email_address = input('Email address: ')
    contact_dict = {
        'first name': first_name,
        'last name': last_name,
        'phone number': phone_numer,
        'email address': email_address
        }
    return contact_dict
def menu_contact():
    print('[a] - new contact')
    print('[b] - view contacts')
    print('[c] - update contacts')
    print('[d] - delete contacts')
    print('[e] - exit')
def menu_selection():
    temp_list = ['a','b','c','d','e']
    while True:
        menu_contact()
        scr = input()
        if scr in temp_list:
            return scr
        else:
            print('enter a valid choice')
            continue

selection = menu_selection()
if selection == 'a':
    enter_contact()
    menu_selection()
