cocci_test_suite() {
	void __init cocci_id/* kernel/resource.c 994 */;
	resource_size_t cocci_id/* kernel/resource.c 935 */;
	struct resource *cocci_id/* kernel/resource.c 935 */;
	int cocci_id/* kernel/resource.c 935 */;
	enum{MAX_IORES_LEVEL=5,} cocci_id/* kernel/resource.c 86 */;
	loff_t *cocci_id/* kernel/resource.c 77 */;
	struct seq_file *cocci_id/* kernel/resource.c 77 */;
	struct resource_constraint cocci_id/* kernel/resource.c 729 */;
	resource_size_t (*cocci_id/* kernel/resource.c 722 */)(void *,
							       const struct resource *,
							       resource_size_t,
							       resource_size_t);
	struct resource cocci_id/* kernel/resource.c 598 */;
	struct resource_constraint *cocci_id/* kernel/resource.c 595 */;
	const struct resource *cocci_id/* kernel/resource.c 572 */;
	void __weak cocci_id/* kernel/resource.c 567 */;
	size_t cocci_id/* kernel/resource.c 536 */;
	int __weak cocci_id/* kernel/resource.c 510 */;
	void *cocci_id/* kernel/resource.c 501 */;
	unsigned long cocci_id/* kernel/resource.c 501 */;
	int (*cocci_id/* kernel/resource.c 476 */)(unsigned long,
						   unsigned long, void *);
	struct resource_constraint {
		resource_size_t min,max,align;
		resource_size_t (*alignf)(void *, const struct resource *,
					  resource_size_t, resource_size_t);
		void *alignf_data;
	} cocci_id/* kernel/resource.c 47 */;
	int (*cocci_id/* kernel/resource.c 398 */)(struct resource *, void *);
	bool cocci_id/* kernel/resource.c 213 */;
	gfp_t cocci_id/* kernel/resource.c 165 */;
	struct list_head *cocci_id/* kernel/resource.c 1637 */;
	struct resource_entry *cocci_id/* kernel/resource.c 1622 */;
	loff_t cocci_id/* kernel/resource.c 1586 */;
	u64 cocci_id/* kernel/resource.c 1582 */;
	unsigned int cocci_id/* kernel/resource.c 1492 */;
	struct resource cocci_id/* kernel/resource.c 1489 */[MAXRESERVE];
	char *cocci_id/* kernel/resource.c 1486 */;
	struct region_devres cocci_id/* kernel/resource.c 1474 */;
	struct device *cocci_id/* kernel/resource.c 1471 */;
	void cocci_id/* kernel/resource.c 1471 */;
	struct region_devres *cocci_id/* kernel/resource.c 1449 */;
	const char *cocci_id/* kernel/resource.c 1447 */;
	struct region_devres {
		struct resource *parent;
		resource_size_t start;
		resource_size_t n;
	} cocci_id/* kernel/resource.c 1424 */;
	int __init cocci_id/* kernel/resource.c 139 */;
	const struct seq_operations cocci_id/* kernel/resource.c 132 */;
	unsigned long long cocci_id/* kernel/resource.c 1227 */;
	struct resource **cocci_id/* kernel/resource.c 1194 */;
}
