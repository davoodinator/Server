/*  EQEMu:  Everquest Server Emulator
    Copyright (C) 2001-2006  EQEMu Development Team (http://eqemulator.net)

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; version 2 of the License.
  
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY except by those people which sell it, which
	are required to give you total support for your newly bought product;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR
	A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
	
	  You should have received a copy of the GNU General Public License
	  along with this program; if not, write to the Free Software
	  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
/*  EQEMu:  Everquest Server Emulator
    Copyright (C) 2001-2006  EQEMu Development Team (http://eqemulator.net)

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; version 2 of the License.
  
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY except by those people which sell it, which
	are required to give you total support for your newly bought product;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR
	A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
	
	  You should have received a copy of the GNU General Public License
	  along with this program; if not, write to the Free Software
	  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include <iostream>
#include <fstream>
#include <memory>
#include "memory_mapped_file_test.h"
#include "ipc_mutex_test.h"
#include "fixed_memory_test.h"

int main() {
    try {
        std::unique_ptr<Test::Output> output(new Test::HtmlOutput);
        Test::Suite tests;
        tests.add(std::auto_ptr<MemoryMappedFileTest>(new MemoryMappedFileTest()));
        tests.add(std::auto_ptr<IPCMutexTest>(new IPCMutexTest()));
        tests.add(std::auto_ptr<FixedMemoryHashTest>(new FixedMemoryHashTest()));
        tests.run(*output, true);

        std::ofstream outfile("tests.html");
        Test::HtmlOutput* const html = dynamic_cast<Test::HtmlOutput*>(output.get());
        if(html)
            html->generate(outfile, true, "EQEmuTests");

        outfile.close();
    } catch(...) {
        getchar();
        return -1;
    }
    getchar();
    return 0;
}