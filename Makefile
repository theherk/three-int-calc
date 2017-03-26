three_int_calc:
	g++ *.cpp -o three_int_calc

clean:
	rm -f three_int_calc

run: three_int_calc
	./three_int_calc
