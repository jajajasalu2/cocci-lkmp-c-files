cocci_test_suite() {
	struct dma_chan *cocci_id/* drivers/i2c/busses/i2c-tegra.c 938 */;
	struct dma_slave_config cocci_id/* drivers/i2c/busses/i2c-tegra.c 937 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-tegra.c 936 */;
	size_t cocci_id/* drivers/i2c/busses/i2c-tegra.c 933 */;
	const u32 cocci_id/* drivers/i2c/busses/i2c-tegra.c 823 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-tegra.c 820 */;
	bool cocci_id/* drivers/i2c/busses/i2c-tegra.c 708 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-tegra.c 489 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-tegra.c 458 */;
	dma_addr_t cocci_id/* drivers/i2c/busses/i2c-tegra.c 405 */;
	u32 *cocci_id/* drivers/i2c/busses/i2c-tegra.c 404 */;
	enum dma_transfer_direction cocci_id/* drivers/i2c/busses/i2c-tegra.c 360 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/i2c/busses/i2c-tegra.c 359 */;
	int cocci_id/* drivers/i2c/busses/i2c-tegra.c 329 */;
	void *cocci_id/* drivers/i2c/busses/i2c-tegra.c 328 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-tegra.c 290 */;
	struct tegra_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-tegra.c 290 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-tegra.c 290 */;
	void cocci_id/* drivers/i2c/busses/i2c-tegra.c 284 */;
	struct tegra_i2c_dev {
		struct device *dev;
		const struct tegra_i2c_hw_feature *hw;
		struct i2c_adapter adapter;
		struct clk *div_clk;
		struct clk *fast_clk;
		struct reset_control *rst;
		void __iomem *base;
		phys_addr_t base_phys;
		int cont_id;
		int irq;
		bool irq_disabled;
		int is_dvc;
		struct completion msg_complete;
		int msg_err;
		u8 *msg_buf;
		size_t msg_buf_remaining;
		int msg_read;
		u32 bus_clk_rate;
		u16 clk_divisor_non_hs_mode;
		bool is_multimaster_mode;
		spinlock_t xfer_lock;
		struct dma_chan *tx_dma_chan;
		struct dma_chan *rx_dma_chan;
		dma_addr_t dma_phys;
		u32 *dma_buf;
		unsigned int dma_buf_size;
		bool is_curr_dma_xfer;
		struct completion dma_complete;
	} cocci_id/* drivers/i2c/busses/i2c-tegra.c 252 */;
	struct tegra_i2c_hw_feature {
		bool has_continue_xfer_support;
		bool has_per_pkt_xfer_complete_irq;
		bool has_single_clk_source;
		bool has_config_load_reg;
		int clk_divisor_hs_mode;
		int clk_divisor_std_mode;
		int clk_divisor_fast_mode;
		u16 clk_divisor_fast_plus_mode;
		bool has_multi_master_mode;
		bool has_slcg_override_reg;
		bool has_mst_fifo;
		const struct i2c_adapter_quirks *quirks;
		bool supports_bus_clear;
		bool has_apb_dma;
		u8 tlow_std_mode;
		u8 thigh_std_mode;
		u8 tlow_fast_fastplus_mode;
		u8 thigh_fast_fastplus_mode;
		u32 setup_hold_time_std_mode;
		u32 setup_hold_time_fast_fast_plus_mode;
		u32 setup_hold_time_hs_mode;
		bool has_interface_timing_reg;
	} cocci_id/* drivers/i2c/busses/i2c-tegra.c 196 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-tegra.c 1747 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-tegra.c 1719 */;
	int __maybe_unused cocci_id/* drivers/i2c/busses/i2c-tegra.c 1719 */;
	phys_addr_t cocci_id/* drivers/i2c/busses/i2c-tegra.c 1516 */;
	void __iomem *cocci_id/* drivers/i2c/busses/i2c-tegra.c 1515 */;
	struct clk *cocci_id/* drivers/i2c/busses/i2c-tegra.c 1513 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-tegra.c 1512 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-tegra.c 1509 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-tegra.c 1496 */[];
	enum msg_end_type{MSG_END_STOP, MSG_END_REPEAT_START, MSG_END_CONTINUE,} cocci_id/* drivers/i2c/busses/i2c-tegra.c 145 */;
	const struct tegra_i2c_hw_feature cocci_id/* drivers/i2c/busses/i2c-tegra.c 1370 */;
	struct i2c_bus_recovery_info cocci_id/* drivers/i2c/busses/i2c-tegra.c 1316 */;
	const struct i2c_adapter_quirks cocci_id/* drivers/i2c/busses/i2c-tegra.c 1311 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-tegra.c 1299 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-tegra.c 1286 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-tegra.c 1273 */;
	enum msg_end_type cocci_id/* drivers/i2c/busses/i2c-tegra.c 1255 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-tegra.c 1241 */[];
	u16 cocci_id/* drivers/i2c/busses/i2c-tegra.c 1052 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-tegra.c 1041 */;
}
