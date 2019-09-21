function printReverse(myArray)
{
	for (var i = (myArray.length - 1); i >= 0; i--)
	{
		console.log(myArray[i]);
	}
}

function isUniform(myArray2)
{
	firstElement = myArray2[0];

	for (var i = 1; i < myArray2.length; i++)
	{
		if (myArray2[i] != firstElement)
		{
			return false;
		}
	}

	return true;
}

function sumArray(myArray3)
{
	var sum = 0;

	for (var i = 0; i < myArray3.length; i++)
	{
		sum += myArray3[i]
	}

	return sum;
}

function max(myArray4)
{
	maxNumber = myArray4[0];

	for (var i = 1; i < myArray4.length; i++)
	{
		if (myArray4[i] > maxNumber)
		{
			maxNumber = myArray4[i];
		}
	}

	return maxNumber;
}

testArray = [1,2,3,4,5,[1,2,3],["Yo","Ho"],"Yo","Ho","Conor"];

console.log(isUniform(testArray));
console.log(isUniform([1,1,1,1]));
console.log(isUniform(["r","r","r"]));
console.log(isUniform(["e","e","g"]));

numberArray = [1,2,3,4,5,10,111,13,21,32,1,1,1,];

console.log(sumArray(numberArray));

maxNumberArray = [3,5,66,99,100,101,43,56,1,0];

console.log("Max number: " + max(maxNumberArray));