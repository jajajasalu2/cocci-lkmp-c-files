cocci_test_suite() {
	u32 cocci_id/* drivers/rtc/rtc-ds1511.c 99 */;
	char *cocci_id/* drivers/rtc/rtc-ds1511.c 98 */;
	struct rtc_plat_data {
		struct rtc_device *rtc;
		void __iomem *ioaddr;
		int irq;
		unsigned int irqen;
		int alrm_sec;
		int alrm_min;
		int alrm_hour;
		int alrm_mday;
		spinlock_t lock;
	} cocci_id/* drivers/rtc/rtc-ds1511.c 84 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-ds1511.c 497 */;
	struct nvmem_config cocci_id/* drivers/rtc/rtc-ds1511.c 419 */;
	size_t cocci_id/* drivers/rtc/rtc-ds1511.c 392 */;
	unsigned int cocci_id/* drivers/rtc/rtc-ds1511.c 391 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-ds1511.c 383 */;
	struct device *cocci_id/* drivers/rtc/rtc-ds1511.c 369 */;
	unsigned long cocci_id/* drivers/rtc/rtc-ds1511.c 351 */;
	struct rtc_plat_data *cocci_id/* drivers/rtc/rtc-ds1511.c 350 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-ds1511.c 349 */;
	void *cocci_id/* drivers/rtc/rtc-ds1511.c 347 */;
	int cocci_id/* drivers/rtc/rtc-ds1511.c 347 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-ds1511.c 346 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-ds1511.c 331 */;
	void cocci_id/* drivers/rtc/rtc-ds1511.c 288 */;
	enum ds1511reg{DS1511_SEC=0x0, DS1511_MIN=0x1, DS1511_HOUR=0x2, DS1511_DOW=0x3, DS1511_DOM=0x4, DS1511_MONTH=0x5, DS1511_YEAR=0x6, DS1511_CENTURY=0x7, DS1511_AM1_SEC=0x8, DS1511_AM2_MIN=0x9, DS1511_AM3_HOUR=0xa, DS1511_AM4_DATE=0xb, DS1511_WD_MSEC=0xc, DS1511_WD_SEC=0xd, DS1511_CONTROL_A=0xe, DS1511_CONTROL_B=0xf, DS1511_RAMADDR_LSB=0x10, DS1511_RAMDATA=0x13,} cocci_id/* drivers/rtc/rtc-ds1511.c 25 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-ds1511.c 239 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1511.c 182 */;
	enum ds1511reg cocci_id/* drivers/rtc/rtc-ds1511.c 114 */;
	uint8_t cocci_id/* drivers/rtc/rtc-ds1511.c 113 */;
	uint32_t cocci_id/* drivers/rtc/rtc-ds1511.c 102 */;
}
