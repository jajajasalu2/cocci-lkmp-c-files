cocci_test_suite() {
	unsigned long cocci_id/* drivers/rtc/rtc-pl031.c 95 */;
	struct pl031_local *cocci_id/* drivers/rtc/rtc-pl031.c 94 */;
	unsigned int cocci_id/* drivers/rtc/rtc-pl031.c 92 */;
	struct device *cocci_id/* drivers/rtc/rtc-pl031.c 91 */;
	int cocci_id/* drivers/rtc/rtc-pl031.c 91 */;
	struct pl031_local {
		struct pl031_vendor_data *vendor;
		struct rtc_device *rtc;
		void __iomem *base;
	} cocci_id/* drivers/rtc/rtc-pl031.c 85 */;
	struct pl031_vendor_data {
		struct rtc_class_ops ops;
		bool clockwatch;
		bool st_weekday;
		unsigned long irqflags;
	} cocci_id/* drivers/rtc/rtc-pl031.c 78 */;
	struct amba_driver cocci_id/* drivers/rtc/rtc-pl031.c 473 */;
	const struct amba_id cocci_id/* drivers/rtc/rtc-pl031.c 451 */[];
	struct pl031_vendor_data cocci_id/* drivers/rtc/rtc-pl031.c 408 */;
	struct pl031_local cocci_id/* drivers/rtc/rtc-pl031.c 326 */;
	struct rtc_class_ops *cocci_id/* drivers/rtc/rtc-pl031.c 319 */;
	struct pl031_vendor_data *cocci_id/* drivers/rtc/rtc-pl031.c 318 */;
	const struct amba_id *cocci_id/* drivers/rtc/rtc-pl031.c 314 */;
	struct amba_device *cocci_id/* drivers/rtc/rtc-pl031.c 314 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-pl031.c 270 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-pl031.c 247 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-pl031.c 229 */;
	void *cocci_id/* drivers/rtc/rtc-pl031.c 229 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-pl031.c 127 */;
	unsigned long *cocci_id/* drivers/rtc/rtc-pl031.c 114 */;
}
