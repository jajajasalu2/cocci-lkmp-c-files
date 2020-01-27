cocci_test_suite() {
	const char *const cocci_id/* scripts/mod/modpost.c 991 */[];
	char *cocci_id/* scripts/mod/modpost.c 811 */;
	const Elf_Sym *cocci_id/* scripts/mod/modpost.c 684 */;
	const struct elf_info *cocci_id/* scripts/mod/modpost.c 683 */;
	const struct module *cocci_id/* scripts/mod/modpost.c 682 */;
	Elf32_Word *cocci_id/* scripts/mod/modpost.c 634 */;
	Elf_Ehdr *cocci_id/* scripts/mod/modpost.c 487 */;
	signed char *cocci_id/* scripts/mod/modpost.c 455 */;
	size_t cocci_id/* scripts/mod/modpost.c 454 */;
	char cocci_id/* scripts/mod/modpost.c 452 */[4096];
	unsigned long *cocci_id/* scripts/mod/modpost.c 450 */;
	unsigned long cocci_id/* scripts/mod/modpost.c 450 */;
	struct stat cocci_id/* scripts/mod/modpost.c 425 */;
	enum export{export_plain, export_unused, export_gpl, export_unused_gpl, export_gpl_future, export_unknown,} cocci_id/* scripts/mod/modpost.c 42 */;
	const struct {
		const char *str;
		enum export export;
	} cocci_id/* scripts/mod/modpost.c 265 */[];
	char cocci_id/* scripts/mod/modpost.c 2633 */[PATH_MAX];
	struct ext_sym_list *cocci_id/* scripts/mod/modpost.c 2566 */;
	struct buffer cocci_id/* scripts/mod/modpost.c 2559 */;
	char **cocci_id/* scripts/mod/modpost.c 2556 */;
	struct ext_sym_list {
		struct ext_sym_list *next;
		const char *file;
	} cocci_id/* scripts/mod/modpost.c 2551 */;
	struct namespace_list cocci_id/* scripts/mod/modpost.c 251 */;
	struct namespace_list *cocci_id/* scripts/mod/modpost.c 248 */;
	struct namespace_list **cocci_id/* scripts/mod/modpost.c 246 */;
	const char *cocci_id/* scripts/mod/modpost.c 2363 */;
	bool cocci_id/* scripts/mod/modpost.c 236 */;
	int cocci_id/* scripts/mod/modpost.c 2353 */;
	struct symbol *cocci_id/* scripts/mod/modpost.c 2352 */;
	struct module *cocci_id/* scripts/mod/modpost.c 2350 */;
	struct buffer *cocci_id/* scripts/mod/modpost.c 2350 */;
	void cocci_id/* scripts/mod/modpost.c 2350 */;
	enum export cocci_id/* scripts/mod/modpost.c 2155 */;
	va_list cocci_id/* scripts/mod/modpost.c 2137 */;
	char cocci_id/* scripts/mod/modpost.c 2135 */[SZ];
	void __attribute__((format(printf,2,3))) cocci_id/* scripts/mod/modpost.c 2132 */;
	FILE *cocci_id/* scripts/mod/modpost.c 2107 */;
	unsigned char cocci_id/* scripts/mod/modpost.c 2072 */;
	struct elf_info cocci_id/* scripts/mod/modpost.c 2013 */;
	Elf_Rela cocci_id/* scripts/mod/modpost.c 1910 */;
	Elf_Rel *cocci_id/* scripts/mod/modpost.c 1909 */;
	unsigned char *cocci_id/* scripts/mod/modpost.c 187 */;
	unsigned cocci_id/* scripts/mod/modpost.c 182 */;
	long cocci_id/* scripts/mod/modpost.c 1816 */;
	unsigned int *cocci_id/* scripts/mod/modpost.c 1776 */;
	unsigned int cocci_id/* scripts/mod/modpost.c 1775 */;
	Elf_Shdr *cocci_id/* scripts/mod/modpost.c 1773 */;
	Elf_Rela *cocci_id/* scripts/mod/modpost.c 1773 */;
	struct elf_info *cocci_id/* scripts/mod/modpost.c 1773 */;
	struct symbol *cocci_id/* scripts/mod/modpost.c 177 */[SYMBOL_HASH_SIZE];
	const struct sectioncheck *cocci_id/* scripts/mod/modpost.c 1751 */;
	Elf_Sym *cocci_id/* scripts/mod/modpost.c 1748 */;
	const char *const cocci_id/* scripts/mod/modpost.c 1641 */;
	const Elf_Rela *cocci_id/* scripts/mod/modpost.c 1641 */;
	struct symbol {
		struct symbol *next;
		struct module *module;
		unsigned int crc;
		int crc_valid;
		char *namespace;
		unsigned int weak:1;
		unsigned int vmlinux:1;
		unsigned int kernel:1;
		unsigned int is_static:1;
		enum export export;
		char name[0];
	} cocci_id/* scripts/mod/modpost.c 162 */;
	const struct sectioncheck *const cocci_id/* scripts/mod/modpost.c 1599 */;
	unsigned long long cocci_id/* scripts/mod/modpost.c 1461 */;
	const char **cocci_id/* scripts/mod/modpost.c 1444 */;
	const char *const *cocci_id/* scripts/mod/modpost.c 1433 */;
	const char *const cocci_id/* scripts/mod/modpost.c 1431 */[20];
	Elf_Addr cocci_id/* scripts/mod/modpost.c 1358 */;
	Elf64_Sword cocci_id/* scripts/mod/modpost.c 1314 */;
	struct sectioncheck cocci_id/* scripts/mod/modpost.c 1154 */;
	void *cocci_id/* scripts/mod/modpost.c 112 */;
	const struct sectioncheck cocci_id/* scripts/mod/modpost.c 1060 */[];
	void cocci_id/* scripts/mod/modpost.c 1055 */(const char *modname,
						      struct elf_info *elf,
						      const struct sectioncheck *const mismatch,
						      Elf_Rela *r,
						      Elf_Sym *sym,
						      const char *fromsec);
	struct sectioncheck {
		const char *fromsec[20];
		const char *bad_tosec[20];
		const char *good_tosec[20];
		enum mismatch mismatch;
		const char *symbol_white_list[20];
		void (*handler)(const char *modname, struct elf_info *elf,
				const struct sectioncheck *const mismatch,
				Elf_Rela *r, Elf_Sym *sym,
				const char *fromsec);
	} cocci_id/* scripts/mod/modpost.c 1043 */;
	enum mismatch{TEXT_TO_ANY_INIT, DATA_TO_ANY_INIT, TEXT_TO_ANY_EXIT, DATA_TO_ANY_EXIT, XXXINIT_TO_SOME_INIT, XXXEXIT_TO_SOME_EXIT, ANY_INIT_TO_ANY_EXIT, ANY_EXIT_TO_ANY_INIT, EXPORT_TO_INIT_EXIT, EXTABLE_TO_NON_TEXT,} cocci_id/* scripts/mod/modpost.c 1010 */;
}
