cocci_test_suite() {
	char cocci_id/* kernel/module.c 971 */[MODULE_NAME_LEN];
	void cocci_id/* kernel/module.c 965 */(struct module *mod);
	struct llist_head cocci_id/* kernel/module.c 92 */;
	struct work_struct cocci_id/* kernel/module.c 91 */;
	struct module_use *cocci_id/* kernel/module.c 851 */;
	int cocci_id/* kernel/module.c 849 */;
	char cocci_id/* kernel/module.c 800 */[MODULE_NAME_LEN + 1];
	void *cocci_id/* kernel/module.c 698 */;
	unsigned int cocci_id/* kernel/module.c 688 */;
	struct module *cocci_id/* kernel/module.c 687 */;
	bool cocci_id/* kernel/module.c 685 */;
	unsigned long *cocci_id/* kernel/module.c 685 */;
	unsigned long cocci_id/* kernel/module.c 685 */;
	void __percpu *cocci_id/* kernel/module.c 637 */;
	struct find_symbol_arg cocci_id/* kernel/module.c 589 */;
	const s32 **cocci_id/* kernel/module.c 585 */;
	struct module **cocci_id/* kernel/module.c 584 */;
	struct kernel_symbol cocci_id/* kernel/module.c 572 */;
	struct kernel_symbol *cocci_id/* kernel/module.c 569 */;
	const void *cocci_id/* kernel/module.c 559 */;
	struct find_symbol_arg *cocci_id/* kernel/module.c 500 */;
	const struct symsearch *cocci_id/* kernel/module.c 496 */;
	struct find_symbol_arg {
		const char *name;
		bool gplok;
		bool warn;
		struct module *owner;
		const s32 *crc;
		const struct kernel_symbol *sym;
	} cocci_id/* kernel/module.c 484 */;
	struct tracepoint *const*cocci_id/* kernel/module.c 4548 */;
	struct symsearch cocci_id/* kernel/module.c 452 */[];
	const struct exception_table_entry *cocci_id/* kernel/module.c 4412 */;
	const struct file_operations cocci_id/* kernel/module.c 4396 */;
	struct inode *cocci_id/* kernel/module.c 4384 */;
	const struct seq_operations cocci_id/* kernel/module.c 4370 */;
	char cocci_id/* kernel/module.c 4337 */[MODULE_FLAGS_BUF_SIZE];
	loff_t *cocci_id/* kernel/module.c 4324 */;
	struct seq_file *cocci_id/* kernel/module.c 4324 */;
	const struct symsearch cocci_id/* kernel/module.c 427 */[];
	int (*cocci_id/* kernel/module.c 4257 */)(void *, const char *,
						  struct module *,
						  unsigned long);
	bool (*cocci_id/* kernel/module.c 421 */)(const struct symsearch *arr,
						  struct module *owner,
						  void *data);
	int *cocci_id/* kernel/module.c 4189 */;
	char **cocci_id/* kernel/module.c 4111 */;
	void *__weakcocci_id/* kernel/module.c 4100 */;
	struct mod_kallsyms *cocci_id/* kernel/module.c 4056 */;
	bool (*cocci_id/* kernel/module.c 405 */)(const struct symsearch *syms,
						  struct module *owner,
						  void *data);
	loff_t cocci_id/* kernel/module.c 3998 */;
	struct load_info cocci_id/* kernel/module.c 3997 */;
	const s32 cocci_id/* kernel/module.c 384 */[];
	const char __user *cocci_id/* kernel/module.c 3781 */;
	const struct kernel_symbol cocci_id/* kernel/module.c 378 */[];
	int __init cocci_id/* kernel/module.c 3543 */;
	struct mod_initfree cocci_id/* kernel/module.c 3537 */;
	struct mod_initfree *cocci_id/* kernel/module.c 3530 */;
	struct llist_node *cocci_id/* kernel/module.c 3529 */;
	struct work_struct *cocci_id/* kernel/module.c 3527 */;
	struct mod_initfree {
		struct llist_node node;
		void *module_init;
	} cocci_id/* kernel/module.c 3522 */;
	const Elf_Ehdr *cocci_id/* kernel/module.c 3467 */;
	int __weak cocci_id/* kernel/module.c 3467 */;
	size_t cocci_id/* kernel/module.c 3388 */;
	Elf_Ehdr *cocci_id/* kernel/module.c 3375 */;
	mm_segment_t cocci_id/* kernel/module.c 3354 */;
	const struct module *cocci_id/* kernel/module.c 3352 */;
	long cocci_id/* kernel/module.c 335 */;
	void __noreturn cocci_id/* kernel/module.c 335 */;
	enum lockdep_ok cocci_id/* kernel/module.c 325 */;
	unsigned cocci_id/* kernel/module.c 324 */;
	struct load_info *cocci_id/* kernel/module.c 3104 */;
	struct notifier_block *cocci_id/* kernel/module.c 296 */;
	const void __user *cocci_id/* kernel/module.c 2923 */;
	Elf_Shdr cocci_id/* kernel/module.c 2910 */;
	const unsigned long cocci_id/* kernel/module.c 2845 */;
	struct module cocci_id/* kernel/module.c 2821 */;
	bool __weak cocci_id/* kernel/module.c 2809 */;
	struct _ddebug *cocci_id/* kernel/module.c 2798 */;
	Elf_Sym cocci_id/* kernel/module.c 2753 */;
	Elf_Shdr *cocci_id/* kernel/module.c 2747 */;
	char *cocci_id/* kernel/module.c 2746 */;
	Elf_Sym *cocci_id/* kernel/module.c 2745 */;
	const Elf_Sym *cocci_id/* kernel/module.c 2744 */;
	const struct load_info *cocci_id/* kernel/module.c 2741 */;
	struct mod_kallsyms cocci_id/* kernel/module.c 2728 */;
	const Elf_Shdr *cocci_id/* kernel/module.c 2615 */;
	char cocci_id/* kernel/module.c 2613 */;
	struct module_attribute *cocci_id/* kernel/module.c 2580 */;
	struct list_head *cocci_id/* kernel/module.c 250 */;
	const unsigned long cocci_id/* kernel/module.c 2417 */[][2];
	unsigned int *cocci_id/* kernel/module.c 2400 */;
	unsigned int __weak cocci_id/* kernel/module.c 2392 */;
	struct {
		const struct kernel_symbol *sym;
		unsigned int num;
	} cocci_id/* kernel/module.c 2262 */[];
	const struct kernel_symbol *cocci_id/* kernel/module.c 2239 */;
	const char *cocci_id/* kernel/module.c 2236 */;
	void __weak cocci_id/* kernel/module.c 2176 */;
	struct mod_tree_node cocci_id/* kernel/module.c 202 */;
	int (*cocci_id/* kernel/module.c 1976 */)(unsigned long start,
						  int num_pages);
	const struct module_layout *cocci_id/* kernel/module.c 1975 */;
	struct kernel_param *cocci_id/* kernel/module.c 1848 */;
	struct kobject *cocci_id/* kernel/module.c 1816 */;
	void cocci_id/* kernel/module.c 1751 */(struct module *mod, int end);
	struct bin_attribute *cocci_id/* kernel/module.c 1638 */;
	struct module_notes_attrs *cocci_id/* kernel/module.c 1637 */;
	struct file *cocci_id/* kernel/module.c 1611 */;
	ssize_t cocci_id/* kernel/module.c 1611 */;
	struct module_notes_attrs {
		struct kobject *dir;
		unsigned int notes;
		struct bin_attribute attrs[0];
	} cocci_id/* kernel/module.c 1605 */;
	struct mod_tree_node *cocci_id/* kernel/module.c 158 */;
	void cocci_id/* kernel/module.c 158 */;
	struct attribute **cocci_id/* kernel/module.c 1541 */;
	struct module_sect_attr *cocci_id/* kernel/module.c 1540 */;
	struct module_sect_attrs *cocci_id/* kernel/module.c 1539 */;
	struct module_sect_attr cocci_id/* kernel/module.c 1522 */;
	struct module_kobject *cocci_id/* kernel/module.c 1519 */;
	struct module_sect_attrs {
		struct attribute_group grp;
		unsigned int nsections;
		struct module_sect_attr attrs[0];
	} cocci_id/* kernel/module.c 1512 */;
	struct module_sect_attr {
		struct module_attribute mattr;
		char *name;
		unsigned long address;
	} cocci_id/* kernel/module.c 1506 */;
	struct mod_tree_root {
		struct latch_tree_root root;
		unsigned long addr_min;
		unsigned long addr_max;
	} cocci_id/* kernel/module.c 147 */;
	char cocci_id/* kernel/module.c 1432 */[];
	const struct latch_tree_ops cocci_id/* kernel/module.c 142 */;
	char *cocci_id/* kernel/module.c 1394 */(const struct load_info *info,
						 const char *tag, char *prev);
	char *cocci_id/* kernel/module.c 1393 */(const struct load_info *info,
						 const char *tag);
	const s32 *cocci_id/* kernel/module.c 1346 */;
	u32 cocci_id/* kernel/module.c 1317 */;
	struct modversion_info cocci_id/* kernel/module.c 1314 */;
	struct modversion_info *cocci_id/* kernel/module.c 1302 */;
	u32 *cocci_id/* kernel/module.c 1291 */;
	const char cocci_id/* kernel/module.c 1273 */[];
	struct module_attribute *cocci_id/* kernel/module.c 1259 */[];
	struct module_attribute cocci_id/* kernel/module.c 1234 */;
	struct module_layout cocci_id/* kernel/module.c 114 */;
	struct module_layout *cocci_id/* kernel/module.c 114 */;
	struct latch_tree_node *cocci_id/* kernel/module.c 112 */;
}
