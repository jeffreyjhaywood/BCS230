double Average(double s[])
{
	double sum = 0, average;

	for (int i = 0; i <= 11; i++)
	{
		sum = s[i] + sum;
	}

	average = sum / 12;

	return average;

}