cocci_test_suite() {
	struct device *cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 95 */;
	irqreturn_t cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 93 */;
	void *cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 93 */;
	struct cec_msg cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 82 */;
	void cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 57 */;
	u32 cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 52 */;
	struct tegra_cec *cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 52 */;
	struct platform_driver cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 462 */;
	const struct of_device_id cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 455 */[];
	pm_message_t cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 433 */;
	struct tegra_cec {
		struct cec_adapter *adap;
		struct device *dev;
		struct clk *clk;
		void __iomem *cec_base;
		struct cec_notifier *notifier;
		int tegra_cec_irq;
		bool rx_done;
		bool tx_done;
		int tx_status;
		u8 rx_buf[CEC_MAX_MSG_SIZE];
		u8 rx_buf_cnt;
		u32 tx_buf[CEC_MAX_MSG_SIZE];
		u8 tx_buf_cur;
		u8 tx_buf_cnt;
	} cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 35 */;
	struct tegra_cec cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 329 */;
	struct resource *cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 321 */;
	struct platform_device *cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 317 */;
	const struct cec_adap_ops cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 310 */;
	unsigned int cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 283 */;
	struct cec_msg *cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 279 */;
	u8 cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 250 */;
	bool cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 187 */;
	struct cec_adapter *cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 187 */;
	int cocci_id/* drivers/media/platform/tegra-cec/tegra_cec.c 187 */;
}
