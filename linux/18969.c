cocci_test_suite() {
	unsigned long cocci_id/* arch/arm/mach-mmp/sram.c 98 */;
	phys_addr_t cocci_id/* arch/arm/mach-mmp/sram.c 85 */;
	struct resource *cocci_id/* arch/arm/mach-mmp/sram.c 65 */;
	struct sram_platdata *cocci_id/* arch/arm/mach-mmp/sram.c 63 */;
	struct platform_device *cocci_id/* arch/arm/mach-mmp/sram.c 61 */;
	int cocci_id/* arch/arm/mach-mmp/sram.c 61 */;
	struct sram_bank_info *cocci_id/* arch/arm/mach-mmp/sram.c 41 */;
	struct gen_pool *cocci_id/* arch/arm/mach-mmp/sram.c 39 */;
	char *cocci_id/* arch/arm/mach-mmp/sram.c 39 */;
	struct sram_bank_info {
		char *pool_name;
		struct gen_pool *gpool;
		int granularity;
		phys_addr_t sram_phys;
		void __iomem *sram_virt;
		u32 sram_size;
		struct list_head node;
	} cocci_id/* arch/arm/mach-mmp/sram.c 24 */;
	int __init cocci_id/* arch/arm/mach-mmp/sram.c 159 */;
	void cocci_id/* arch/arm/mach-mmp/sram.c 159 */;
	struct platform_driver cocci_id/* arch/arm/mach-mmp/sram.c 150 */;
	const struct platform_device_id cocci_id/* arch/arm/mach-mmp/sram.c 144 */[];
}
