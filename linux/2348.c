cocci_test_suite() {
	__be32 cocci_id/* drivers/of/address.c 962 */;
	bool cocci_id/* drivers/of/address.c 933 */;
	u64 *cocci_id/* drivers/of/address.c 927 */;
	void __iomem *cocci_id/* drivers/of/address.c 886 */;
	struct resource cocci_id/* drivers/of/address.c 817 */;
	const char *cocci_id/* drivers/of/address.c 804 */;
	struct resource *cocci_id/* drivers/of/address.c 804 */;
	u64 cocci_id/* drivers/of/address.c 803 */;
	const __be32 *cocci_id/* drivers/of/address.c 803 */;
	unsigned int cocci_id/* drivers/of/address.c 803 */;
	struct device_node *cocci_id/* drivers/of/address.c 802 */;
	int cocci_id/* drivers/of/address.c 802 */;
	unsigned long long cocci_id/* drivers/of/address.c 78 */;
	unsigned int *cocci_id/* drivers/of/address.c 741 */;
	struct of_phandle_args cocci_id/* drivers/of/address.c 697 */;
	const struct device_node *cocci_id/* drivers/of/address.c 695 */;
	__be32 *cocci_id/* drivers/of/address.c 68 */;
	struct logic_pio_hwaddr *cocci_id/* drivers/of/address.c 623 */;
	int *cocci_id/* drivers/of/address.c 60 */;
	__be32 cocci_id/* drivers/of/address.c 593 */[OF_MAX_ADDR_CELLS];
	struct of_bus *cocci_id/* drivers/of/address.c 592 */;
	void cocci_id/* drivers/of/address.c 59 */;
	struct device_node **cocci_id/* drivers/of/address.c 589 */;
	struct device_node *(*cocci_id/* drivers/of/address.c 587 */)(const struct device_node *);
	struct of_bus cocci_id/* drivers/of/address.c 441 */[];
	struct of_bus {
		const char *name;
		const char *addresses;
		int (*match)(struct device_node *parent);
		void (*count_cells)(struct device_node *child, int *addrc,
				    int *sizec);
		u64 (*map)(__be32 *addr, const __be32 *range, int na, int ns,
			   int pna);
		int (*translate)(__be32 *addr, u64 offset, int na);
		unsigned int (*get_flags)(const __be32 *addr);
	} cocci_id/* drivers/of/address.c 43 */;
	u32 cocci_id/* drivers/of/address.c 428 */;
	resource_size_t cocci_id/* drivers/of/address.c 360 */;
	unsigned long cocci_id/* drivers/of/address.c 348 */;
	const int cocci_id/* drivers/of/address.c 274 */;
	struct of_pci_range *cocci_id/* drivers/of/address.c 271 */;
	struct of_pci_range_parser *cocci_id/* drivers/of/address.c 264 */;
	int cocci_id/* drivers/of/address.c 25 */(struct device_node *dev,
						  const __be32 *addrp,
						  u64 size,
						  unsigned int flags,
						  const char *name,
						  struct resource *r);
	struct of_bus *cocci_id/* drivers/of/address.c 24 */(struct device_node *np);
}
