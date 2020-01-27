cocci_test_suite() {
	struct task_struct *cocci_id/* arch/arm/mach-rpc/ecard.c 990 */;
	int __init cocci_id/* arch/arm/mach-rpc/ecard.c 988 */;
	unsigned char *cocci_id/* arch/arm/mach-rpc/ecard.c 97 */;
	signed long cocci_id/* arch/arm/mach-rpc/ecard.c 97 */;
	unsigned short cocci_id/* arch/arm/mach-rpc/ecard.c 92 */;
	struct ex_ecid cocci_id/* arch/arm/mach-rpc/ecard.c 895 */;
	ecard_t **cocci_id/* arch/arm/mach-rpc/ecard.c 893 */;
	unsigned cocci_id/* arch/arm/mach-rpc/ecard.c 891 */;
	int cocci_id/* arch/arm/mach-rpc/ecard.c 89 */(int off,
						       unsigned long base,
						       loader_t loader);
	unsigned int cocci_id/* arch/arm/mach-rpc/ecard.c 878 */;
	void cocci_id/* arch/arm/mach-rpc/ecard.c 875 */;
	int cocci_id/* arch/arm/mach-rpc/ecard.c 87 */(unsigned long base,
						       loader_t loader);
	const struct expansion_card_ops *cocci_id/* arch/arm/mach-rpc/ecard.c 850 */;
	struct expcard_blacklist __initdata cocci_id/* arch/arm/mach-rpc/ecard.c 82 */[];
	struct attribute *cocci_id/* arch/arm/mach-rpc/ecard.c 804 */[];
	struct expansion_card *cocci_id/* arch/arm/mach-rpc/ecard.c 792 */;
	struct device_attribute *cocci_id/* arch/arm/mach-rpc/ecard.c 790 */;
	struct device *cocci_id/* arch/arm/mach-rpc/ecard.c 790 */;
	char *cocci_id/* arch/arm/mach-rpc/ecard.c 790 */;
	ssize_t cocci_id/* arch/arm/mach-rpc/ecard.c 790 */;
	void cocci_id/* arch/arm/mach-rpc/ecard.c 77 */(ecard_t *ec);
	ecard_t *cocci_id/* arch/arm/mach-rpc/ecard.c 74 */[MAX_ECARDS];
	u64 cocci_id/* arch/arm/mach-rpc/ecard.c 712 */;
	ecard_t cocci_id/* arch/arm/mach-rpc/ecard.c 695 */;
	unsigned long cocci_id/* arch/arm/mach-rpc/ecard.c 692 */;
	struct expansion_card *__init cocci_id/* arch/arm/mach-rpc/ecard.c 689 */;
	void __init cocci_id/* arch/arm/mach-rpc/ecard.c 678 */;
	struct proc_dir_entry *cocci_id/* arch/arm/mach-rpc/ecard.c 661 */;
	struct expcard_blacklist {
		unsigned short manufacturer;
		unsigned short product;
		const char *type;
		void (*init)(ecard_t *ec);
	} cocci_id/* arch/arm/mach-rpc/ecard.c 66 */;
	struct seq_file *cocci_id/* arch/arm/mach-rpc/ecard.c 650 */;
	void *cocci_id/* arch/arm/mach-rpc/ecard.c 650 */;
	struct in_chunk_dir cocci_id/* arch/arm/mach-rpc/ecard.c 630 */;
	int cocci_id/* arch/arm/mach-rpc/ecard.c 587 */;
	card_type_t cocci_id/* arch/arm/mach-rpc/ecard.c 584 */;
	card_speed_t cocci_id/* arch/arm/mach-rpc/ecard.c 584 */;
	ecard_t *cocci_id/* arch/arm/mach-rpc/ecard.c 584 */;
	void __iomem *cocci_id/* arch/arm/mach-rpc/ecard.c 584 */;
	struct ecard_request {
		void (*fn)(struct ecard_request *);
		ecard_t *ec;
		unsigned int address;
		unsigned int length;
		unsigned int use_loader;
		void *buffer;
		struct completion *complete;
	} cocci_id/* arch/arm/mach-rpc/ecard.c 56 */;
	struct irq_desc *cocci_id/* arch/arm/mach-rpc/ecard.c 519 */;
	const char *cocci_id/* arch/arm/mach-rpc/ecard.c 500 */;
	struct irq_chip cocci_id/* arch/arm/mach-rpc/ecard.c 457 */;
	struct irq_data *cocci_id/* arch/arm/mach-rpc/ecard.c 444 */;
	expansioncard_ops_t cocci_id/* arch/arm/mach-rpc/ecard.c 413 */;
	struct ex_chunk_dir cocci_id/* arch/arm/mach-rpc/ecard.c 328 */;
	struct in_chunk_dir *cocci_id/* arch/arm/mach-rpc/ecard.c 326 */;
	struct ecard_request *cocci_id/* arch/arm/mach-rpc/ecard.c 292 */;
	struct mm_struct *cocci_id/* arch/arm/mach-rpc/ecard.c 247 */;
	pgd_t cocci_id/* arch/arm/mach-rpc/ecard.c 234 */;
	pgd_t *cocci_id/* arch/arm/mach-rpc/ecard.c 229 */;
	struct vm_area_struct cocci_id/* arch/arm/mach-rpc/ecard.c 216 */;
	unsigned long *cocci_id/* arch/arm/mach-rpc/ecard.c 198 */;
	struct resource *cocci_id/* arch/arm/mach-rpc/ecard.c 122 */;
	struct bus_type cocci_id/* arch/arm/mach-rpc/ecard.c 1129 */;
	struct device_driver *cocci_id/* arch/arm/mach-rpc/ecard.c 1114 */;
	struct ecard_request cocci_id/* arch/arm/mach-rpc/ecard.c 1084 */;
	const struct ecard_id *cocci_id/* arch/arm/mach-rpc/ecard.c 1043 */;
	struct ecard_driver *cocci_id/* arch/arm/mach-rpc/ecard.c 1042 */;
}
