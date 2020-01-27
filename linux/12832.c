cocci_test_suite() {
	unsigned long *cocci_id/* drivers/memory/omap-gpmc.c 981 */;
	struct resource *cocci_id/* drivers/memory/omap-gpmc.c 926 */;
	struct gpmc_cs_data *cocci_id/* drivers/memory/omap-gpmc.c 925 */;
	unsigned long cocci_id/* drivers/memory/omap-gpmc.c 907 */;
	u32 *cocci_id/* drivers/memory/omap-gpmc.c 846 */;
	const struct gpmc_settings *cocci_id/* drivers/memory/omap-gpmc.c 706 */;
	const struct gpmc_timings *cocci_id/* drivers/memory/omap-gpmc.c 705 */;
	unsigned int cocci_id/* drivers/memory/omap-gpmc.c 455 */;
	u32 cocci_id/* drivers/memory/omap-gpmc.c 437 */;
	bool cocci_id/* drivers/memory/omap-gpmc.c 435 */;
	const enum gpmc_clk_domain cocci_id/* drivers/memory/omap-gpmc.c 431 */;
	const char *cocci_id/* drivers/memory/omap-gpmc.c 431 */;
	int cocci_id/* drivers/memory/omap-gpmc.c 428 */;
	const struct gpmc_bool_timings *cocci_id/* drivers/memory/omap-gpmc.c 386 */;
	enum gpmc_clk_domain cocci_id/* drivers/memory/omap-gpmc.c 352 */;
	irqreturn_t cocci_id/* drivers/memory/omap-gpmc.c 253 */(int irq,
								 void *dev);
	struct clk *cocci_id/* drivers/memory/omap-gpmc.c 251 */;
	struct omap3_gpmc_regs cocci_id/* drivers/memory/omap-gpmc.c 2491 */;
	void __iomem *cocci_id/* drivers/memory/omap-gpmc.c 249 */;
	unsigned cocci_id/* drivers/memory/omap-gpmc.c 248 */;
	struct platform_driver cocci_id/* drivers/memory/omap-gpmc.c 2475 */;
	resource_size_t cocci_id/* drivers/memory/omap-gpmc.c 247 */;
	struct gpmc_cs_data cocci_id/* drivers/memory/omap-gpmc.c 242 */[GPMC_CS_NUM];
	struct resource cocci_id/* drivers/memory/omap-gpmc.c 241 */;
	struct irq_domain *cocci_id/* drivers/memory/omap-gpmc.c 239 */;
	struct platform_device *cocci_id/* drivers/memory/omap-gpmc.c 2344 */;
	struct gpmc_device {
		struct device *dev;
		int irq;
		struct irq_chip irq_chip;
		struct gpio_chip gpio_chip;
		int nirqs;
	} cocci_id/* drivers/memory/omap-gpmc.c 231 */;
	struct gpio_chip *cocci_id/* drivers/memory/omap-gpmc.c 2292 */;
	struct device_node *cocci_id/* drivers/memory/omap-gpmc.c 2266 */;
	const struct of_device_id *cocci_id/* drivers/memory/omap-gpmc.c 2233 */;
	struct omap3_gpmc_regs {
		u32 sysconfig;
		u32 irqenable;
		u32 timeout_ctrl;
		u32 config;
		u32 prefetch_config1;
		u32 prefetch_config2;
		u32 prefetch_control;
		struct gpmc_cs_config cs_context[GPMC_CS_NUM];
	} cocci_id/* drivers/memory/omap-gpmc.c 220 */;
	struct gpmc_cs_config {
		u32 config1;
		u32 config2;
		u32 config3;
		u32 config4;
		u32 config5;
		u32 config6;
		u32 config7;
		int is_valid;
	} cocci_id/* drivers/memory/omap-gpmc.c 205 */;
	struct gpio_desc *cocci_id/* drivers/memory/omap-gpmc.c 2041 */;
	struct gpmc_bool_timings *cocci_id/* drivers/memory/omap-gpmc.c 1950 */;
	struct gpmc_cs_data {
		const char *name;
#define GPMC_CS_RESERVED (1 << 0)
			u32 flags;
		struct resource mem;
	} cocci_id/* drivers/memory/omap-gpmc.c 195 */;
	void __maybe_unused cocci_id/* drivers/memory/omap-gpmc.c 1947 */;
	enum gpmc_clk_domain{GPMC_CD_FCLK, GPMC_CD_CLK,} cocci_id/* drivers/memory/omap-gpmc.c 190 */;
	const struct of_device_id cocci_id/* drivers/memory/omap-gpmc.c 1899 */[];
	struct gpmc_settings *cocci_id/* drivers/memory/omap-gpmc.c 1785 */;
	void cocci_id/* drivers/memory/omap-gpmc.c 1760 */;
	struct gpmc_device_timings *cocci_id/* drivers/memory/omap-gpmc.c 1623 */;
	struct gpmc_timings *cocci_id/* drivers/memory/omap-gpmc.c 1622 */;
	struct gpmc_device *cocci_id/* drivers/memory/omap-gpmc.c 1444 */;
	irqreturn_t cocci_id/* drivers/memory/omap-gpmc.c 1370 */;
	void *cocci_id/* drivers/memory/omap-gpmc.c 1370 */;
	const struct irq_domain_ops cocci_id/* drivers/memory/omap-gpmc.c 1365 */;
	irq_hw_number_t cocci_id/* drivers/memory/omap-gpmc.c 1348 */;
	struct irq_data *cocci_id/* drivers/memory/omap-gpmc.c 1318 */;
	struct gpmc_settings cocci_id/* drivers/memory/omap-gpmc.c 1224 */;
	struct gpmc_timings cocci_id/* drivers/memory/omap-gpmc.c 1223 */;
	struct gpmc_onenand_info *cocci_id/* drivers/memory/omap-gpmc.c 1220 */;
	struct device *cocci_id/* drivers/memory/omap-gpmc.c 1218 */;
	const int cocci_id/* drivers/memory/omap-gpmc.c 1144 */;
	struct gpmc_device_timings cocci_id/* drivers/memory/omap-gpmc.c 1143 */;
	struct gpmc_nand_regs *cocci_id/* drivers/memory/omap-gpmc.c 1096 */;
	struct gpmc_nand_ops *cocci_id/* drivers/memory/omap-gpmc.c 1096 */;
	struct gpmc_nand_ops cocci_id/* drivers/memory/omap-gpmc.c 1084 */;
}
