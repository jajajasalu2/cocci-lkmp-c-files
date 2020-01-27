cocci_test_suite() {
	struct rtc_time *cocci_id/* drivers/rtc/rtc-rp5c01.c 93 */;
	struct device *cocci_id/* drivers/rtc/rtc-rp5c01.c 93 */;
	struct rp5c01_priv *cocci_id/* drivers/rtc/rtc-rp5c01.c 82 */;
	void cocci_id/* drivers/rtc/rtc-rp5c01.c 82 */;
	struct rp5c01_priv {
		u32 __iomem *regs;
		struct rtc_device *rtc;
		spinlock_t lock;
	} cocci_id/* drivers/rtc/rtc-rp5c01.c 64 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-rp5c01.c 266 */;
	struct nvmem_config cocci_id/* drivers/rtc/rtc-rp5c01.c 224 */;
	struct rtc_device *cocci_id/* drivers/rtc/rtc-rp5c01.c 222 */;
	struct resource *cocci_id/* drivers/rtc/rtc-rp5c01.c 220 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-rp5c01.c 218 */;
	int __init cocci_id/* drivers/rtc/rtc-rp5c01.c 218 */;
	enum{RP5C01_1_SECOND=0x0, RP5C01_10_SECOND=0x1, RP5C01_1_MINUTE=0x2, RP5C01_10_MINUTE=0x3, RP5C01_1_HOUR=0x4, RP5C01_10_HOUR=0x5, RP5C01_DAY_OF_WEEK=0x6, RP5C01_1_DAY=0x7, RP5C01_10_DAY=0x8, RP5C01_1_MONTH=0x9, RP5C01_10_MONTH=0xa, RP5C01_1_YEAR=0xb, RP5C01_10_YEAR=0xc, RP5C01_12_24_SELECT=0xa, RP5C01_LEAP_YEAR=0xb, RP5C01_MODE=0xd, RP5C01_TEST=0xe, RP5C01_RESET=0xf,} cocci_id/* drivers/rtc/rtc-rp5c01.c 19 */;
	u8 cocci_id/* drivers/rtc/rtc-rp5c01.c 172 */;
	u8 *cocci_id/* drivers/rtc/rtc-rp5c01.c 167 */;
	size_t cocci_id/* drivers/rtc/rtc-rp5c01.c 164 */;
	void *cocci_id/* drivers/rtc/rtc-rp5c01.c 163 */;
	unsigned int cocci_id/* drivers/rtc/rtc-rp5c01.c 163 */;
	int cocci_id/* drivers/rtc/rtc-rp5c01.c 163 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-rp5c01.c 151 */;
}
