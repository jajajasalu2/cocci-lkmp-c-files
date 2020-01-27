cocci_test_suite() {
	const char cocci_id/* drivers/rtc/rtc-cmos.c 97 */[];
	struct rtc_wkalrm cocci_id/* drivers/rtc/rtc-cmos.c 964 */;
	unsigned char cocci_id/* drivers/rtc/rtc-cmos.c 938 */;
	time64_t cocci_id/* drivers/rtc/rtc-cmos.c 936 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-cmos.c 935 */;
	struct cmos_rtc *cocci_id/* drivers/rtc/rtc-cmos.c 934 */;
	struct device *cocci_id/* drivers/rtc/rtc-cmos.c 932 */;
	int cocci_id/* drivers/rtc/rtc-cmos.c 932 */;
	irq_handler_t cocci_id/* drivers/rtc/rtc-cmos.c 838 */;
	struct cmos_rtc {
		struct rtc_device *rtc;
		struct device *dev;
		int irq;
		struct resource *iomem;
		time64_t alarm_expires;
		void (*wake_on)(struct device *);
		void (*wake_off)(struct device *);
		u8 enabled_wake;
		u8 suspend_ctrl;
		u8 day_alrm;
		u8 mon_alrm;
		u8 century;
		struct rtc_wkalrm saved_wkalrm;
	} cocci_id/* drivers/rtc/rtc-cmos.c 73 */;
	struct nvmem_config cocci_id/* drivers/rtc/rtc-cmos.c 713 */;
	u32 cocci_id/* drivers/rtc/rtc-cmos.c 712 */;
	unsigned cocci_id/* drivers/rtc/rtc-cmos.c 711 */;
	struct cmos_rtc_board_info *cocci_id/* drivers/rtc/rtc-cmos.c 708 */;
	struct resource *cocci_id/* drivers/rtc/rtc-cmos.c 706 */;
	int INITSECTION cocci_id/* drivers/rtc/rtc-cmos.c 705 */;
	u8 cocci_id/* drivers/rtc/rtc-cmos.c 652 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-cmos.c 650 */;
	struct cmos_rtc cocci_id/* drivers/rtc/rtc-cmos.c 648 */;
	size_t cocci_id/* drivers/rtc/rtc-cmos.c 594 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-cmos.c 568 */;
	struct seq_file *cocci_id/* drivers/rtc/rtc-cmos.c 530 */;
	unsigned long cocci_id/* drivers/rtc/rtc-cmos.c 515 */;
	unsigned int cocci_id/* drivers/rtc/rtc-cmos.c 512 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-cmos.c 251 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-cmos.c 223 */;
	void __exit cocci_id/* drivers/rtc/rtc-cmos.c 1483 */;
	int __init cocci_id/* drivers/rtc/rtc-cmos.c 1455 */;
	bool cocci_id/* drivers/rtc/rtc-cmos.c 1453 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-cmos.c 1440 */;
	const __be32 *cocci_id/* drivers/rtc/rtc-cmos.c 1375 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-cmos.c 1374 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-cmos.c 1372 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-cmos.c 1364 */[];
	char *cocci_id/* drivers/rtc/rtc-cmos.c 1348 */;
	struct pnp_driver cocci_id/* drivers/rtc/rtc-cmos.c 1347 */;
	const struct pnp_device_id cocci_id/* drivers/rtc/rtc-cmos.c 1339 */[];
	const struct pnp_device_id *cocci_id/* drivers/rtc/rtc-cmos.c 1296 */;
	struct pnp_dev *cocci_id/* drivers/rtc/rtc-cmos.c 1296 */;
	acpi_status cocci_id/* drivers/rtc/rtc-cmos.c 1262 */;
	acpi_event_status cocci_id/* drivers/rtc/rtc-cmos.c 1261 */;
	unsigned char *cocci_id/* drivers/rtc/rtc-cmos.c 1258 */;
	void cocci_id/* drivers/rtc/rtc-cmos.c 1257 */;
	struct cmos_rtc_board_info cocci_id/* drivers/rtc/rtc-cmos.c 1223 */;
	int __maybe_unused cocci_id/* drivers/rtc/rtc-cmos.c 1068 */;
	void cocci_id/* drivers/rtc/rtc-cmos.c 1065 */(struct device *dev,
						       unsigned char *rtc_control);
	void *cocci_id/* drivers/rtc/rtc-cmos.c 1052 */;
}
