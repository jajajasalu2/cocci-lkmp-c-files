cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 819 */;
	const struct usbmisc_ops *cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 808 */;
	const struct of_device_id *cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 792 */;
	struct platform_device *cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 789 */;
	const struct of_device_id cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 740 */[];
	struct imx_usbmisc *cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 729 */;
	bool cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 727 */;
	struct imx_usbmisc_data *cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 727 */;
	int cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 727 */;
	const struct usbmisc_ops cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 624 */;
	void __iomem *cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 179 */;
	u32 cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 131 */;
	unsigned long cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 130 */;
	bool cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 125 */(struct imx_usbmisc_data *data);
	struct imx_usbmisc {
		void __iomem *base;
		spinlock_t lock;
		const struct usbmisc_ops *ops;
	} cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 119 */;
	struct usbmisc_ops {
		int (*init)(struct imx_usbmisc_data *data);
		int (*post)(struct imx_usbmisc_data *data);
		int (*set_wakeup)(struct imx_usbmisc_data *data, bool enabled);
		int (*hsic_set_connect)(struct imx_usbmisc_data *data);
		int (*hsic_set_clk)(struct imx_usbmisc_data *data,
				    bool enabled);
	} cocci_id/* drivers/usb/chipidea/usbmisc_imx.c 106 */;
}
