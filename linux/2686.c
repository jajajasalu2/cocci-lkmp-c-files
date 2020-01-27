cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-st.c 899 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-st.c 892 */[];
	struct resource *cocci_id/* drivers/i2c/busses/i2c-st.c 810 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-st.c 806 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-st.c 784 */;
	struct i2c_bus_recovery_info cocci_id/* drivers/i2c/busses/i2c-st.c 780 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-st.c 775 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-st.c 770 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-st.c 755 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-st.c 713 */[];
	bool cocci_id/* drivers/i2c/busses/i2c-st.c 645 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-st.c 644 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-st.c 564 */;
	void *cocci_id/* drivers/i2c/busses/i2c-st.c 564 */;
	struct st_i2c_client *cocci_id/* drivers/i2c/busses/i2c-st.c 531 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-st.c 479 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-st.c 467 */;
	struct st_i2c_timings *cocci_id/* drivers/i2c/busses/i2c-st.c 274 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-st.c 272 */;
	int cocci_id/* drivers/i2c/busses/i2c-st.c 237 */;
	struct st_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-st.c 235 */;
	struct st_i2c_timings cocci_id/* drivers/i2c/busses/i2c-st.c 214 */[];
	u32 cocci_id/* drivers/i2c/busses/i2c-st.c 202 */;
	void __iomem *cocci_id/* drivers/i2c/busses/i2c-st.c 202 */;
	void cocci_id/* drivers/i2c/busses/i2c-st.c 202 */;
	struct st_i2c_dev {
		struct i2c_adapter adap;
		struct device *dev;
		void __iomem *base;
		struct completion complete;
		int irq;
		struct clk *clk;
		int mode;
		u32 scl_min_width_us;
		u32 sda_min_width_us;
		struct st_i2c_client client;
		bool busy;
	} cocci_id/* drivers/i2c/busses/i2c-st.c 183 */;
	struct st_i2c_client {
		u8 addr;
		u32 count;
		u32 xfered;
		u8 *buf;
		int result;
		bool stop;
	} cocci_id/* drivers/i2c/busses/i2c-st.c 160 */;
	struct st_i2c_timings {
		u32 rate;
		u32 rep_start_hold;
		u32 rep_start_setup;
		u32 start_hold;
		u32 data_setup_time;
		u32 stop_setup_time;
		u32 bus_free_time;
		u32 sda_pulse_min_limit;
	} cocci_id/* drivers/i2c/busses/i2c-st.c 140 */;
	enum st_i2c_mode{I2C_MODE_STANDARD, I2C_MODE_FAST, I2C_MODE_END,} cocci_id/* drivers/i2c/busses/i2c-st.c 123 */;
}
