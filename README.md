three-int-calc
==============

    make clean run

### output ###

```
[0] % make clean run
rm -f three_int_calc
g++ *.cpp -o three_int_calc
./three_int_calc
Input three different integers: 2 6 6
Sum is 14
Average is 4.66667
Product is 72
Smallest is 2
Largest is 6
```

### notes ###

First, in the final output block you can either end the lines and call `cout` each line, like this:

``` c++
cout << "Sum is " << num1 + num2 + num3 << endl;
cout << "Average is " << (num1 + num2 + num3) / 3.0 << endl;
cout << "Product is " << num1 * num2 * num3 << endl;
cout << "Smallest is " << smallest << endl;
cout << "Largest is " << largest << endl;
```

Or you can do continuation, by not including the semicolon, like this:

``` c++
cout << "Sum is " << num1 + num2 + num3 << endl
     << "Average is " << (num1 + num2 + num3) / 3.0 << endl
     << "Product is " << num1 * num2 * num3 << endl
     << "Smallest is " << smallest << endl
     << "Largest is " << largest << endl;
```

Next, in order to properly calculate the mean of integers, the solution must be a float. For example, the mean of (int)4 and (int)5 is (float)4.5. To make this happen, just make sure any of the values in the expression are float. You can do so by just changing `/ 3` to `/ 3.0`.

The logic was spot on. Nice.
