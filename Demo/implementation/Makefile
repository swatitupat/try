PROJECT_NAME = Train_Ticket_Booking_System
DO_IT =  SRC/compute.c SRC/display.c SRC/cancel.c SRC/charge.c SRC/login.c SRC/printticket.c SRC/reservation.c SRC/specifictrain.c SRC/viewDetails.c SRC/validate.c unity/unity.c SRC/present.c 
$(PROJECT_NAME) : $(SRC) 
	gcc Main.c  -I -c $(DO_IT)  -o $(PROJECT_NAME).out
run: $(PROJECT_NAME)
	$(PROJECT_NAME).exe
	
runL:$(PROJECT_NAME)
	./$(PROJECT_NAME).out
	
	
clean:
	del /q *.exe
	
cleanL:
	rm *.out
