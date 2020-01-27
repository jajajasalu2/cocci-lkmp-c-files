cocci_test_suite() {
	void __exit cocci_id/* drivers/i2c/busses/i2c-stu300.c 994 */;
	int __init cocci_id/* drivers/i2c/busses/i2c-stu300.c 989 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-stu300.c 978 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-stu300.c 972 */[];
	struct device *cocci_id/* drivers/i2c/busses/i2c-stu300.c 942 */;
	struct stu300_dev cocci_id/* drivers/i2c/busses/i2c-stu300.c 867 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-stu300.c 863 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-stu300.c 859 */;
	const struct i2c_adapter_quirks cocci_id/* drivers/i2c/busses/i2c-stu300.c 855 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-stu300.c 849 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-stu300.c 843 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-stu300.c 587 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-stu300.c 546 */;
	const struct stu300_clkset cocci_id/* drivers/i2c/busses/i2c-stu300.c 463 */[];
	struct stu300_clkset {
		unsigned long rate;
		u32 setting;
	} cocci_id/* drivers/i2c/busses/i2c-stu300.c 458 */;
	void cocci_id/* drivers/i2c/busses/i2c-stu300.c 404 */;
	enum stu300_event cocci_id/* drivers/i2c/busses/i2c-stu300.c 373 */;
	struct stu300_dev *cocci_id/* drivers/i2c/busses/i2c-stu300.c 372 */;
	int cocci_id/* drivers/i2c/busses/i2c-stu300.c 372 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-stu300.c 326 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-stu300.c 299 */;
	void *cocci_id/* drivers/i2c/busses/i2c-stu300.c 299 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-stu300.c 225 */;
	void __iomem *cocci_id/* drivers/i2c/busses/i2c-stu300.c 185 */;
	int cocci_id/* drivers/i2c/busses/i2c-stu300.c 169 */(struct stu300_dev *dev);
	struct stu300_dev {
		struct platform_device *pdev;
		struct i2c_adapter adapter;
		void __iomem *virtbase;
		struct clk *clk;
		int irq;
		spinlock_t cmd_issue_lock;
		struct completion cmd_complete;
		enum stu300_event cmd_event;
		enum stu300_error cmd_err;
		unsigned int speed;
		int msg_index;
		int msg_len;
	} cocci_id/* drivers/i2c/busses/i2c-stu300.c 153 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-stu300.c 135 */;
	enum stu300_error{STU300_ERROR_NONE=0, STU300_ERROR_ACKNOWLEDGE_FAILURE, STU300_ERROR_BUS_ERROR, STU300_ERROR_ARBITRATION_LOST, STU300_ERROR_UNKNOWN,} cocci_id/* drivers/i2c/busses/i2c-stu300.c 117 */;
	enum stu300_event{STU300_EVENT_NONE=0, STU300_EVENT_1, STU300_EVENT_2, STU300_EVENT_3, STU300_EVENT_4, STU300_EVENT_5, STU300_EVENT_6, STU300_EVENT_7, STU300_EVENT_8, STU300_EVENT_9,} cocci_id/* drivers/i2c/busses/i2c-stu300.c 104 */;
}
