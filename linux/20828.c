cocci_test_suite() {
	unsigned char cocci_id/* arch/x86/tools/relocs.c 989 */[4];
	const uint32_t *cocci_id/* arch/x86/tools/relocs.c 977 */;
	const void *cocci_id/* arch/x86/tools/relocs.c 975 */;
	int cocci_id/* arch/x86/tools/relocs.c 975 */;
	unsigned cocci_id/* arch/x86/tools/relocs.c 862 */;
	const char *cocci_id/* arch/x86/tools/relocs.c 860 */;
	Elf_Sym *cocci_id/* arch/x86/tools/relocs.c 859 */;
	Elf_Rel *cocci_id/* arch/x86/tools/relocs.c 859 */;
	struct section *cocci_id/* arch/x86/tools/relocs.c 859 */;
	int64_t cocci_id/* arch/x86/tools/relocs.c 839 */;
	int32_t cocci_id/* arch/x86/tools/relocs.c 839 */;
	Elf_Addr cocci_id/* arch/x86/tools/relocs.c 720 */;
	void *cocci_id/* arch/x86/tools/relocs.c 653 */;
	unsigned long cocci_id/* arch/x86/tools/relocs.c 652 */;
	uint32_t cocci_id/* arch/x86/tools/relocs.c 649 */;
	struct relocs *cocci_id/* arch/x86/tools/relocs.c 649 */;
	void cocci_id/* arch/x86/tools/relocs.c 649 */;
	Elf_Rel cocci_id/* arch/x86/tools/relocs.c 601 */;
	ElfELF_BITS_Addr cocci_id/* arch/x86/tools/relocs.c 6 */;
	ElfELF_BITS_Sym *cocci_id/* arch/x86/tools/relocs.c 6 */;
	char *cocci_id/* arch/x86/tools/relocs.c 588 */;
	Elf_Sym cocci_id/* arch/x86/tools/relocs.c 556 */;
	struct section cocci_id/* arch/x86/tools/relocs.c 413 */;
	const char *constcocci_id/* arch/x86/tools/relocs.c 40 */[S_NSYMTYPES];
	Elf_Shdr cocci_id/* arch/x86/tools/relocs.c 384 */;
	uint64_t cocci_id/* arch/x86/tools/relocs.c 325 */;
	uint16_t cocci_id/* arch/x86/tools/relocs.c 311 */;
	struct section {
		Elf_Shdr shdr;
		struct section *link;
		Elf_Sym *symtab;
		Elf_Rel *reltab;
		char *strtab;
	} cocci_id/* arch/x86/tools/relocs.c 31 */;
	long cocci_id/* arch/x86/tools/relocs.c 278 */;
	struct relocs cocci_id/* arch/x86/tools/relocs.c 24 */;
	const char *cocci_id/* arch/x86/tools/relocs.c 196 */[];
	struct relocs {
		uint32_t *offset;
		unsigned long count;
		unsigned long size;
	} cocci_id/* arch/x86/tools/relocs.c 18 */;
	unsigned int cocci_id/* arch/x86/tools/relocs.c 16 */;
	Elf_Ehdr cocci_id/* arch/x86/tools/relocs.c 14 */;
	char cocci_id/* arch/x86/tools/relocs.c 118 */[128];
	FILE *cocci_id/* arch/x86/tools/relocs.c 1107 */;
	enum symtype cocci_id/* arch/x86/tools/relocs.c 110 */;
	regex_t cocci_id/* arch/x86/tools/relocs.c 109 */[S_NSYMTYPES];
	const char *const*cocci_id/* arch/x86/tools/relocs.c 107 */;
	int (*cocci_id/* arch/x86/tools/relocs.c 1004 */)(struct section *sec,
							  Elf_Rel *rel,
							  Elf_Sym *sym,
							  const char *symname);
	int (*cocci_id/* arch/x86/tools/relocs.c 1003 */)(uint32_t, FILE *);
}
