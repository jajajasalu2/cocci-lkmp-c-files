cocci_test_suite() {
	u32 cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 70 */;
	struct aspeed_lpc_ctrl_mapping cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 69 */;
	void __user *cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 68 */;
	struct device *cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 67 */;
	struct aspeed_lpc_ctrl *cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 66 */;
	unsigned long cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 64 */;
	struct file *cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 63 */;
	unsigned int cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 63 */;
	long cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 63 */;
	pgprot_t cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 47 */;
	struct vm_area_struct *cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 43 */;
	int cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 43 */;
	struct aspeed_lpc_ctrl cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 39 */;
	struct platform_driver cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 297 */;
	const struct of_device_id cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 291 */[];
	struct aspeed_lpc_ctrl {
		struct miscdevice miscdev;
		struct regmap *regmap;
		struct clk *clk;
		phys_addr_t mem_base;
		resource_size_t mem_size;
		u32 pnor_size;
		u32 pnor_base;
	} cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 27 */;
	struct resource cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 201 */;
	struct device_node *cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 200 */;
	struct platform_device *cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 197 */;
	const struct file_operations cocci_id/* drivers/soc/aspeed/aspeed-lpc-ctrl.c 191 */;
}
