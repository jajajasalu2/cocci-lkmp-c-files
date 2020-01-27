cocci_test_suite() {
	struct mpc8xxx_wdt_ddata *cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 72 */;
	u16 cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 56 */;
	struct mpc8xxx_wdt_ddata {
		struct mpc8xxx_wdt __iomem *base;
		struct watchdog_device wdd;
		spinlock_t lock;
		u16 swtc;
	} cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 49 */;
	struct mpc8xxx_wdt_type {
		int prescaler;
		bool hw_enabled;
		u32 rsr_mask;
	} cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 43 */;
	struct mpc8xxx_wdt {
		__be32 res0;
		__be32 swcrr;
#define SWCRR_SWTC 0xFFFF0000
#define SWCRR_SWF 0x00000008
#define SWCRR_SWEN 0x00000004
#define SWCRR_SWRI 0x00000002
#define SWCRR_SWPR 0x00000001
		__be32 swcnr;
		u8 res1[2];
		__be16 swsrr;
		u8 res2[0xF0];
	} cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 29 */;
	void __exit cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 257 */;
	void cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 257 */;
	int __init cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 251 */;
	struct platform_driver cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 243 */;
	struct mpc8xxx_wdt_type cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 218 */;
	const struct of_device_id cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 215 */[];
	u32 __iomem *cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 161 */;
	struct device *cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 135 */;
	bool cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 134 */;
	u32 cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 133 */;
	const struct mpc8xxx_wdt_type *cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 131 */;
	struct resource *cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 130 */;
	struct platform_device *cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 127 */;
	struct watchdog_ops cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 121 */;
	struct watchdog_info cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 115 */;
	struct mpc8xxx_wdt_ddata cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 109 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 106 */;
	int cocci_id/* drivers/watchdog/mpc8xxx_wdt.c 106 */;
}
