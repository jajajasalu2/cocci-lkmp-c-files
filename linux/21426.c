cocci_test_suite() {
	struct vm_area_struct *cocci_id/* arch/arm64/kernel/vdso.c 86 */;
	const struct vm_special_mapping *cocci_id/* arch/arm64/kernel/vdso.c 85 */;
	struct vdso_data *cocci_id/* arch/arm64/kernel/vdso.c 82 */;
	union {
		struct vdso_data data[CS_BASES];
		u8 page[PAGE_SIZE];
	} cocci_id/* arch/arm64/kernel/vdso.c 78 */;
	struct __vdso_abi cocci_id/* arch/arm64/kernel/vdso.c 60 */[VDSO_TYPES];
	struct __vdso_abi {
		const char *name;
		const char *vdso_code_start;
		const char *vdso_code_end;
		unsigned long vdso_pages;
		struct vm_special_mapping *dm;
		struct vm_special_mapping *cm;
	} cocci_id/* arch/arm64/kernel/vdso.c 49 */;
	struct vm_special_mapping cocci_id/* arch/arm64/kernel/vdso.c 396 */[A_PAGES];
	enum arch_vdso_type{ARM64_VDSO=0,

#ifdef CONFIG_COMPAT_VDSO
 ARM64_VDSO32=1,

#endif
} cocci_id/* arch/arm64/kernel/vdso.c 37 */;
	int __init cocci_id/* arch/arm64/kernel/vdso.c 300 */;
	void *cocci_id/* arch/arm64/kernel/vdso.c 288 */;
	char cocci_id/* arch/arm64/kernel/vdso.c 279 */[];
	unsigned long cocci_id/* arch/arm64/kernel/vdso.c 265 */;
	int cocci_id/* arch/arm64/kernel/vdso.c 252 */;
	void cocci_id/* arch/arm64/kernel/vdso.c 252 */;
	struct vm_special_mapping cocci_id/* arch/arm64/kernel/vdso.c 210 */[C_PAGES];
	struct page *cocci_id/* arch/arm64/kernel/vdso.c 209 */[C_PAGES];
	struct linux_binprm *cocci_id/* arch/arm64/kernel/vdso.c 141 */;
	struct mm_struct *cocci_id/* arch/arm64/kernel/vdso.c 140 */;
	enum arch_vdso_type cocci_id/* arch/arm64/kernel/vdso.c 139 */;
	struct page *cocci_id/* arch/arm64/kernel/vdso.c 118 */;
	struct page **cocci_id/* arch/arm64/kernel/vdso.c 103 */;
}
