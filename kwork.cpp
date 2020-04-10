#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{	
	if (argc!=3){
		cout << "Wrong arguments" << endl;
	}
	else {
		string tmpstr;
		ifstream file1(argv[1]);
		if(!(file1.is_open())){
			cout<<"File is not found"<<endl;
		}
		else {
			cout << "File name: " << argv[1]<< endl;
			cout << "searching string: " << argv[2]<<endl;			
			cout << "Found lines:"<< endl;			
			while (!file1.eof()){
				getline(file1, tmpstr, '\n');		
				size_t found=tmpstr.find(argv[2]);	
				if (found!=string::npos){
					cout << tmpstr<<endl;
				}
			}	
		file1.close();
		}
	}
	return 0;
}
