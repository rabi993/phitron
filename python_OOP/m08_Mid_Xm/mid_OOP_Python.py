class Star_Cinema:
    _hall_list = []  

    def _entry_hall(self, hall):
        if isinstance(hall, Hall):
            Star_Cinema._hall_list.append(hall)
        else:
            print("Only objects of class Hall can be added.")

class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self.__seats = {}  
        self.__show_list = []  
        self.__rows = rows  
        self.__cols = cols  
        self.__hall_no = hall_no 
        self._entry_hall(self)
        super().__init__() 

    def _entry_show(self, show_id, movie_name, show_time):
        show_tuple = (show_id, movie_name, show_time)
        self.__show_list.append(show_tuple)
        seat_allocation = [['Free' for _ in range(self.__cols)] for _ in range(self.__rows)]
        self.__seats[show_id] = seat_allocation

    def _book_seats(self, show_id, seat_list):
        if show_id not in self.__seats:
            print(f"Error: Show ID {show_id} not found.")
            return
        
        seat_map = self.__seats[show_id]
        
        for row, col in seat_list:
            if 0 <= row < self.__rows and 0 <= col < self.__cols:
                if seat_map[row][col] == 'Free':
                    seat_map[row][col] = 'Booked'
                    print(f"Seat ({row}, {col}) booked for show {show_id}")
                else:
                    print(f"Error: Seat ({row}, {col}) is already booked.")
            else:
                print(f"Error: Seat ({row}, {col}) is out of range.")

    def _view_show_list(self):
        if not self.__show_list:
            print("No shows are currently running.")
        else:
            print("Shows running in Hall No. {}:".format(self.__hall_no))
            for show in self.__show_list:
                show_id, movie_name, show_time = show
                print(f"Show ID: {show_id}, Movie: {movie_name}, Time: {show_time}")

    def _view_available_seats(self, show_id):
        if show_id not in self.__seats:
            print(f"Error: Show ID {show_id} not found.")
            return
        
        seat_map = self.__seats[show_id]
        
        print("Seat Matrix: ")
        for row in range(self.__rows):
            row_display = ""
            for col in range(self.__cols):
                if seat_map[row][col] == 'Free':
                    row_display += '0 '
                else:
                    row_display += '1 '
            print(row_display.strip())
        print()

class CinemaCounter:
    def __init__(self):
        self.__halls = Star_Cinema._hall_list
    
    def view_all_shows(self):
        if not self.__halls:
            print("No halls available.")
            return
        for hall in self.__halls:
            print(f"Hall No. {hall._Hall__hall_no}:")
            hall._view_show_list()
    
    def view_available_seats(self, show_id):
        found = False
        for hall in self.__halls:
            if show_id in hall._Hall__seats:
                print(f"Hall No. {hall._Hall__hall_no}:")
                hall._view_available_seats(show_id)
                found = True
        if not found:
            print(f"Error: No available seats found for Show ID {show_id}.")

    
    def book_tickets(self, show_id, seat_list):
        found = False
        for hall in self.__halls:
            if show_id in hall._Hall__seats:
                hall._book_seats(show_id, seat_list)
                found = True
        if not found:
            print(f"Error: Show ID {show_id} not found for booking.")

def main_menu():
    counter = CinemaCounter()
    
    while True:
        print("\n1. VIEW ALL SHOW TODAY")
        print("2. VIEW AVAILABLE SEATS")
        print("3. BOOK TICKET")
        print("4. Exit")
        
        option = input("ENTER OPTION: ")
        
        if option == '1':
            counter.view_all_shows()
        
        elif option == '2':
            show_id = input("ENTER SHOW ID: ")
            counter.view_available_seats(show_id)
        
        elif option == '3':
            show_id = input("Show Id: ")
            num_tickets = int(input("Number of Ticket: "))           
            seats = []
            for _ in range(num_tickets):
                row = int(input("Enter Seat Row: "))
                col = int(input("Enter Seat Col: "))
                seats.append((row, col))
            
            counter.book_tickets(show_id, seats)
        
        elif option == '4':
            print("Exiting the system.")
            break
        
        else:
            print("Invalid option, please try again.")

Anupom = Hall(6, 5, '01')  
Anupom._entry_show('111', 'Jawan Maji', '25/09/2024 9:00 AM')
Anupom._entry_show('333', 'Sujon Maji', '25/09/2024 2:00 PM')
Anupom._entry_show('555', 'Monpura', '25/09/2024 6:00 PM')

sapla = Hall(10, 8, '02')  
sapla._entry_show('111', 'Jawan Maji', '25/10/2023 11:00 AM')
sapla._entry_show('333', 'Sujon Maji', '25/10/2023 2:00 PM')

Modhubon = Hall(10, 6, 14)  
Modhubon._entry_show('111', 'Jawan Maji', '25/10/2023 11:00 AM')
Modhubon._entry_show('333', 'Sujon Maji', '25/10/2023 2:00 PM')

main_menu()