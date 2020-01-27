cocci_test_suite() {
	struct vdso_elfinfo64 *cocci_id/* arch/sparc/vdso/vma.c 89 */;
	Elf64_Shdr *cocci_id/* arch/sparc/vdso/vma.c 72 */;
	struct vdso_elfinfo {
		union {
			struct vdso_elfinfo32 elf32;
			struct vdso_elfinfo64 elf64;
		} u;
	} cocci_id/* arch/sparc/vdso/vma.c 61 */;
	struct vdso_elfinfo64 {
		Elf64_Ehdr *hdr;
		Elf64_Sym *dynsym;
		unsigned long dynsymsize;
		const char *dynstr;
		unsigned long text;
	} cocci_id/* arch/sparc/vdso/vma.c 53 */;
	struct vdso_elfinfo32 {
		Elf32_Ehdr *hdr;
		Elf32_Sym *dynsym;
		unsigned long dynsymsize;
		const char *dynstr;
		unsigned long text;
	} cocci_id/* arch/sparc/vdso/vma.c 45 */;
	char *cocci_id/* arch/sparc/vdso/vma.c 446 */;
	struct vvar_data *cocci_id/* arch/sparc/vdso/vma.c 43 */;
	struct linux_binprm *cocci_id/* arch/sparc/vdso/vma.c 429 */;
	int cocci_id/* arch/sparc/vdso/vma.c 429 */;
	void __user *cocci_id/* arch/sparc/vdso/vma.c 393 */;
	struct vm_special_mapping cocci_id/* arch/sparc/vdso/vma.c 38 */;
	unsigned long cocci_id/* arch/sparc/vdso/vma.c 366 */;
	struct vm_area_struct *cocci_id/* arch/sparc/vdso/vma.c 365 */;
	struct mm_struct *cocci_id/* arch/sparc/vdso/vma.c 364 */;
	struct linux_binprm cocci_id/* arch/sparc/vdso/vma.c 349 */;
	int __init cocci_id/* arch/sparc/vdso/vma.c 332 */;
	void cocci_id/* arch/sparc/vdso/vma.c 332 */;
	struct vvar_data cocci_id/* arch/sparc/vdso/vma.c 287 */;
	struct vdso_elfinfo cocci_id/* arch/sparc/vdso/vma.c 252 */;
	struct page *cocci_id/* arch/sparc/vdso/vma.c 250 */;
	unsigned int __read_mostly cocci_id/* arch/sparc/vdso/vma.c 25 */;
	struct vm_special_mapping *cocci_id/* arch/sparc/vdso/vma.c 247 */;
	bool cocci_id/* arch/sparc/vdso/vma.c 205 */;
	const struct vdso_image *cocci_id/* arch/sparc/vdso/vma.c 204 */;
	struct vdso_elfinfo *cocci_id/* arch/sparc/vdso/vma.c 204 */;
	Elf32_Sym cocci_id/* arch/sparc/vdso/vma.c 174 */;
	unsigned int cocci_id/* arch/sparc/vdso/vma.c 172 */;
	const struct vdso_elfinfo32 *cocci_id/* arch/sparc/vdso/vma.c 170 */;
	const char *cocci_id/* arch/sparc/vdso/vma.c 170 */;
	Elf32_Sym *cocci_id/* arch/sparc/vdso/vma.c 170 */;
	struct vdso_elfinfo32 *cocci_id/* arch/sparc/vdso/vma.c 157 */;
	Elf32_Shdr *cocci_id/* arch/sparc/vdso/vma.c 140 */;
	unsigned long *cocci_id/* arch/sparc/vdso/vma.c 137 */;
	void *cocci_id/* arch/sparc/vdso/vma.c 136 */;
	Elf64_Sym cocci_id/* arch/sparc/vdso/vma.c 106 */;
	const struct vdso_elfinfo64 *cocci_id/* arch/sparc/vdso/vma.c 102 */;
	Elf64_Sym *cocci_id/* arch/sparc/vdso/vma.c 102 */;
}
