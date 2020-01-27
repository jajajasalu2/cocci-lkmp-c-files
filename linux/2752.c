cocci_test_suite() {
	enum lpi2c_imx_pincfg{TWO_PIN_OD, TWO_PIN_OO, TWO_PIN_PP, FOUR_PIN_PP,} cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 94 */;
	enum lpi2c_imx_mode{STANDARD, FAST, FAST_PLUS, HS, ULTRA_FAST,} cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 86 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 672 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 650 */;
	int __maybe_unused cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 650 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 545 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 539 */[];
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 534 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 528 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 528 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 508 */;
	void *cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 508 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 436 */;
	enum lpi2c_imx_pincfg cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 211 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 209 */;
	enum lpi2c_imx_mode cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 153 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 126 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 125 */;
	struct lpi2c_imx_struct *cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 123 */;
	int cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 123 */;
	void cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 117 */;
	struct lpi2c_imx_struct {
		struct i2c_adapter adapter;
		struct clk *clk;
		void __iomem *base;
		__u8 *rx_buf;
		__u8 *tx_buf;
		struct completion complete;
		unsigned int msglen;
		unsigned int delivered;
		unsigned int block_data;
		unsigned int bitrate;
		unsigned int txfifosize;
		unsigned int rxfifosize;
		enum lpi2c_imx_mode mode;
	} cocci_id/* drivers/i2c/busses/i2c-imx-lpi2c.c 101 */;
}
