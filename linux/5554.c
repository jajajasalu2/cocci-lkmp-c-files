cocci_test_suite() {
	struct rtc_time *cocci_id/* drivers/rtc/rtc-tx4939.c 85 */;
	struct tx4939rtc_plat_data {
		struct rtc_device *rtc;
		struct tx4939_rtc_reg __iomem *rtcreg;
		spinlock_t lock;
	} cocci_id/* drivers/rtc/rtc-tx4939.c 39 */;
	struct tx4939_rtc_reg {
		__u32 ctl;
		__u32 adr;
		__u32 dat;
		__u32 tbc;
	} cocci_id/* drivers/rtc/rtc-tx4939.c 32 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-tx4939.c 292 */;
	int __exit cocci_id/* drivers/rtc/rtc-tx4939.c 282 */;
	struct nvmem_config cocci_id/* drivers/rtc/rtc-tx4939.c 240 */;
	struct rtc_device *cocci_id/* drivers/rtc/rtc-tx4939.c 237 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-tx4939.c 235 */;
	int __init cocci_id/* drivers/rtc/rtc-tx4939.c 235 */;
	u8 *cocci_id/* drivers/rtc/rtc-tx4939.c 208 */;
	struct tx4939_rtc_reg __iomem *cocci_id/* drivers/rtc/rtc-tx4939.c 207 */;
	struct tx4939rtc_plat_data *cocci_id/* drivers/rtc/rtc-tx4939.c 206 */;
	size_t cocci_id/* drivers/rtc/rtc-tx4939.c 204 */;
	void *cocci_id/* drivers/rtc/rtc-tx4939.c 203 */;
	unsigned int cocci_id/* drivers/rtc/rtc-tx4939.c 203 */;
	int cocci_id/* drivers/rtc/rtc-tx4939.c 203 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-tx4939.c 195 */;
	unsigned long cocci_id/* drivers/rtc/rtc-tx4939.c 182 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-tx4939.c 178 */;
	struct device *cocci_id/* drivers/rtc/rtc-tx4939.c 166 */;
	u32 cocci_id/* drivers/rtc/rtc-tx4939.c 143 */;
	unsigned char cocci_id/* drivers/rtc/rtc-tx4939.c 142 */[6];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-tx4939.c 136 */;
}
