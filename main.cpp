/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Fang
 *
 * Created on September 7, 2016, 10:24 PM
 */

#include <iostream>
#include <boost/filesystem.hpp>
#include <locale>
#include <boost/regex.hpp>
using std::cout;
using std::cin;
using std::endl;
using namespace boost::filesystem;
std::string captilize(std::string ins) {
	//std::cout << ins << std::endl;
	std::locale loc;
	bool flag = 0;
	for (std::string::size_type i = 0; i<ins.length(); ++i) {
		
		if (i != 0 && flag != 1){
			ins[i] = std::tolower(ins[i], loc);
		}
		if (i == 0) {
			ins[i] = std::toupper(ins[i], loc);
		}
		if (flag == 1) {
			ins[i] = std::toupper(ins[i], loc);
			flag = 0;
		}
		if (ins[i] == ' ') {
			flag = 1;
		}

	}
	//std::cout << ins << std::endl;
	return ins;
}
int main(int argc, char* argv[])
{
	std::cout << "Input dir: ";
	char indir[100];
	std::cin.getline(indir,sizeof(indir));	
	/*if (argc < 2)
	{
		cout << "Usage: tut3 path\n";
		return 1;
	}*/

	path p(indir);

	try
	{
		if (exists(p))
		{
			if (is_regular_file(p))
				cout << p << " size is " << file_size(p) << '\n';

			else if (is_directory(p))
			{       std::
				cout << p << " is a directory containing:\n"<<endl;
                                cout << "The p size: " << p.size()<<endl;
                                directory_iterator end_iter;
                                for (directory_iterator dir_itr(p);dir_itr != end_iter;++dir_itr){
                            

					std::string part1, part2, part3,tmp;
					std::string test = dir_itr->path().filename().string();
					cout << "Original Filename: "<<test << std::endl;

					boost::regex pat1_1("(AAA)+");
					boost::regex pat1_2("(BBB)+");
					boost::regex pat1_3("(CCC)+");
					boost::regex pat1_4("(DDD)+");
					boost::regex pat1_5("(EEE)+");
					boost::regex pat1_6("(FFF)+");
					boost::regex pat1_7("(GGG)+");
					boost::regex pat1_8("(HHH)+");
					boost::regex pat1_9("(III)+");
					boost::regex pat1_10("(JJJ)+");
					boost::regex pat1_11("(KKK)+");
					boost::regex pat1_12("(LLL)+");
					boost::regex pat1_13("(MMM)+");
                    boost::regex pat1_14("(NNN)+");
                    boost::regex pat1_15("(OOO)+");
					boost::regex pat2("\\d{4}(\\s|-)?\\d{2}(\\s|-)?\\d{2}");
					//boost::regex pat3("\\w+(\\s|-){1}\\w+(\\s|-){1}(\\w+){1}");
					//boost::regex pat4("\\w+(\\s|-){1}\\w+(\\s-\\s){1}");
					boost::regex pat3("\\w+(\\s){1}\\w+(\\s-\\s){1}|\\w+(\\s-\\s){1}");
					boost::regex pat4("\\w+(\\s-\\s){1}");
					boost::regex pat5("\\w+(\\s){1}\\w+(\\s){1}\\w+");
					boost::regex pat6("\\w+(\\s){1}\\w+");
					//boost::regex pat5("\\w+(\\s|-){1}\\w+");
					
					boost::smatch matches;
					
					if (boost::regex_search(test, matches, pat1_1)) {
						part1 = "[A] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_2)) {
						part1 = "[B] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_3)) {
						part1 = "[C] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_4)) {
						part1 = "[D] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_5)) {
						part1 = "[E] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_6)) {
						part1 = "[F] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_7)) {
						part1 = "[G] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_8)) {
						part1 = "[H] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_9)) {
						part1 = "[I] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_10)) {
						part1 = "[J] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_11)) {
						part1 = "[K] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_12)) {
						part1 = "[L] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_13)) {
						part1 = "[M] - ";
						tmp = test.substr(matches.position() + matches.length());
					} else if (boost::regex_search(test, matches, pat1_14)) {
						part1 = "[N] - ";
						tmp = test.substr(matches.position() + matches.length());
					}else if (boost::regex_search(test, matches, pat1_15)) {
						part1 = "[O] - ";
						tmp = test.substr(matches.position() + matches.length());
					}
					if (boost::regex_search(tmp, matches, pat2)) {
						part2 = matches.str();
						if (part2.length() == 10) {
							part2.at(4) = '-';
							part2.at(7) = '-';
						}
						else if (part2.length() == 8) {
							part2.insert(4, "-");
							part2.insert(7, "-");
						}
						part2 = part2 + " - ";
						tmp = tmp.substr(matches.position() + matches.length());
					}
					if (boost::regex_search(tmp, matches, pat3)) {
						part3 = matches.str();
						part3 = captilize(part3);
						tmp = tmp.substr(matches.position() + matches.length());
					} else if (boost::regex_search(tmp, matches, pat4)) {
						part3 = matches.str();
						part3 = captilize(part3);
						tmp = tmp.substr(matches.position() + matches.length());
					} else if (boost::regex_search(tmp, matches, pat5)) {
						part3 = matches.str();
						tmp = tmp.substr(matches.position() + matches.length());
						int size = part3.length();
						int count = 0;
						for (int i = 0; i < size; i++) {
							if (part3.at(i) == ' ') {
								if (count == 0) {
									count = 1;
								} else if (count == 1) {
									count = i;
								}
							}
						}
						part3 = captilize(part3);
						part3.insert(count, " -");
					} else if (boost::regex_search(tmp, matches, pat6)) {
						part3 = matches.str();
						tmp = tmp.substr(matches.position() + matches.length());
						int size = part3.length();
						int count = 0;
						for (int i = 0; i < size; i++) {
							if (part3.at(i) == ' ') {
								if (count == 0) {
									count = i;
								}
							}
						}
						part3 = captilize(part3);
						part3.insert(count, " -");
					}
					path ab = dir_itr->path();
					tmp = captilize(tmp);
					ab = dir_itr->path().parent_path().string() + "\\" + part1 + part2 + part3 + tmp;
					std::string out = part1 + part2 + part3 + tmp;
					cout << "Output Filename:   "<<out << std::endl;
                                        if(test==out){
                                           cout << "No change"<<std::endl; 
                                        } else {
					rename(dir_itr->path(), ab);
                                        }
				}
			}
			else
				cout << p << " exists, but is not a regular file or directory\n";
		}
		else
			cout << p << " does not exist\n";
	}

	catch (const filesystem_error& ex)
	{
		cout << ex.what() << '\n';
	}
        cin>>indir;
	return 0;
}

