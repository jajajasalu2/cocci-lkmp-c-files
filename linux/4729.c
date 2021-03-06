cocci_test_suite() {
	struct xsdfec_dev cocci_id/* drivers/misc/xilinx_sdfec.c 951 */;
	struct xsdfec_stats cocci_id/* drivers/misc/xilinx_sdfec.c 918 */;
	struct inode *cocci_id/* drivers/misc/xilinx_sdfec.c 858 */;
	struct xsdfec_config *cocci_id/* drivers/misc/xilinx_sdfec.c 836 */;
	enum xsdfec_axis_word_include cocci_id/* drivers/misc/xilinx_sdfec.c 815 */;
	enum xsdfec_axis_width cocci_id/* drivers/misc/xilinx_sdfec.c 796 */;
	enum xsdfec_order *cocci_id/* drivers/misc/xilinx_sdfec.c 736 */;
	enum xsdfec_order cocci_id/* drivers/misc/xilinx_sdfec.c 733 */;
	struct xsdfec_ldpc_params *cocci_id/* drivers/misc/xilinx_sdfec.c 649 */;
	void __user *cocci_id/* drivers/misc/xilinx_sdfec.c 647 */;
	int cocci_id/* drivers/misc/xilinx_sdfec.c 647 */;
	struct page *cocci_id/* drivers/misc/xilinx_sdfec.c 608 */[MAX_NUM_PAGES];
	const u32 cocci_id/* drivers/misc/xilinx_sdfec.c 601 */;
	u32 *cocci_id/* drivers/misc/xilinx_sdfec.c 601 */;
	u16 cocci_id/* drivers/misc/xilinx_sdfec.c 580 */;
	u8 cocci_id/* drivers/misc/xilinx_sdfec.c 579 */;
	struct xsdfec_turbo cocci_id/* drivers/misc/xilinx_sdfec.c 438 */;
	struct xsdfec_irq cocci_id/* drivers/misc/xilinx_sdfec.c 383 */;
	struct xsdfec_status cocci_id/* drivers/misc/xilinx_sdfec.c 295 */;
	bool cocci_id/* drivers/misc/xilinx_sdfec.c 264 */;
	char *cocci_id/* drivers/misc/xilinx_sdfec.c 252 */;
	u32 cocci_id/* drivers/misc/xilinx_sdfec.c 251 */;
	struct xsdfec_dev *cocci_id/* drivers/misc/xilinx_sdfec.c 250 */;
	void cocci_id/* drivers/misc/xilinx_sdfec.c 250 */;
	struct xsdfec_dev {
		struct miscdevice miscdev;
		struct xsdfec_clks clks;
		wait_queue_head_t waitq;
		struct xsdfec_config config;
		char dev_name[DEV_NAME_LEN];
		unsigned long flags;
		void __iomem *regs;
		struct device *dev;
		enum xsdfec_state state;
		spinlock_t error_data_lock;
		int dev_id;
		u32 isr_err_count;
		u32 cecc_count;
		u32 uecc_count;
		int irq;
		bool state_updated;
		bool stats_updated;
		bool intr_enabled;
	} cocci_id/* drivers/misc/xilinx_sdfec.c 212 */;
	struct xsdfec_clks {
		struct clk *core_clk;
		struct clk *axi_clk;
		struct clk *din_words_clk;
		struct clk *din_clk;
		struct clk *dout_clk;
		struct clk *dout_words_clk;
		struct clk *ctrl_clk;
		struct clk *status_clk;
	} cocci_id/* drivers/misc/xilinx_sdfec.c 178 */;
	void __exit cocci_id/* drivers/misc/xilinx_sdfec.c 1499 */;
	int __init cocci_id/* drivers/misc/xilinx_sdfec.c 1487 */;
	struct platform_driver cocci_id/* drivers/misc/xilinx_sdfec.c 1478 */;
	const struct of_device_id cocci_id/* drivers/misc/xilinx_sdfec.c 1470 */[];
	struct resource *cocci_id/* drivers/misc/xilinx_sdfec.c 1385 */;
	struct xsdfec_clks *cocci_id/* drivers/misc/xilinx_sdfec.c 1229 */;
	struct platform_device *cocci_id/* drivers/misc/xilinx_sdfec.c 1228 */;
	irqreturn_t cocci_id/* drivers/misc/xilinx_sdfec.c 1143 */;
	void *cocci_id/* drivers/misc/xilinx_sdfec.c 1143 */;
	const char *cocci_id/* drivers/misc/xilinx_sdfec.c 1068 */;
	struct device_node *cocci_id/* drivers/misc/xilinx_sdfec.c 1066 */;
	struct device *cocci_id/* drivers/misc/xilinx_sdfec.c 1065 */;
	const struct file_operations cocci_id/* drivers/misc/xilinx_sdfec.c 1052 */;
	poll_table *cocci_id/* drivers/misc/xilinx_sdfec.c 1028 */;
	unsigned long cocci_id/* drivers/misc/xilinx_sdfec.c 1022 */;
	struct file *cocci_id/* drivers/misc/xilinx_sdfec.c 1021 */;
	unsigned int cocci_id/* drivers/misc/xilinx_sdfec.c 1021 */;
	long cocci_id/* drivers/misc/xilinx_sdfec.c 1021 */;
	bool __user *cocci_id/* drivers/misc/xilinx_sdfec.c 1011 */;
}
