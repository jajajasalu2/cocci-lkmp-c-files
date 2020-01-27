cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 864 */;
	struct platform_device *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 808 */;
	u16 cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 642 */;
	unsigned cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 403 */;
	u8 cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 402 */;
	enum usb_otg_state cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 401 */;
	struct isp1301 {
		struct usb_phy phy;
		struct i2c_client *client;
		void (*i2c_release)(struct device *dev);
		int irq_type;
		u32 last_otg_ctrl;
		unsigned working:1;
		struct timer_list timer;
		struct work_struct work;
		unsigned long todo;
#		define WORK_UPDATE_ISP 0
#		define WORK_UPDATE_OTG 1
#		define WORK_HOST_RESUME 4
#		define WORK_TIMER 6
#		define WORK_STOP 7
	} cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 39 */;
	u32 cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 327 */;
	const char *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 325 */;
	struct isp1301 *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 325 */;
	void cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 325 */;
	struct device *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 284 */;
	void __maybe_unused cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 248 */;
	void __exit cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1629 */;
	int __init cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1623 */;
	const struct i2c_device_id cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1606 */[];
	const struct i2c_device_id *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1479 */;
	struct i2c_client *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1479 */;
	struct usb_phy *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1389 */;
	struct i2c_driver cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 134 */;
	struct usb_gadget *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1319 */;
	struct isp1301 cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1265 */;
	struct usb_otg *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1263 */;
	struct usb_bus *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1263 */;
	struct timer_list *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1173 */;
	irqreturn_t cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1167 */;
	void *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1167 */;
	struct work_struct *cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 1086 */;
	int cocci_id/* drivers/usb/phy/phy-isp1301-omap.c 100 */;
}
