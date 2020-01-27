cocci_test_suite() {
	struct mtk_i2c {
		void __iomem *base;
		struct device *dev;
		struct i2c_adapter adap;
		u32 bus_freq;
		u32 clk_div;
		u32 flags;
		struct clk *clk;
	} cocci_id/* drivers/i2c/busses/i2c-mt7621.c 59 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-mt7621.c 342 */;
	struct mtk_i2c cocci_id/* drivers/i2c/busses/i2c-mt7621.c 280 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-mt7621.c 273 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-mt7621.c 271 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-mt7621.c 253 */[];
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-mt7621.c 248 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-mt7621.c 243 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-mt7621.c 146 */[2];
	u16 cocci_id/* drivers/i2c/busses/i2c-mt7621.c 143 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-mt7621.c 138 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-mt7621.c 111 */;
	struct mtk_i2c *cocci_id/* drivers/i2c/busses/i2c-mt7621.c 111 */;
	int cocci_id/* drivers/i2c/busses/i2c-mt7621.c 111 */;
	void cocci_id/* drivers/i2c/busses/i2c-mt7621.c 100 */;
}
