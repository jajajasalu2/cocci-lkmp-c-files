cocci_test_suite() {
	u32 cocci_id/* drivers/mfd/db8500-prcmu.c 953 */[];
	void __iomem **cocci_id/* drivers/mfd/db8500-prcmu.c 885 */;
	unsigned int cocci_id/* drivers/mfd/db8500-prcmu.c 830 */;
	const u8 cocci_id/* drivers/mfd/db8500-prcmu.c 822 */[2];
	int cocci_id/* drivers/mfd/db8500-prcmu.c 736 */[2];
	enum ap_pwrst cocci_id/* drivers/mfd/db8500-prcmu.c 719 */;
	enum romcode_read cocci_id/* drivers/mfd/db8500-prcmu.c 709 */;
	enum romcode_write cocci_id/* drivers/mfd/db8500-prcmu.c 694 */;
	struct prcmu_fw_version *cocci_id/* drivers/mfd/db8500-prcmu.c 667 */;
	struct dsiescclk cocci_id/* drivers/mfd/db8500-prcmu.c 527 */[3];
	struct dsiescclk {
		u32 en;
		u32 div_mask;
		u32 div_shift;
	} cocci_id/* drivers/mfd/db8500-prcmu.c 521 */;
	struct dsiclk cocci_id/* drivers/mfd/db8500-prcmu.c 508 */[2];
	struct dsiclk {
		u32 divsel_mask;
		u32 divsel_shift;
		u32 divsel;
	} cocci_id/* drivers/mfd/db8500-prcmu.c 502 */;
	struct clk_mgt cocci_id/* drivers/mfd/db8500-prcmu.c 470 */[PRCMU_NUM_REG_CLOCKS];
	enum{PLL_RAW, PLL_FIX, PLL_DIV,} cocci_id/* drivers/mfd/db8500-prcmu.c 460 */;
	struct clk_mgt {
		u32 offset;
		u32 pllsw;
		int branch;
		bool clk38div;
	} cocci_id/* drivers/mfd/db8500-prcmu.c 453 */;
	void *cocci_id/* drivers/mfd/db8500-prcmu.c 451 */;
	atomic_t cocci_id/* drivers/mfd/db8500-prcmu.c 443 */;
	struct {
		struct mutex lock;
		struct completion work;
		struct {
			u8 status;
			u8 value;
		} ack;
	} cocci_id/* drivers/mfd/db8500-prcmu.c 434 */;
	struct {
		struct mutex lock;
		struct completion work;
	} cocci_id/* drivers/mfd/db8500-prcmu.c 423 */;
	struct {
		spinlock_t lock;
		struct mutex sysclk_lock;
		struct completion sysclk_work;
	} cocci_id/* drivers/mfd/db8500-prcmu.c 412 */;
	struct {
		struct mutex lock;
		struct completion work;
		spinlock_t auto_pm_lock;
		bool auto_pm_enabled;
		struct {
			u8 status;
		} ack;
	} cocci_id/* drivers/mfd/db8500-prcmu.c 396 */;
	struct {
		struct mutex lock;
		struct completion work;
		u8 ape_opp;
		struct {
			u8 header;
			u8 arm_opp;
			u8 ape_opp;
			u8 ape_voltage_status;
		} ack;
	} cocci_id/* drivers/mfd/db8500-prcmu.c 375 */;
	struct {
		spinlock_t lock;
		spinlock_t dbb_irqs_lock;
		struct work_struct mask_work;
		struct mutex ac_wake_lock;
		struct completion ac_wake_work;
		struct {
			u32 dbb_irqs;
			u32 dbb_wakeups;
			u32 abb_events;
		} req;
	} cocci_id/* drivers/mfd/db8500-prcmu.c 355 */;
	u32 cocci_id/* drivers/mfd/db8500-prcmu.c 335 */[NUM_PRCMU_WAKEUP_INDICES];
	int __init cocci_id/* drivers/mfd/db8500-prcmu.c 3184 */;
	struct platform_driver cocci_id/* drivers/mfd/db8500-prcmu.c 3176 */;
	const struct of_device_id cocci_id/* drivers/mfd/db8500-prcmu.c 3171 */[];
	struct resource *cocci_id/* drivers/mfd/db8500-prcmu.c 3097 */;
	struct platform_device *cocci_id/* drivers/mfd/db8500-prcmu.c 3093 */;
	u32 cocci_id/* drivers/mfd/db8500-prcmu.c 307 */[NUM_PRCMU_WAKEUPS];
	const struct mfd_cell cocci_id/* drivers/mfd/db8500-prcmu.c 3064 */;
	struct resource cocci_id/* drivers/mfd/db8500-prcmu.c 3063 */;
	struct device *cocci_id/* drivers/mfd/db8500-prcmu.c 3060 */;
	const struct mfd_cell cocci_id/* drivers/mfd/db8500-prcmu.c 3041 */[];
	struct ux500_wdt_data cocci_id/* drivers/mfd/db8500-prcmu.c 3036 */;
	struct regulator_init_data cocci_id/* drivers/mfd/db8500-prcmu.c 2876 */[DB8500_NUM_REGULATORS];
	struct regulator_consumer_supply cocci_id/* drivers/mfd/db8500-prcmu.c 2835 */[];
	void __init cocci_id/* drivers/mfd/db8500-prcmu.c 2750 */;
	void __iomem *cocci_id/* drivers/mfd/db8500-prcmu.c 2723 */;
	struct device_node *cocci_id/* drivers/mfd/db8500-prcmu.c 2701 */;
	const struct irq_domain_ops cocci_id/* drivers/mfd/db8500-prcmu.c 2696 */;
	struct irq_domain *cocci_id/* drivers/mfd/db8500-prcmu.c 269 */;
	irq_hw_number_t cocci_id/* drivers/mfd/db8500-prcmu.c 2688 */;
	char *cocci_id/* drivers/mfd/db8500-prcmu.c 2643 */;
	struct {
		bool valid;
		struct prcmu_fw_version version;
	} cocci_id/* drivers/mfd/db8500-prcmu.c 264 */;
	struct irq_chip cocci_id/* drivers/mfd/db8500-prcmu.c 2635 */;
	struct irq_data *cocci_id/* drivers/mfd/db8500-prcmu.c 2631 */;
	struct work_struct *cocci_id/* drivers/mfd/db8500-prcmu.c 2592 */;
	irqreturn_t cocci_id/* drivers/mfd/db8500-prcmu.c 2565 */;
	bool (*cocci_id/* drivers/mfd/db8500-prcmu.c 2554 */[NUM_MB])(void);
	unsigned long cocci_id/* drivers/mfd/db8500-prcmu.c 2417 */;
	void cocci_id/* drivers/mfd/db8500-prcmu.c 2415 */;
	u8 *cocci_id/* drivers/mfd/db8500-prcmu.c 2195 */;
	bool cocci_id/* drivers/mfd/db8500-prcmu.c 2140 */;
	u16 cocci_id/* drivers/mfd/db8500-prcmu.c 2083 */;
	u8 cocci_id/* drivers/mfd/db8500-prcmu.c 1898 */[];
	long cocci_id/* drivers/mfd/db8500-prcmu.c 1830 */;
	const unsigned long *cocci_id/* drivers/mfd/db8500-prcmu.c 1740 */;
	const unsigned long cocci_id/* drivers/mfd/db8500-prcmu.c 1720 */[];
	int cocci_id/* drivers/mfd/db8500-prcmu.c 1663 */;
	u32 cocci_id/* drivers/mfd/db8500-prcmu.c 1572 */;
	u64 cocci_id/* drivers/mfd/db8500-prcmu.c 1558 */;
	u8 cocci_id/* drivers/mfd/db8500-prcmu.c 1530 */;
	struct prcmu_auto_pm_config *cocci_id/* drivers/mfd/db8500-prcmu.c 1233 */;
}
