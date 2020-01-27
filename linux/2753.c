cocci_test_suite() {
	struct cami2c {
		void __iomem *iobase;
		struct i2c_adapter adap;
		struct i2c_msg *msg;
#define IDF_SEND 1
#define IDF_RECV 2
#define IDF_STOP 4
		int flags;
#define IDS_DONE 1
#define IDS_ARBLOST 2
#define IDS_NACK 4
		int status;
		struct completion xfer_done;
		int irq;
		struct resource *ioarea;
	} cocci_id/* drivers/i2c/busses/i2c-sh7760.c 81 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-sh7760.c 550 */;
	struct cami2c cocci_id/* drivers/i2c/busses/i2c-sh7760.c 446 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-sh7760.c 435 */;
	struct sh7760_i2c_platdata *cocci_id/* drivers/i2c/busses/i2c-sh7760.c 434 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-sh7760.c 432 */;
	signed char cocci_id/* drivers/i2c/busses/i2c-sh7760.c 396 */;
	struct clk *cocci_id/* drivers/i2c/busses/i2c-sh7760.c 394 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-sh7760.c 381 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-sh7760.c 376 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-sh7760.c 376 */;
	char *cocci_id/* drivers/i2c/busses/i2c-sh7760.c 116 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-sh7760.c 115 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-sh7760.c 112 */;
	void *cocci_id/* drivers/i2c/busses/i2c-sh7760.c 112 */;
	struct cami2c *cocci_id/* drivers/i2c/busses/i2c-sh7760.c 107 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-sh7760.c 107 */;
	int cocci_id/* drivers/i2c/busses/i2c-sh7760.c 107 */;
	void cocci_id/* drivers/i2c/busses/i2c-sh7760.c 102 */;
}
