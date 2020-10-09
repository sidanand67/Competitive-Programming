unction trim(s) {
	return s.replace(/^\s+|\s+$/gm, '');
}
 
function tokenize(s) {
	return trim(s).split(/\s+/);
}
 
function tokenizeIntegers(s) {
	var tokens = tokenize(s);
	for (var i = 0; i < tokens.length; i += 1) {
		tokens[i] = parseInt(tokens[i]);
	};
	return tokens;
}
 
function main() {
	var integers = tokenizeIntegers(readline());
	var maxBoxes = integers[0], brandNum = integers[1];
 
	var brands = [];
	
	for (var i = 0; i < brandNum; i += 1) {
		var integers = tokenizeIntegers(readline());
		brands.push({ boxes: integers[0], matches: integers[1] });
	}
 
	brands.sort(function(a, b) {
		return a.matches - b.matches;
	});
 
	var matches = 0;
 
	for (var i = brands.length-1; i >= 0 && maxBoxes > 0; i -= 1) {
		var boxes = Math.min(brands[i].boxes, maxBoxes);
		matches += boxes*brands[i].matches;
		maxBoxes -= boxes;
	}
 
	print(matches);
}
 
main();
