cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-pxa.c 920 */[];
	long cocci_id/* drivers/i2c/busses/i2c-pxa.c 858 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-pxa.c 719 */;
	struct pxa_reg_layout cocci_id/* drivers/i2c/busses/i2c-pxa.c 65 */[];
	struct i2c_client *cocci_id/* drivers/i2c/busses/i2c-pxa.c 632 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-pxa.c 559 */;
	enum pxa_i2c_types{REGS_PXA2XX, REGS_PXA3XX, REGS_CE4100, REGS_PXA910, REGS_A3700,} cocci_id/* drivers/i2c/busses/i2c-pxa.c 51 */;
	struct pxa_reg_layout {
		u32 ibmr;
		u32 idbr;
		u32 icr;
		u32 isr;
		u32 isar;
		u32 ilcr;
		u32 iwcr;
		u32 fm;
		u32 hs;
	} cocci_id/* drivers/i2c/busses/i2c-pxa.c 39 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-pxa.c 350 */;
	struct pxa_i2c *cocci_id/* drivers/i2c/busses/i2c-pxa.c 340 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-pxa.c 333 */(int this_irq,
								   void *dev_id);
	void cocci_id/* drivers/i2c/busses/i2c-pxa.c 332 */(struct pxa_i2c *i2c,
							    int ret);
	unsigned int cocci_id/* drivers/i2c/busses/i2c-pxa.c 285 */;
	void cocci_id/* drivers/i2c/busses/i2c-pxa.c 285 */;
	const struct bits cocci_id/* drivers/i2c/busses/i2c-pxa.c 266 */[];
	u32 cocci_id/* drivers/i2c/busses/i2c-pxa.c 235 */;
	const struct bits *cocci_id/* drivers/i2c/busses/i2c-pxa.c 235 */;
	const char *cocci_id/* drivers/i2c/busses/i2c-pxa.c 235 */;
	int cocci_id/* drivers/i2c/busses/i2c-pxa.c 235 */;
	struct bits {
		u32 mask;
		const char *set;
		const char *unset;
	} cocci_id/* drivers/i2c/busses/i2c-pxa.c 227 */;
	struct pxa_i2c {
		spinlock_t lock;
		wait_queue_head_t wait;
		struct i2c_msg *msg;
		unsigned int msg_num;
		unsigned int msg_idx;
		unsigned int msg_ptr;
		unsigned int slave_addr;
		unsigned int req_slave_addr;
		struct i2c_adapter adap;
		struct clk *clk;
#ifdef CONFIG_I2C_PXA_SLAVE
		struct i2c_client *slave;
#endif
		unsigned int irqlogidx;
		u32 isrlog[32];
		u32 icrlog[32];
		void __iomem *reg_base;
		void __iomem *reg_ibmr;
		void __iomem *reg_idbr;
		void __iomem *reg_icr;
		void __iomem *reg_isr;
		void __iomem *reg_isar;
		void __iomem *reg_ilcr;
		void __iomem *reg_iwcr;
		unsigned long iobase;
		unsigned long iosize;
		int irq;
		unsigned int use_pio:1;
		unsigned int fast_mode:1;
		unsigned int high_mode:1;
		unsigned char master_code;
		unsigned long rate;
		bool highmode_enter;
		u32 fm_mask;
		u32 hs_mask;
	} cocci_id/* drivers/i2c/busses/i2c-pxa.c 169 */;
	void __exit cocci_id/* drivers/i2c/busses/i2c-pxa.c 1434 */;
	int __init cocci_id/* drivers/i2c/busses/i2c-pxa.c 1429 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-pxa.c 1418 */;
	const struct dev_pm_ops cocci_id/* drivers/i2c/busses/i2c-pxa.c 1408 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-pxa.c 1398 */;
	struct pxa_i2c cocci_id/* drivers/i2c/busses/i2c-pxa.c 1260 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-pxa.c 1257 */;
	enum pxa_i2c_types cocci_id/* drivers/i2c/busses/i2c-pxa.c 1255 */;
	struct i2c_pxa_platform_data *cocci_id/* drivers/i2c/busses/i2c-pxa.c 1254 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-pxa.c 1252 */;
	const struct platform_device_id *cocci_id/* drivers/i2c/busses/i2c-pxa.c 1237 */;
	const struct of_device_id *cocci_id/* drivers/i2c/busses/i2c-pxa.c 1213 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-pxa.c 1212 */;
	enum pxa_i2c_types *cocci_id/* drivers/i2c/busses/i2c-pxa.c 1210 */;
	void *cocci_id/* drivers/i2c/busses/i2c-pxa.c 1201 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-pxa.c 1200 */[];
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-pxa.c 1182 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-pxa.c 1176 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-pxa.c 1105 */;
	const struct platform_device_id cocci_id/* drivers/i2c/busses/i2c-pxa.c 107 */[];
}
