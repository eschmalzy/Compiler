#include "token.h"
#include "scanner.h"
#include "instructions.h"
#include "symbol.h"
#include "node.h"
#include "parser.h"

int main() {
	 
	InstructionsClass inst;
	Scanner *scanner = new Scanner("final.txt");
	SymbolTable *table = new SymbolTable();
	Parser parser(scanner, table);

	StartNode * root = parser.Start();
	root->Interpret();
	/*root->Code(inst);
	inst.Finish();
	inst.Execute();*/

	delete root;
	return 0;
}
