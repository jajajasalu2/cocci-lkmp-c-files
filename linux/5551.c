cocci_test_suite() {
	struct imx_sc_msg_timer_rtc_set_alarm cocci_id/* drivers/rtc/rtc-imx-sc.c 95 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-imx-sc.c 83 */;
	struct device *cocci_id/* drivers/rtc/rtc-imx-sc.c 78 */;
	unsigned int cocci_id/* drivers/rtc/rtc-imx-sc.c 78 */;
	int cocci_id/* drivers/rtc/rtc-imx-sc.c 78 */;
	struct arm_smccc_res cocci_id/* drivers/rtc/rtc-imx-sc.c 66 */;
	struct imx_sc_rpc_msg *cocci_id/* drivers/rtc/rtc-imx-sc.c 45 */;
	struct imx_sc_msg_timer_get_rtc_time cocci_id/* drivers/rtc/rtc-imx-sc.c 44 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-imx-sc.c 42 */;
	struct imx_sc_msg_timer_rtc_set_alarm {
		struct imx_sc_rpc_msg hdr;
		u16 year;
		u8 mon;
		u8 day;
		u8 hour;
		u8 min;
		u8 sec;
	}__packed cocci_id/* drivers/rtc/rtc-imx-sc.c 32 */;
	struct imx_sc_msg_timer_get_rtc_time {
		struct imx_sc_rpc_msg hdr;
		u32 time;
	}__packed cocci_id/* drivers/rtc/rtc-imx-sc.c 27 */;
	struct rtc_device *cocci_id/* drivers/rtc/rtc-imx-sc.c 25 */;
	struct imx_sc_ipc *cocci_id/* drivers/rtc/rtc-imx-sc.c 24 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-imx-sc.c 184 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-imx-sc.c 178 */[];
	struct platform_device *cocci_id/* drivers/rtc/rtc-imx-sc.c 151 */;
	struct notifier_block cocci_id/* drivers/rtc/rtc-imx-sc.c 147 */;
	u8 *cocci_id/* drivers/rtc/rtc-imx-sc.c 139 */;
	void *cocci_id/* drivers/rtc/rtc-imx-sc.c 136 */;
	unsigned long cocci_id/* drivers/rtc/rtc-imx-sc.c 136 */;
	struct notifier_block *cocci_id/* drivers/rtc/rtc-imx-sc.c 135 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-imx-sc.c 127 */;
}
