int digitSum(int n) {
	int sum = 0;

	while(n != 0) {
		sum += n % 10;
		sum /= 10;
	}

	return sum;
}
