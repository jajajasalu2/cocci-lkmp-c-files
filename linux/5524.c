cocci_test_suite() {
	struct ds1305 {
		struct spi_device *spi;
		struct rtc_device *rtc;
		struct work_struct work;
		unsigned long flags;
#define FLAG_EXITING 0
		bool hr12;
		u8 ctrl[DS1305_CONTROL_LEN];
	} cocci_id/* drivers/rtc/rtc-ds1305.c 84 */;
	struct spi_driver cocci_id/* drivers/rtc/rtc-ds1305.c 741 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1305.c 662 */[4];
	struct nvmem_config cocci_id/* drivers/rtc/rtc-ds1305.c 555 */;
	bool cocci_id/* drivers/rtc/rtc-ds1305.c 554 */;
	struct ds1305_platform_data *cocci_id/* drivers/rtc/rtc-ds1305.c 553 */;
	struct spi_transfer cocci_id/* drivers/rtc/rtc-ds1305.c 519 */[2];
	struct spi_message cocci_id/* drivers/rtc/rtc-ds1305.c 518 */;
	size_t cocci_id/* drivers/rtc/rtc-ds1305.c 513 */;
	struct spi_transfer *cocci_id/* drivers/rtc/rtc-ds1305.c 494 */;
	struct spi_message *cocci_id/* drivers/rtc/rtc-ds1305.c 494 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-ds1305.c 479 */;
	void *cocci_id/* drivers/rtc/rtc-ds1305.c 479 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1305.c 444 */[3];
	struct mutex *cocci_id/* drivers/rtc/rtc-ds1305.c 442 */;
	struct ds1305 cocci_id/* drivers/rtc/rtc-ds1305.c 441 */;
	struct work_struct *cocci_id/* drivers/rtc/rtc-ds1305.c 439 */;
	void cocci_id/* drivers/rtc/rtc-ds1305.c 439 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-ds1305.c 430 */;
	char *cocci_id/* drivers/rtc/rtc-ds1305.c 389 */;
	struct seq_file *cocci_id/* drivers/rtc/rtc-ds1305.c 386 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1305.c 325 */[1 + DS1305_ALM_LEN];
	struct rtc_time cocci_id/* drivers/rtc/rtc-ds1305.c 323 */;
	unsigned long cocci_id/* drivers/rtc/rtc-ds1305.c 322 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1305.c 272 */[DS1305_ALM_LEN];
	struct spi_device *cocci_id/* drivers/rtc/rtc-ds1305.c 269 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-ds1305.c 266 */;
	u8 *cocci_id/* drivers/rtc/rtc-ds1305.c 209 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1305.c 208 */[1 + DS1305_RTC_LEN];
	u8 cocci_id/* drivers/rtc/rtc-ds1305.c 174 */[DS1305_RTC_LEN];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-ds1305.c 170 */;
	long cocci_id/* drivers/rtc/rtc-ds1305.c 143 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1305.c 142 */[2];
	struct ds1305 *cocci_id/* drivers/rtc/rtc-ds1305.c 141 */;
	struct device *cocci_id/* drivers/rtc/rtc-ds1305.c 139 */;
	unsigned int cocci_id/* drivers/rtc/rtc-ds1305.c 139 */;
	int cocci_id/* drivers/rtc/rtc-ds1305.c 139 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1305.c 105 */;
	unsigned cocci_id/* drivers/rtc/rtc-ds1305.c 105 */;
}
