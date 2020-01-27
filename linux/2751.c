cocci_test_suite() {
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 971 */;
	struct i2c_spec_values {
		unsigned long min_hold_start_ns;
		unsigned long min_low_ns;
		unsigned long min_high_ns;
		unsigned long min_setup_start_ns;
		unsigned long max_data_hold_ns;
		unsigned long min_data_setup_ns;
		unsigned long min_setup_stop_ns;
		unsigned long min_hold_buffer_ns;
	} cocci_id/* drivers/i2c/busses/i2c-rk3x.c 93 */;
	struct rk3x_i2c cocci_id/* drivers/i2c/busses/i2c-rk3x.c 927 */;
	struct clk_notifier_data *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 926 */;
	void *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 924 */;
	struct notifier_block *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 923 */;
	int cocci_id/* drivers/i2c/busses/i2c-rk3x.c 878 */;
	u64 cocci_id/* drivers/i2c/busses/i2c-rk3x.c 875 */;
	struct rk3x_i2c_calced_timings cocci_id/* drivers/i2c/busses/i2c-rk3x.c 874 */;
	struct i2c_timings *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 873 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-rk3x.c 871 */;
	struct rk3x_i2c_calced_timings *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 563 */;
	const struct i2c_spec_values *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 540 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-rk3x.c 474 */;
	enum{REG_CON_MOD_TX=0, REG_CON_MOD_REGISTER_TX, REG_CON_MOD_RX, REG_CON_MOD_REGISTER_RX,} cocci_id/* drivers/i2c/busses/i2c-rk3x.c 44 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-rk3x.c 338 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-rk3x.c 229 */;
	struct rk3x_i2c *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 229 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-rk3x.c 229 */;
	void cocci_id/* drivers/i2c/busses/i2c-rk3x.c 223 */;
	struct rk3x_i2c {
		struct i2c_adapter adap;
		struct device *dev;
		const struct rk3x_i2c_soc_data *soc_data;
		void __iomem *regs;
		struct clk *clk;
		struct clk *pclk;
		struct notifier_block clk_rate_nb;
		struct i2c_timings t;
		spinlock_t lock;
		wait_queue_head_t wait;
		bool busy;
		struct i2c_msg *msg;
		u8 addr;
		unsigned int mode;
		bool is_last_msg;
		enum rk3x_i2c_state state;
		unsigned int processed;
		int error;
	} cocci_id/* drivers/i2c/busses/i2c-rk3x.c 192 */;
	struct rk3x_i2c_soc_data {
		int grf_offset;
		int (*calc_timings)(unsigned long, struct i2c_timings *,
				    struct rk3x_i2c_calced_timings *);
	} cocci_id/* drivers/i2c/busses/i2c-rk3x.c 165 */;
	enum rk3x_i2c_state{STATE_IDLE, STATE_START, STATE_READ, STATE_WRITE, STATE_STOP,} cocci_id/* drivers/i2c/busses/i2c-rk3x.c 152 */;
	struct rk3x_i2c_calced_timings {
		unsigned long div_low;
		unsigned long div_high;
		unsigned int tuning;
	} cocci_id/* drivers/i2c/busses/i2c-rk3x.c 146 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-rk3x.c 1352 */;
	const struct i2c_spec_values cocci_id/* drivers/i2c/busses/i2c-rk3x.c 126 */;
	struct regmap *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 1239 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 1196 */;
	const struct of_device_id *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 1194 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 1193 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 1191 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-rk3x.c 1162 */[];
	const struct rk3x_i2c_soc_data cocci_id/* drivers/i2c/busses/i2c-rk3x.c 1137 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-rk3x.c 1127 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 1122 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-rk3x.c 1113 */;
}
