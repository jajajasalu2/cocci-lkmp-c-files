cocci_test_suite() {
	struct aemif_cs_data {
		u8 cs;
		u16 wstrobe;
		u16 rstrobe;
		u8 wsetup;
		u8 whold;
		u8 rsetup;
		u8 rhold;
		u8 ta;
		u8 enable_ss;
		u8 enable_ew;
		u8 asize;
	} cocci_id/* drivers/memory/ti-aemif.c 97 */;
	struct platform_driver cocci_id/* drivers/memory/ti-aemif.c 436 */;
	struct of_dev_auxdata *cocci_id/* drivers/memory/ti-aemif.c 337 */;
	struct aemif_platform_data *cocci_id/* drivers/memory/ti-aemif.c 336 */;
	struct device_node *cocci_id/* drivers/memory/ti-aemif.c 333 */;
	struct device *cocci_id/* drivers/memory/ti-aemif.c 332 */;
	struct resource *cocci_id/* drivers/memory/ti-aemif.c 331 */;
	const struct of_device_id cocci_id/* drivers/memory/ti-aemif.c 320 */[];
	void cocci_id/* drivers/memory/ti-aemif.c 231 */;
	u32 cocci_id/* drivers/memory/ti-aemif.c 181 */;
	unsigned cocci_id/* drivers/memory/ti-aemif.c 180 */;
	struct aemif_cs_data *cocci_id/* drivers/memory/ti-aemif.c 177 */;
	struct aemif_device *cocci_id/* drivers/memory/ti-aemif.c 176 */;
	unsigned long cocci_id/* drivers/memory/ti-aemif.c 140 */;
	struct platform_device *cocci_id/* drivers/memory/ti-aemif.c 139 */;
	int cocci_id/* drivers/memory/ti-aemif.c 139 */;
	struct aemif_device {
		void __iomem *base;
		struct clk *clk;
		unsigned long clk_rate;
		u8 num_cs;
		int cs_offset;
		struct aemif_cs_data cs_data[NUM_CS];
	} cocci_id/* drivers/memory/ti-aemif.c 120 */;
}
