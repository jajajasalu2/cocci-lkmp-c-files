cocci_test_suite() {
	struct cdns_i3c_i2c_dev_data *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 991 */;
	struct i3c_master_controller *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 989 */;
	struct i2c_dev_desc *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 987 */;
	int cocci_id/* drivers/i3c/master/i3c-master-cdns.c 987 */;
	struct i3c_dev_desc *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 940 */;
	struct cdns_i3c_i2c_dev_data {
		u16 id;
		s16 ibi;
		struct i3c_generic_ibi_pool *ibi_pool;
	} cocci_id/* drivers/i3c/master/i3c-master-cdns.c 867 */;
	const struct i2c_msg *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 808 */;
	struct i3c_priv_xfer *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 727 */;
	struct i3c_ccc_cmd *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 687 */;
	enum i3c_error_code cocci_id/* drivers/i3c/master/i3c-master-cdns.c 666 */;
	struct cdns_i3c_cmd *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 666 */;
	struct cdns_i3c_xfer cocci_id/* drivers/i3c/master/i3c-master-cdns.c 615 */;
	struct cdns_i3c_master *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 500 */;
	unsigned int cocci_id/* drivers/i3c/master/i3c-master-cdns.c 500 */;
	struct cdns_i3c_xfer *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 499 */;
	const struct i3c_ccc_cmd *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 444 */;
	const u8 *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 420 */;
	struct cdns_i3c_master {
		struct work_struct hj_work;
		struct i3c_master_controller base;
		u32 free_rr_slots;
		unsigned int maxdevs;
		struct {
			unsigned int num_slots;
			struct i3c_dev_desc **slots;
			spinlock_t lock;
		} ibi;
		struct {
			struct list_head list;
			struct cdns_i3c_xfer *cur;
			spinlock_t lock;
		} xferqueue;
		void __iomem *regs;
		struct clk *sysclk;
		struct clk *pclk;
		struct cdns_i3c_master_caps caps;
		unsigned long i3c_scl_lim;
	} cocci_id/* drivers/i3c/master/i3c-master-cdns.c 391 */;
	struct cdns_i3c_xfer {
		struct list_head node;
		struct completion comp;
		int ret;
		unsigned int ncmds;
		struct cdns_i3c_cmd cmds[0];
	} cocci_id/* drivers/i3c/master/i3c-master-cdns.c 383 */;
	struct cdns_i3c_cmd {
		u32 cmd0;
		u32 cmd1;
		u32 tx_len;
		const void *tx_buf;
		u32 rx_len;
		void *rx_buf;
		u32 error;
	} cocci_id/* drivers/i3c/master/i3c-master-cdns.c 373 */;
	struct cdns_i3c_master_caps {
		u32 cmdfifodepth;
		u32 cmdrfifodepth;
		u32 txfifodepth;
		u32 rxfifodepth;
		u32 ibirfifodepth;
	} cocci_id/* drivers/i3c/master/i3c-master-cdns.c 365 */;
	struct platform_driver cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1639 */;
	const struct of_device_id cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1634 */[];
	struct resource *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1527 */;
	struct platform_device *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1524 */;
	struct cdns_i3c_master cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1518 */;
	struct work_struct *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1515 */;
	const struct i3c_master_controller_ops cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1495 */;
	const struct i3c_ibi_setup *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1441 */;
	irqreturn_t cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1357 */;
	void *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1357 */;
	u8 *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1283 */;
	size_t cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1282 */;
	struct i3c_ibi_slot *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1279 */;
	bool cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1278 */;
	struct i3c_device_info cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1190 */;
	u32 cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1189 */;
	struct i3c_bus *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1188 */;
	unsigned long cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1187 */;
	u8 cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1130 */;
	u8 cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1129 */[MAX_DEVS];
	u64 cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1051 */;
	struct i3c_device_info *cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1040 */;
	void cocci_id/* drivers/i3c/master/i3c-master-cdns.c 1031 */;
}
