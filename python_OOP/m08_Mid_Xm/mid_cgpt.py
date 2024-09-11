# Star_Cinema class to manage all halls in the cinema
class Star_Cinema:
    _hall_list = []  # Protected class attribute to store all hall objects

    def _entry_hall(self, hall):
        """Inserts an object of class Hall into the _hall_list."""
        if isinstance(hall, Hall):
            Star_Cinema._hall_list.append(hall)
        else:
            print("Only objects of class Hall can be added.")

# Hall class to manage shows and seats for a specific hall
class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        super().__init__()  # Initialize Star_Cinema (if needed)
        self.__seats = {}  # Private dictionary to store seat info, empty initially
        self.__show_list = []  # Private list of tuples, empty initially
        self.__rows = rows  # Private number of rows in the hall
        self.__cols = cols  # Private number of columns in the hall
        self.__hall_no = hall_no  # Private unique hall number

        # Automatically insert the hall object into the Star_Cinema _hall_list
        self._entry_hall(self)

    def _entry_show(self, show_id, movie_name, show_time):
        """
        Adds a new show with ID, movie name, and time to __show_list.
        Allocates a 2D list of seats for that show.
        """
        show_tuple = (show_id, movie_name, show_time)
        self.__show_list.append(show_tuple)

        # Allocate a 2D list for the seats for this show (initially all free, marked as 'Free')
        seat_allocation = [['Free' for _ in range(self.__cols)] for _ in range(self.__rows)]
        self.__seats[show_id] = seat_allocation

    def _book_seats(self, show_id, seat_list):
        """
        Books the seats for a given show ID.
        :param show_id: The ID of the show.
        :param seat_list: List of tuples where each tuple contains (row, col).
        """
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
        """Views all the shows running in the hall."""
        if not self.__show_list:
            print("No shows are currently running.")
        else:
            print("Shows running in Hall No. {}:".format(self.__hall_no))
            for show in self.__show_list:
                show_id, movie_name, show_time = show
                print(f"Show ID: {show_id}, Movie: {movie_name}, Time: {show_time}")

    def _view_available_seats(self, show_id):
        """
        Views the seat matrix for a given show ID.
        :param show_id: The ID of the show.
        """
        if show_id not in self.__seats:
            print(f"Error: Show ID {show_id} not found.")
            return
        
        seat_map = self.__seats[show_id]
        
        print("Seat Matrix:")
        for row in range(self.__rows):
            row_display = ""
            for col in range(self.__cols):
                if seat_map[row][col] == 'Free':
                    row_display += '0 '
                else:
                    row_display += '1 '
            print(row_display.strip())
        print()

# CinemaCounter class for user to interact with the system
class CinemaCounter:
    def __init__(self):
        self.__halls = Star_Cinema._hall_list
    
    def view_all_shows(self):
        """View all shows running in all halls."""
        if not self.__halls:
            print("No halls available.")
            return
        for hall in self.__halls:
            print(f"Hall No. {hall._Hall__hall_no}:")
            hall._view_show_list()
    
    def view_available_seats(self, show_id):
        """View available seats for a specific show ID in all halls."""
        found = False
        for hall in self.__halls:
            if show_id in hall._Hall__seats:
                print(f"Hall No. {hall._Hall__hall_no}:")
                hall._view_available_seats(show_id)
                found = True
        if not found:
            print(f"Error: No available seats found for Show ID {show_id}.")
    
    def book_tickets(self, show_id, seat_list):
        """Book tickets for a specific show ID in all halls."""
        found = False
        for hall in self.__halls:
            if show_id in hall._Hall__seats:
                hall._book_seats(show_id, seat_list)
                found = True
        if not found:
            print(f"Error: Show ID {show_id} not found for booking.")

# Main Menu to interact with the system
def main_menu():
    counter = CinemaCounter()
    
    while True:
        print("\n1. VIEW ALL SHOW TODAY")
        print("2. VIEW AVAILABLE SEATS")
        print("3. BOOK TICKET")
        print("4. Exit")
        
        option = input("ENTER OPTION: ")
        
        if option == '1':
            # View all shows
            counter.view_all_shows()
        
        elif option == '2':
            # View available seats for a specific show
            show_id = input("ENTER SHOW ID: ")
            counter.view_available_seats(show_id)
        
        elif option == '3':
            # Book tickets for a show
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

# Example usage: Add halls and shows
hall1 = Hall(7, 7, 1)  # Hall with 7 rows and 7 columns
hall1._entry_show('111', 'Jawan Maji', '25/10/2023 11:00 AM')
hall1._entry_show('333', 'Sujon Maji', '25/10/2023 2:00 PM')

# Start the main menu
main_menu()
