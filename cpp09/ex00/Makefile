name = btc

all : ${name}

${name}:
	c++ -std=c++98 -Wall -Wextra -Werror BitcoinExchange.cpp main.cpp -o ${name}

clean :
	rm ${name}

re : clean all