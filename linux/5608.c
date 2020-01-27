cocci_test_suite() {
	const void *cocci_id/* drivers/rtc/rtc-mxc.c 88 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-mxc.c 87 */[];
	const struct platform_device_id cocci_id/* drivers/rtc/rtc-mxc.c 73 */[];
	struct rtc_plat_data {
		struct rtc_device *rtc;
		void __iomem *ioaddr;
		int irq;
		struct clk *clk_ref;
		struct clk *clk_ipg;
		struct rtc_time g_rtc_alarm;
		enum imx_rtc_type devtype;
	} cocci_id/* drivers/rtc/rtc-mxc.c 63 */;
	enum imx_rtc_type{IMX1_RTC, IMX21_RTC,} cocci_id/* drivers/rtc/rtc-mxc.c 58 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-mxc.c 443 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-mxc.c 340 */;
	enum imx_rtc_type cocci_id/* drivers/rtc/rtc-mxc.c 325 */;
	const struct of_device_id *cocci_id/* drivers/rtc/rtc-mxc.c 317 */;
	struct rtc_device *cocci_id/* drivers/rtc/rtc-mxc.c 312 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-mxc.c 302 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-mxc.c 275 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-mxc.c 241 */;
	unsigned int cocci_id/* drivers/rtc/rtc-mxc.c 232 */;
	unsigned long cocci_id/* drivers/rtc/rtc-mxc.c 207 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-mxc.c 204 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-mxc.c 202 */;
	void *cocci_id/* drivers/rtc/rtc-mxc.c 202 */;
	void cocci_id/* drivers/rtc/rtc-mxc.c 181 */;
	u32 cocci_id/* drivers/rtc/rtc-mxc.c 108 */;
	void __iomem *cocci_id/* drivers/rtc/rtc-mxc.c 107 */;
	struct rtc_plat_data *cocci_id/* drivers/rtc/rtc-mxc.c 106 */;
	time64_t cocci_id/* drivers/rtc/rtc-mxc.c 104 */;
	struct device *cocci_id/* drivers/rtc/rtc-mxc.c 104 */;
	int cocci_id/* drivers/rtc/rtc-mxc.c 104 */;
}
