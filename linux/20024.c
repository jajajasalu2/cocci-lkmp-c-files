cocci_test_suite() {
	unsigned int cocci_id/* arch/mips/boot/tools/relocs.c 641 */;
	const char *constcocci_id/* arch/mips/boot/tools/relocs.c 62 */[];
	int (*cocci_id/* arch/mips/boot/tools/relocs.c 575 */)(uint32_t,
							       FILE *);
	FILE *cocci_id/* arch/mips/boot/tools/relocs.c 572 */;
	unsigned char cocci_id/* arch/mips/boot/tools/relocs.c 553 */[4];
	const char *cocci_id/* arch/mips/boot/tools/relocs.c 501 */;
	Elf_Sym *cocci_id/* arch/mips/boot/tools/relocs.c 500 */;
	Elf_Rel *cocci_id/* arch/mips/boot/tools/relocs.c 500 */;
	struct section *cocci_id/* arch/mips/boot/tools/relocs.c 500 */;
	int cocci_id/* arch/mips/boot/tools/relocs.c 500 */;
	char cocci_id/* arch/mips/boot/tools/relocs.c 48 */[128];
	char *cocci_id/* arch/mips/boot/tools/relocs.c 474 */;
	int (*cocci_id/* arch/mips/boot/tools/relocs.c 467 */)(struct section *sec,
							       Elf_Rel *rel,
							       Elf_Sym *sym,
							       const char *symname);
	void *cocci_id/* arch/mips/boot/tools/relocs.c 456 */;
	unsigned long cocci_id/* arch/mips/boot/tools/relocs.c 455 */;
	uint32_t cocci_id/* arch/mips/boot/tools/relocs.c 442 */;
	struct relocs *cocci_id/* arch/mips/boot/tools/relocs.c 442 */;
	unsigned cocci_id/* arch/mips/boot/tools/relocs.c 442 */;
	void cocci_id/* arch/mips/boot/tools/relocs.c 442 */;
	regex_t cocci_id/* arch/mips/boot/tools/relocs.c 39 */;
	Elf_Rel cocci_id/* arch/mips/boot/tools/relocs.c 385 */;
	Elf_Sym cocci_id/* arch/mips/boot/tools/relocs.c 341 */;
	const char *constcocci_id/* arch/mips/boot/tools/relocs.c 34 */;
	struct section cocci_id/* arch/mips/boot/tools/relocs.c 265 */;
	Elf_Shdr cocci_id/* arch/mips/boot/tools/relocs.c 253 */;
	struct section {
		Elf_Shdr shdr;
		struct section *link;
		Elf_Sym *symtab;
		Elf_Rel *reltab;
		char *strtab;
		long shdr_offset;
	} cocci_id/* arch/mips/boot/tools/relocs.c 24 */;
	struct relocs cocci_id/* arch/mips/boot/tools/relocs.c 22 */;
	uint64_t cocci_id/* arch/mips/boot/tools/relocs.c 189 */;
	uint16_t cocci_id/* arch/mips/boot/tools/relocs.c 161 */;
	struct relocs {
		uint32_t *offset;
		unsigned long count;
		unsigned long size;
	} cocci_id/* arch/mips/boot/tools/relocs.c 16 */;
	Elf_Ehdr cocci_id/* arch/mips/boot/tools/relocs.c 14 */;
}
