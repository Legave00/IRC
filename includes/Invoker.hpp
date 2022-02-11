#ifndef Invoker_CLASS_HPP
# define Invoker_CLASS_HPP

class Invoker;

# include "ircserv.hpp"
# include "Server.hpp"
# include "User.hpp"
// # include "Logic_User.hpp"
# include <deque>
# include <vector>
# include <string>
# include <iostream>

using std::vector;
using std::string;
using std::deque;

class Invoker
{
	private:
		Server*				_server;
		string commands[15];
		string animeGirls[1];
		string gachi[1];

	public:
		Invoker(Server* server);
		virtual ~Invoker();

		void			processData(User* sender, string msg);
		void			processCommand(User* sender, deque<string> arguments);
		bool			isCommand(string data);
		deque<string>	dataToArgs(string data);
		void help(User* sender);
		void nick(User* sender, deque<string> args);
		void join(User* sender,deque<string> args);
		void leave(User* sender, deque<string> args);
		void who(User* sender, deque<string> args);
		void kick(User* sender, deque<string> args);
		void list(User* sender);
		void pass(User* sender, deque<string> args);
		void quit(User* sender);
		void user(User* sender, deque<string> args);
		void notice(User* sender, deque<string> args);
		void privateMessage(User* sender, deque<string> args);
		void anime(User *sender, deque<string> args);
		void gachimuchi(User *sender, deque<string> args);
		std::string makeString(deque <string> args);
		User *getUserFromArg(deque <string> args);
		void clearArg(deque <string> args);
		Channel *getChannelFromArg(deque <string> args);
};

#endif
