cocci_test_suite() {
	time64_t cocci_id/* drivers/rtc/rtc-rk808.c 83 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-rk808.c 81 */;
	void cocci_id/* drivers/rtc/rtc-rk808.c 81 */;
	struct rk808_rtc {
		struct rk808 *rk808;
		struct rtc_device *rtc;
		struct rk_rtc_compat_reg *creg;
		int irq;
	} cocci_id/* drivers/rtc/rtc-rk808.c 53 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-rk808.c 453 */;
	struct rk_rtc_compat_reg {
		unsigned int ctrl_reg;
		unsigned int status_reg;
		unsigned int alarm_seconds_reg;
		unsigned int int_reg;
		unsigned int seconds_reg;
	} cocci_id/* drivers/rtc/rtc-rk808.c 45 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-rk808.c 387 */;
	struct rk_rtc_compat_reg cocci_id/* drivers/rtc/rtc-rk808.c 371 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-rk808.c 334 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-rk808.c 317 */;
	struct rk808 *cocci_id/* drivers/rtc/rtc-rk808.c 316 */;
	struct rk808_rtc *cocci_id/* drivers/rtc/rtc-rk808.c 315 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-rk808.c 313 */;
	void *cocci_id/* drivers/rtc/rtc-rk808.c 313 */;
	int cocci_id/* drivers/rtc/rtc-rk808.c 313 */;
	unsigned int cocci_id/* drivers/rtc/rtc-rk808.c 293 */;
	struct device *cocci_id/* drivers/rtc/rtc-rk808.c 292 */;
	uint32_t cocci_id/* drivers/rtc/rtc-rk808.c 196 */;
	u8 cocci_id/* drivers/rtc/rtc-rk808.c 195 */[NUM_ALARM_REGS];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-rk808.c 191 */;
	u8 cocci_id/* drivers/rtc/rtc-rk808.c 101 */[NUM_TIME_REGS];
}
