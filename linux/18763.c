cocci_test_suite() {
	unsigned cocci_id/* arch/arm/mm/cache-l2x0.c 784 */;
	struct outer_cache_fns cocci_id/* arch/arm/mm/cache-l2x0.c 783 */;
	u32 cocci_id/* arch/arm/mm/cache-l2x0.c 781 */;
	bool cocci_id/* arch/arm/mm/cache-l2x0.c 781 */;
	const struct l2c_init_data *cocci_id/* arch/arm/mm/cache-l2x0.c 780 */;
	int __init cocci_id/* arch/arm/mm/cache-l2x0.c 780 */;
	const char *cocci_id/* arch/arm/mm/cache-l2x0.c 685 */[8];
	unsigned int cocci_id/* arch/arm/mm/cache-l2x0.c 601 */;
	struct l2x0_regs cocci_id/* arch/arm/mm/cache-l2x0.c 46 */;
	raw_spinlock_t *cocci_id/* arch/arm/mm/cache-l2x0.c 287 */;
	struct l2c_init_data {
		const char *type;
		unsigned way_size_0;
		unsigned num_lock;
		void (*of_parse)(const struct device_node *, u32 *, u32 *);
		void (*enable)(void __iomem *, unsigned);
		void (*fixup)(void __iomem *, u32, struct outer_cache_fns *);
		void (*save)(void __iomem *);
		void (*configure)(void __iomem *);
		void (*unlock)(void __iomem *, unsigned);
		struct outer_cache_fns outer_cache;
	} cocci_id/* arch/arm/mm/cache-l2x0.c 24 */;
	const struct l2c_init_data cocci_id/* arch/arm/mm/cache-l2x0.c 239 */;
	unsigned long cocci_id/* arch/arm/mm/cache-l2x0.c 178 */;
	struct resource cocci_id/* arch/arm/mm/cache-l2x0.c 1757 */;
	struct device_node *cocci_id/* arch/arm/mm/cache-l2x0.c 1756 */;
	const struct of_device_id cocci_id/* arch/arm/mm/cache-l2x0.c 1740 */[]__initconst;
	void *cocci_id/* arch/arm/mm/cache-l2x0.c 1739 */;
	void __iomem *cocci_id/* arch/arm/mm/cache-l2x0.c 173 */;
	void cocci_id/* arch/arm/mm/cache-l2x0.c 173 */;
	int cocci_id/* arch/arm/mm/cache-l2x0.c 1585 */;
	u32 *cocci_id/* arch/arm/mm/cache-l2x0.c 1480 */;
	const struct device_node *cocci_id/* arch/arm/mm/cache-l2x0.c 1479 */;
	struct outer_cache_fns *cocci_id/* arch/arm/mm/cache-l2x0.c 1474 */;
	void __init cocci_id/* arch/arm/mm/cache-l2x0.c 1459 */;
	u32 cocci_id/* arch/arm/mm/cache-l2x0.c 1131 */[2];
	u32 cocci_id/* arch/arm/mm/cache-l2x0.c 1129 */[3];
}
