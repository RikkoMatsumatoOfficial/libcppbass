#include <Windows.h>
#include <iostream>
#include <cppbass.h>
using namespace std;
void mainexample(LPCSTR filename) {
	try {
		cppbass::BASS_INIT();
		cppbass::BASS_Start();
		uint32_t zk = cppbass::BASS_StreamCreateFile(filename, BASS_LOOP);
		cppbass::BASS_ChannelPlay(zk);
		system("pause");
	}
	catch (std::exception& ex) {
		MessageBoxA(0, ex.what(), "ERROR!!!", MB_OK | MB_ICONERROR);
		exit(334);
	}
	exit(344);
}

int main() {
	mainexample("BlingBangBangBorn.mp3");
	exit(3312);
	return 0;
}