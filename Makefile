1: clean
	g++ 1_data_structure_without_encapsulation.cpp -o 1_data_structure_without_encapsulation
	@echo
	./1_data_structure_without_encapsulation

2: clean
	g++ 2_abstraction_through_functions.cpp -o 2_abstraction_through_functions
	@echo
	./2_abstraction_through_functions

3: clean
	g++ 3_functions_with_validations.cpp -o 3_functions_with_validations
	@echo
	./3_functions_with_validations

4: clean
	g++ 4_board_class_with_public_methods.cpp -o 4_board_class_with_public_methods
	@echo
	./4_board_class_with_public_methods

5: clean
	g++ 5_board_class_with_encapsulation.cpp -o 5_board_class_with_encapsulation
	@echo
	./5_board_class_with_encapsulation

clean:
	@rm -f 1_data_structure_without_encapsulation
	@rm -f 2_abstraction_through_functions
	@rm -f 3_functions_with_validations
	@rm -f 4_board_class_with_public_methods
	@rm -f 5_board_class_with_encapsulation
