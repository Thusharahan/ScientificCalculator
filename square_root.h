double squareRoot(double x);

double squareRoot(double x) {
    if (x == 0) return 0;

    double precision = 0.00001;
    double guess = x / 2.0; // Initial guess can be any value

    while (1) {
        double new_guess = (guess + x / guess) / 2.0;

        if((guess - new_guess) < precision && (new_guess - guess) < precision)
        {
            break;
        }
        
        guess = new_guess;
    }

    return guess;
}