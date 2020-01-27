cocci_test_suite() {
	struct vdso_patch_def cocci_id/* arch/powerpc/kernel/vdso.c 92 */[];
	struct vdso_patch_def {
		unsigned long ftr_mask,ftr_value;
		const char *gen_name;
		const char *fix_name;
	} cocci_id/* arch/powerpc/kernel/vdso.c 80 */;
	struct page *cocci_id/* arch/powerpc/kernel/vdso.c 770 */;
	struct vdso_data *cocci_id/* arch/powerpc/kernel/vdso.c 77 */;
	union {
		struct vdso_data data;
		u8 page[PAGE_SIZE];
	} cocci_id/* arch/powerpc/kernel/vdso.c 73 */;
	void cocci_id/* arch/powerpc/kernel/vdso.c 671 */;
	void __init cocci_id/* arch/powerpc/kernel/vdso.c 644 */;
	struct lib64_elfinfo cocci_id/* arch/powerpc/kernel/vdso.c 617 */;
	struct lib32_elfinfo cocci_id/* arch/powerpc/kernel/vdso.c 616 */;
	struct vdso_patch_def *cocci_id/* arch/powerpc/kernel/vdso.c 587 */;
	char cocci_id/* arch/powerpc/kernel/vdso.c 55 */;
	int *cocci_id/* arch/powerpc/kernel/vdso.c 505 */;
	u64 *cocci_id/* arch/powerpc/kernel/vdso.c 395 */;
	Elf64_Sym *cocci_id/* arch/powerpc/kernel/vdso.c 387 */;
	struct lib64_elfinfo *cocci_id/* arch/powerpc/kernel/vdso.c 384 */;
	Elf64_Sym cocci_id/* arch/powerpc/kernel/vdso.c 367 */;
	Elf64_Sym *__initcocci_id/* arch/powerpc/kernel/vdso.c 361 */;
	Elf64_Shdr *cocci_id/* arch/powerpc/kernel/vdso.c 340 */;
	Elf64_Ehdr *cocci_id/* arch/powerpc/kernel/vdso.c 337 */;
	int __init cocci_id/* arch/powerpc/kernel/vdso.c 291 */;
	Elf32_Sym *cocci_id/* arch/powerpc/kernel/vdso.c 281 */;
	struct lib32_elfinfo *cocci_id/* arch/powerpc/kernel/vdso.c 278 */;
	unsigned long __init cocci_id/* arch/powerpc/kernel/vdso.c 278 */;
	Elf32_Sym cocci_id/* arch/powerpc/kernel/vdso.c 261 */;
	char cocci_id/* arch/powerpc/kernel/vdso.c 259 */[MAX_SYMNAME];
	Elf32_Sym *__initcocci_id/* arch/powerpc/kernel/vdso.c 255 */;
	void *cocci_id/* arch/powerpc/kernel/vdso.c 240 */;
	char *cocci_id/* arch/powerpc/kernel/vdso.c 237 */;
	unsigned int cocci_id/* arch/powerpc/kernel/vdso.c 236 */;
	Elf32_Shdr *cocci_id/* arch/powerpc/kernel/vdso.c 235 */;
	unsigned long *cocci_id/* arch/powerpc/kernel/vdso.c 233 */;
	Elf32_Ehdr *cocci_id/* arch/powerpc/kernel/vdso.c 232 */;
	void *__initcocci_id/* arch/powerpc/kernel/vdso.c 232 */;
	const char *cocci_id/* arch/powerpc/kernel/vdso.c 222 */;
	struct vm_area_struct *cocci_id/* arch/powerpc/kernel/vdso.c 222 */;
	unsigned long cocci_id/* arch/powerpc/kernel/vdso.c 130 */;
	struct page **cocci_id/* arch/powerpc/kernel/vdso.c 129 */;
	struct mm_struct *cocci_id/* arch/powerpc/kernel/vdso.c 128 */;
	struct linux_binprm *cocci_id/* arch/powerpc/kernel/vdso.c 126 */;
	int cocci_id/* arch/powerpc/kernel/vdso.c 126 */;
	struct lib64_elfinfo {
		Elf64_Ehdr *hdr;
		Elf64_Sym *dynsym;
		unsigned long dynsymsize;
		char *dynstr;
		unsigned long text;
	} cocci_id/* arch/powerpc/kernel/vdso.c 112 */;
	struct lib32_elfinfo {
		Elf32_Ehdr *hdr;
		Elf32_Sym *dynsym;
		unsigned long dynsymsize;
		char *dynstr;
		unsigned long text;
	} cocci_id/* arch/powerpc/kernel/vdso.c 103 */;
}
