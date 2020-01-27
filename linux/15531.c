cocci_test_suite() {
	const struct i2c_msg *cocci_id/* drivers/i3c/master/dw-i3c-master.c 956 */;
	struct i3c_dev_desc *cocci_id/* drivers/i3c/master/dw-i3c-master.c 912 */;
	struct i3c_priv_xfer *cocci_id/* drivers/i3c/master/dw-i3c-master.c 828 */;
	struct dw_i3c_cmd *cocci_id/* drivers/i3c/master/dw-i3c-master.c 707 */;
	struct dw_i3c_xfer *cocci_id/* drivers/i3c/master/dw-i3c-master.c 706 */;
	struct i3c_ccc_cmd *cocci_id/* drivers/i3c/master/dw-i3c-master.c 704 */;
	void cocci_id/* drivers/i3c/master/dw-i3c-master.c 654 */;
	struct i3c_device_info cocci_id/* drivers/i3c/master/dw-i3c-master.c 596 */;
	struct i3c_bus *cocci_id/* drivers/i3c/master/dw-i3c-master.c 595 */;
	u32 cocci_id/* drivers/i3c/master/dw-i3c-master.c 565 */;
	u16 cocci_id/* drivers/i3c/master/dw-i3c-master.c 564 */;
	unsigned long cocci_id/* drivers/i3c/master/dw-i3c-master.c 563 */;
	struct dw_i3c_master *cocci_id/* drivers/i3c/master/dw-i3c-master.c 561 */;
	int cocci_id/* drivers/i3c/master/dw-i3c-master.c 561 */;
	u8 cocci_id/* drivers/i3c/master/dw-i3c-master.c 522 */;
	struct dw_i3c_xfer cocci_id/* drivers/i3c/master/dw-i3c-master.c 509 */;
	unsigned int cocci_id/* drivers/i3c/master/dw-i3c-master.c 358 */;
	u8 *cocci_id/* drivers/i3c/master/dw-i3c-master.c 346 */;
	const u8 *cocci_id/* drivers/i3c/master/dw-i3c-master.c 334 */;
	struct dw_i3c_master cocci_id/* drivers/i3c/master/dw-i3c-master.c 298 */;
	const struct i3c_ccc_cmd *cocci_id/* drivers/i3c/master/dw-i3c-master.c 259 */;
	bool cocci_id/* drivers/i3c/master/dw-i3c-master.c 258 */;
	struct dw_i3c_i2c_dev_data {
		u8 index;
	} cocci_id/* drivers/i3c/master/dw-i3c-master.c 246 */;
	struct dw_i3c_master {
		struct i3c_master_controller base;
		u16 maxdevs;
		u16 datstartaddr;
		u32 free_pos;
		struct {
			struct list_head list;
			struct dw_i3c_xfer *cur;
			spinlock_t lock;
		} xferqueue;
		struct dw_i3c_master_caps caps;
		void __iomem *regs;
		struct reset_control *core_rst;
		struct clk *core_clk;
		char version[5];
		char type[5];
		u8 addrs[MAX_DEVS];
	} cocci_id/* drivers/i3c/master/dw-i3c-master.c 227 */;
	struct dw_i3c_xfer {
		struct list_head node;
		struct completion comp;
		int ret;
		unsigned int ncmds;
		struct dw_i3c_cmd cmds[0];
	} cocci_id/* drivers/i3c/master/dw-i3c-master.c 219 */;
	struct dw_i3c_cmd {
		u32 cmd_lo;
		u32 cmd_hi;
		u16 tx_len;
		const void *tx_buf;
		u16 rx_len;
		void *rx_buf;
		u8 error;
	} cocci_id/* drivers/i3c/master/dw-i3c-master.c 209 */;
	struct dw_i3c_master_caps {
		u8 cmdfifodepth;
		u8 datafifodepth;
	} cocci_id/* drivers/i3c/master/dw-i3c-master.c 204 */;
	struct platform_driver cocci_id/* drivers/i3c/master/dw-i3c-master.c 1193 */;
	const struct of_device_id cocci_id/* drivers/i3c/master/dw-i3c-master.c 1187 */[];
	struct resource *cocci_id/* drivers/i3c/master/dw-i3c-master.c 1103 */;
	struct platform_device *cocci_id/* drivers/i3c/master/dw-i3c-master.c 1100 */;
	const struct i3c_master_controller_ops cocci_id/* drivers/i3c/master/dw-i3c-master.c 1085 */;
	irqreturn_t cocci_id/* drivers/i3c/master/dw-i3c-master.c 1064 */;
	void *cocci_id/* drivers/i3c/master/dw-i3c-master.c 1064 */;
	struct dw_i3c_i2c_dev_data *cocci_id/* drivers/i3c/master/dw-i3c-master.c 1024 */;
	struct i3c_master_controller *cocci_id/* drivers/i3c/master/dw-i3c-master.c 1022 */;
	struct i2c_dev_desc *cocci_id/* drivers/i3c/master/dw-i3c-master.c 1020 */;
}
