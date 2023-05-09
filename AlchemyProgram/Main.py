from Inventory import invManage
inp = ''
print("Welcome to the Morrowind Alchemy Assist")
i = 0
while i < 1:
    inp = input('Please enter the command you would like to do. For a list of commands, type help: ')
    if inp == 'help':
        print('Type \"Match Herbs\" in order to enter herbs from your inventory or a seller\'s inventory to find '
              'available potion combinations')
        print('Type \"Find Herbs\" in order to find available matching herbs from existing ones (not functioning)')
        print('At any time type \"Main Menu\" to go back to this menu')
    elif inp == 'Match Herbs':
        invManage()
    elif inp == 'Find Herbs':
        print('This option is not available ring now. Please try again after a later update')
    elif inp == 'Main Menu':
        print('Returning to the main menu')
    else:
        print('Did not understand your response. Please try again')
