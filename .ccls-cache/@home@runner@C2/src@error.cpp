/*
*  src/error.cpp
*
*  Copyright (C) 2019  Pritam Zope
*/
/*
* Contains error printing functions with different number of parameters
*/

#include <iostream>
#include <string>
#include "error.hpp"
#include "types.hpp"
#include "token.hpp"
#include "print.hpp"

namespace csq
{
  int error_count = 0;
}

void csq::error::print_error(std::string err_msg)
{
  csq::print::print_white_bold_text("C^2: ");
  csq::print::print_red_bold_text("error: ");
  std::cout<<err_msg<<std::endl;
  csq::error_count++;
}

void csq::error::print_error(std::string filename, std::string err_msg)
{
  csq::print::print_white_bold_text("C^2: ");
  csq::print::print_white_bold_text(filename);
  csq::print::print_white_bold_text(":");
  csq::print::print_red_bold_text(" error: ");
  std::cout<<err_msg<<std::endl;
  csq::error_count++;
}

void csq::error::print_error(std::string filename, std::string err_msg, loc_t loc)
{
  std::string str = filename;
  str.push_back(':');
  str.insert(str.size(), std::to_string(loc.line));
  str.push_back(':');
  str.insert(str.size(), std::to_string(loc.col));
  csq::print::print_white_bold_text(str);
  csq::print::print_red_bold_text(" error: ");
  std::cout<<err_msg<<std::endl;
  csq::error_count++;
}

void csq::error::print_error(std::string filename, std::string err_msg, int line, int col)
{
  std::string str = filename;
  str.push_back(':');
  str.insert(str.size(), std::to_string(line));
  str.push_back(':');
  str.insert(str.size(), std::to_string(col));
  csq::print::print_white_bold_text(str);
  csq::print::print_red_bold_text(" error: ");
  std::cout<<err_msg<<std::endl;
  csq::error_count++;
}

void csq::error::print_error(std::string filename, std::string err_msg,
                              char ch, int line, int col)
{
  std::cout<<filename<<":"<<line<<":"<<col<<": error: "<<err_msg<<" "<<ch<<std::endl;
  csq::error_count++;
}

void csq::error::print_error(std::string filename, std::string err_msg, std::string arg)
{
  csq::print::print_white_bold_text("C^2: ");
  csq::print::print_white_bold_text(filename);
  csq::print::print_white_bold_text(":");
  csq::print::print_red_bold_text(" error: ");
  std::cout<<err_msg<<arg<<std::endl;
  csq::error_count++;
}

void csq::error::print_error(std::string filename, std::string err_msg,
                                std::string arg, loc_t loc)
{
  std::string str = filename;
  str.push_back(':');
  str.insert(str.size(), std::to_string(loc.line));
  str.push_back(':');
  str.insert(str.size(), std::to_string(loc.col));
  csq::print::print_white_bold_text(str);
  csq::print::print_red_bold_text(" error: ");
  std::cout<<err_msg;
  csq::print::print_white_bold_text(arg);
  std::cout<<std::endl;
  csq::error_count++;
}

void csq::error::print_error(std::string filename, std::string err_msg,
                              std::string arg1, std::string arg2, loc_t loc)
{
  std::string str = filename;
  str.push_back(':');
  str.insert(str.size(), std::to_string(loc.line));
  str.push_back(':');
  str.insert(str.size(), std::to_string(loc.col));
  csq::print::print_white_bold_text(str);
  csq::print::print_red_bold_text(" error: ");
  std::cout<<err_msg;
  csq::print::print_white_bold_text(arg1);
  std::cout<<arg2;
  std::cout<<std::endl;
  csq::error_count++;
}

void csq::error::print_error(std::string filename, std::string err_msg,
                              std::string arg, int line, int col)
{
  std::string str = filename;
  str.push_back(':');
  str.insert(str.size(), std::to_string(line));
  str.push_back(':');
  str.insert(str.size(), std::to_string(col));
  csq::print::print_white_bold_text(str);
  csq::print::print_red_bold_text(" error: ");
  std::cout<<err_msg;
  csq::print::print_white_bold_text(arg);
  std::cout<<std::endl;
  csq::error_count++;
}
