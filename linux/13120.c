cocci_test_suite() {
	const char *cocci_id/* drivers/fpga/socfpga.c 97 */[SOCFPGA_FPGMGR_NUM_SUPPLIES]__maybe_unused;
	struct platform_driver cocci_id/* drivers/fpga/socfpga.c 602 */;
	const struct of_device_id cocci_id/* drivers/fpga/socfpga.c 594 */[];
	struct resource *cocci_id/* drivers/fpga/socfpga.c 548 */;
	struct device *cocci_id/* drivers/fpga/socfpga.c 545 */;
	struct platform_device *cocci_id/* drivers/fpga/socfpga.c 543 */;
	const struct fpga_manager_ops cocci_id/* drivers/fpga/socfpga.c 536 */;
	enum fpga_mgr_states cocci_id/* drivers/fpga/socfpga.c 520 */;
	const enum fpga_mgr_states cocci_id/* drivers/fpga/socfpga.c 511 */[];
	struct fpga_image_info *cocci_id/* drivers/fpga/socfpga.c 471 */;
	struct fpga_manager *cocci_id/* drivers/fpga/socfpga.c 470 */;
	u32 *cocci_id/* drivers/fpga/socfpga.c 437 */;
	const char *cocci_id/* drivers/fpga/socfpga.c 401 */;
	size_t cocci_id/* drivers/fpga/socfpga.c 401 */;
	u32 cocci_id/* drivers/fpga/socfpga.c 322 */;
	struct socfpga_fpga_priv *cocci_id/* drivers/fpga/socfpga.c 320 */;
	int cocci_id/* drivers/fpga/socfpga.c 320 */;
	bool cocci_id/* drivers/fpga/socfpga.c 280 */;
	irqreturn_t cocci_id/* drivers/fpga/socfpga.c 276 */;
	void *cocci_id/* drivers/fpga/socfpga.c 276 */;
	void cocci_id/* drivers/fpga/socfpga.c 199 */;
	struct cfgmgr_mode cocci_id/* drivers/fpga/socfpga.c 119 */[];
	struct cfgmgr_mode {
		u32 ctrl;
		bool valid;
	} cocci_id/* drivers/fpga/socfpga.c 110 */;
	struct socfpga_fpga_priv {
		void __iomem *fpga_base_addr;
		void __iomem *fpga_data_addr;
		struct completion status_complete;
		int irq;
	} cocci_id/* drivers/fpga/socfpga.c 103 */;
}
