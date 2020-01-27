cocci_test_suite() {
	int cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 93 */;
	union hi6220_mbox_data cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 78 */;
	struct hi6220_stub_clk *cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 67 */;
	unsigned int cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 67 */;
	union hi6220_mbox_data {
		unsigned int data[HI6220_MBOX_MSG_LEN];
		struct hi6220_mbox_msg msg;
	} cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 62 */;
	struct hi6220_mbox_msg {
		unsigned char type;
		unsigned char cmd;
		unsigned char obj;
		unsigned char src;
		unsigned char para[4];
	} cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 54 */;
	struct hi6220_stub_clk {
		u32 id;
		struct device *dev;
		struct clk_hw hw;
		struct regmap *dfs_map;
		struct mbox_client cl;
		struct mbox_chan *mbox;
	} cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 43 */;
	struct hi6220_stub_clk cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 41 */;
	int __init cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 268 */;
	void cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 268 */;
	struct platform_driver cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 260 */;
	const struct of_device_id cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 255 */[];
	struct device_node *cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 199 */;
	struct clk *cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 198 */;
	struct clk_init_data cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 196 */;
	struct device *cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 195 */;
	struct platform_device *cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 193 */;
	const struct clk_ops cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 187 */;
	unsigned long *cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 165 */;
	long cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 164 */;
	u32 cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 119 */;
	struct clk_hw *cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 116 */;
	unsigned long cocci_id/* drivers/clk/hisilicon/clk-hi6220-stub.c 116 */;
}
