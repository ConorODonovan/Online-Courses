function isEven(num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

function factorial(num)
{
	var numFact = num;

	while (num > 1)
	{
		numFact *= (num - 1);
		num -= 1;
	}

	return numFact;
}

function kebabToSnake(userString)
{
	var userStringNew = userString.replace("-", "_");

	return userStringNew;
}

userNum = prompt("Please enter a number: ");
console.log(isEven(userNum));
console.log(factorial(userNum));

inputString = prompt("Please enter a string: ");
console.log(kebabToSnake(inputString));