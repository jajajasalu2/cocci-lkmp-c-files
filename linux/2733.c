cocci_test_suite() {
	void __exit cocci_id/* drivers/i2c/busses/i2c-pnx.c 780 */;
	enum{rw_bit=1 << 0, start_bit=1 << 8, stop_bit=1 << 9,} cocci_id/* drivers/i2c/busses/i2c-pnx.c 78 */;
	int __init cocci_id/* drivers/i2c/busses/i2c-pnx.c 775 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-pnx.c 765 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-pnx.c 758 */[];
	enum{mcntrl_tdie=0x00000001, mcntrl_afie=0x00000002, mcntrl_naie=0x00000004, mcntrl_drmie=0x00000008, mcntrl_drsie=0x00000010, mcntrl_rffie=0x00000020, mcntrl_daie=0x00000040, mcntrl_tffie=0x00000080, mcntrl_reset=0x00000100, mcntrl_cdbmode=0x00000400,} cocci_id/* drivers/i2c/busses/i2c-pnx.c 65 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-pnx.c 646 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-pnx.c 640 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-pnx.c 626 */;
	int cocci_id/* drivers/i2c/busses/i2c-pnx.c 626 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-pnx.c 611 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-pnx.c 606 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-pnx.c 512 */;
	enum{mstatus_tdi=0x00000001, mstatus_afi=0x00000002, mstatus_nai=0x00000004, mstatus_drmi=0x00000008, mstatus_active=0x00000020, mstatus_scl=0x00000040, mstatus_sda=0x00000080, mstatus_rff=0x00000100, mstatus_rfe=0x00000200, mstatus_tff=0x00000400, mstatus_tfe=0x00000800,} cocci_id/* drivers/i2c/busses/i2c-pnx.c 51 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-pnx.c 480 */;
	struct i2c_pnx_algo_data *cocci_id/* drivers/i2c/busses/i2c-pnx.c 478 */;
	void cocci_id/* drivers/i2c/busses/i2c-pnx.c 478 */;
	struct i2c_pnx_algo_data {
		void __iomem *ioaddr;
		struct i2c_pnx_mif mif;
		int last;
		struct clk *clk;
		struct i2c_adapter adapter;
		int irq;
		u32 timeout;
	} cocci_id/* drivers/i2c/busses/i2c-pnx.c 41 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-pnx.c 379 */;
	void *cocci_id/* drivers/i2c/busses/i2c-pnx.c 379 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-pnx.c 349 */;
	struct i2c_pnx_mif {
		int ret;
		int mode;
		struct completion complete;
		struct timer_list timer;
		u8 *buf;
		int len;
		int order;
	} cocci_id/* drivers/i2c/busses/i2c-pnx.c 31 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-pnx.c 302 */;
	long cocci_id/* drivers/i2c/busses/i2c-pnx.c 204 */;
	unsigned char cocci_id/* drivers/i2c/busses/i2c-pnx.c 145 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-pnx.c 123 */;
	struct timer_list *cocci_id/* drivers/i2c/busses/i2c-pnx.c 122 */;
}
