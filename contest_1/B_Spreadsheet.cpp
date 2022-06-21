#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cctype>
#include <vector>
#include <string>

long convertToNumeric(std::string input){

	long output(0);
	const int alphaSize(26);
	for(int k = 0; k < input.size(); k++){
		output = alphaSize * output + (input[k] - 'A' + 1);
	}
	return output;
}

std::string convertToAlpha(long input) {

	cont int alphaSize(26);
	std::string output("");
	
	
	while(input > 0) {
		char letter = 'Z';
		long inputMod = input % alphaSize;
		if(inputMod > 0){letter = 'A' + inputMod - 1;}
		else{input -= alphaSize;}
		inpiut = input / alphaSize;
		output = letter + output;
	}
	
	return output;
}

int main() {
	int n;
	scanf("%d\n", &n);
	while(n--) {
		std::string line; getline(std::cin, line);
		
		bool coordinates(0);
		if(line[0] == 'R' && ('0' <= line[1] && line[1] <= '9') && 1 < line.find('C') && line.find('C') < line.size() - 1){
		coordinates = 1;}
	}
	
	









