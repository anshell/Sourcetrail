#ifndef COMMANDLINE_COMMAND_CONFIG_H
#define COMMANDLINE_COMMAND_CONFIG_H

#include <memory>
#include <iostream>
#include "utility/commandline/commands/CommandlineCommand.h"

class CommandLineParser;

namespace commandline
{
enum class ReturnStatus;

class CommandConfig : public Command {
public:
	CommandConfig(CommandLineParser* parser);

	virtual void setup();
	virtual ReturnStatus parse(std::vector<std::string>& args);
private:
	void printSettings();

};

} // namespace cmd

#endif // COMMANDLINE_COMMAND_CONFIG_H