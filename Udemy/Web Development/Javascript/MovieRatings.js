var movies = [
{
	name: "The Matrix",
	watched: true,
	rating: 5
},
{
	name: "Detective Pikachu",
	watched: false,
	rating: 4.5
},
{
	name: "V for Vendetta",
	watched: true,
	rating: 4
}
]

for (var i = 0; i < movies.length; i++)
{
	var watchedStr;

	if (movies[i].watched === true)
	{
		watchedStr = "watched";
	}
	else
	{
		watchedStr = "not watched"
	}

	console.log("You have " + watchedStr + " " + movies[i].name + ". Rating: " + movies[i].rating + " stars");
}