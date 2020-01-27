cocci_test_suite() {
	const struct cdns_platform_data *cocci_id/* drivers/i2c/busses/i2c-cadence.c 900 */;
	const struct of_device_id *cocci_id/* drivers/i2c/busses/i2c-cadence.c 889 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-cadence.c 886 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-cadence.c 884 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-cadence.c 867 */[];
	const struct cdns_platform_data cocci_id/* drivers/i2c/busses/i2c-cadence.c 863 */;
	const struct dev_pm_ops cocci_id/* drivers/i2c/busses/i2c-cadence.c 858 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-cadence.c 844 */;
	int __maybe_unused cocci_id/* drivers/i2c/busses/i2c-cadence.c 844 */;
	struct clk_notifier_data *cocci_id/* drivers/i2c/busses/i2c-cadence.c 776 */;
	void *cocci_id/* drivers/i2c/busses/i2c-cadence.c 774 */;
	struct notifier_block *cocci_id/* drivers/i2c/busses/i2c-cadence.c 773 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-cadence.c 677 */;
	unsigned int *cocci_id/* drivers/i2c/busses/i2c-cadence.c 674 */;
	unsigned long *cocci_id/* drivers/i2c/busses/i2c-cadence.c 673 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-cadence.c 673 */;
	int cocci_id/* drivers/i2c/busses/i2c-cadence.c 673 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-cadence.c 656 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-cadence.c 649 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-cadence.c 568 */;
	bool cocci_id/* drivers/i2c/busses/i2c-cadence.c 203 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-cadence.c 199 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-cadence.c 178 */;
	struct cdns_i2c *cocci_id/* drivers/i2c/busses/i2c-cadence.c 176 */;
	void cocci_id/* drivers/i2c/busses/i2c-cadence.c 176 */;
	struct cdns_i2c cocci_id/* drivers/i2c/busses/i2c-cadence.c 167 */;
	struct cdns_platform_data {
		u32 quirks;
	} cocci_id/* drivers/i2c/busses/i2c-cadence.c 163 */;
	struct cdns_i2c {
		struct device *dev;
		void __iomem *membase;
		struct i2c_adapter adap;
		struct i2c_msg *p_msg;
		int err_status;
		struct completion xfer_done;
		unsigned char *p_send_buf;
		unsigned char *p_recv_buf;
		unsigned int send_count;
		unsigned int recv_count;
		unsigned int curr_recv_count;
		int irq;
		unsigned long input_clk;
		unsigned int i2c_clk;
		unsigned int bus_hold_flag;
		struct clk *clk;
		struct notifier_block clk_rate_change_nb;
		u32 quirks;
	} cocci_id/* drivers/i2c/busses/i2c-cadence.c 142 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-cadence.c 1008 */;
}
