#ifndef PE_IMPORTS_H
#define PE_IMPORTS_H

#include <unordered_map>
#include <string>
#include "../../redasm.h"
#include "pe_ordinals.h"

namespace REDasm {

class PEImports
{
    private:
        PEImports();
        static void loadImport(std::string dllname);

    public:
        static bool importName(const std::string& dllname, u16 ordinal, std::string& name);

    private:
        static ResolveMap _libraries;
};

} // namespace REDasm

#endif // PE_IMPORTS_H
