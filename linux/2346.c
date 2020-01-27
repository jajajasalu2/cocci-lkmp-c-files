cocci_test_suite() {
	int __init cocci_id/* drivers/of/fdt_address.c 87 */;
	u64 cocci_id/* drivers/of/fdt_address.c 73 */;
	u64 __init cocci_id/* drivers/of/fdt_address.c 70 */;
	__be32 *cocci_id/* drivers/of/fdt_address.c 70 */;
	const __be32 *cocci_id/* drivers/of/fdt_address.c 51 */;
	int *cocci_id/* drivers/of/fdt_address.c 49 */;
	const void *cocci_id/* drivers/of/fdt_address.c 48 */;
	int cocci_id/* drivers/of/fdt_address.c 48 */;
	void __init cocci_id/* drivers/of/fdt_address.c 48 */;
	struct of_bus {
		void (*count_cells)(const void *blob, int parentoffset,
				    int *addrc, int *sizec);
		u64 (*map)(__be32 *addr, const __be32 *range, int na, int ns,
			   int pna);
		int (*translate)(__be32 *addr, u64 offset, int na);
	} cocci_id/* drivers/of/fdt_address.c 39 */;
	unsigned long cocci_id/* drivers/of/fdt_address.c 246 */;
	__be32 cocci_id/* drivers/of/fdt_address.c 168 */[OF_MAX_ADDR_CELLS];
	const struct of_bus *cocci_id/* drivers/of/fdt_address.c 166 */;
	const char *cocci_id/* drivers/of/fdt_address.c 112 */;
	const struct of_bus cocci_id/* drivers/of/fdt_address.c 100 */[]__initconst;
}
