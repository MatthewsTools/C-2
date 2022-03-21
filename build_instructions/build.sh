rm -r ./../build
mkdir ./../build
g++ -c -g -Wall -MMD -std=c++11 ./../src/analyze.cpp -o ./../src/analyze.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/convert.cpp -o ./../src/convert.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/error.cpp -o ./../src/error.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/insn.cpp -o ./../src/insn.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/lex.cpp -o ./../src/lex.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/main.cpp -o ./../src/main.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/murmurhash2.cpp -o ./../src/murmurhash2.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/optimize.cpp -o ./../src/optimize.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/parser.cpp -o ./../src/parser.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/print.cpp -o ./../src/print.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/regs.cpp -o ./../src/regs.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/symtab.cpp -o ./../src/symtab.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/tree.cpp -o ./../src/tree.o
g++ -c -g -Wall -MMD -std=c++11 ./../src/x86_gen.cpp -o ./../src/x86_gen.o
g++ -g -Wall -MMD -std=c++11 ./../src/analyze.o ./../src/convert.o ./../src/error.o ./../src/insn.o ./../src/lex.o ./../src/main.o ./../src/murmurhash2.o ./../src/parser.o ./../src/print.o ./../src/regs.o ./../src/symtab.o ./../src/tree.o ./../src/x86_gen.o ./../src/optimize.o -o ./../build/csq