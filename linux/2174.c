cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/power/supply/twl4030_charger.c 976 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/twl4030_charger.c 956 */;
	struct iio_channel *cocci_id/* drivers/power/supply/twl4030_charger.c 94 */;
	int cocci_id/* drivers/power/supply/twl4030_charger.c 94 */;
	u32 cocci_id/* drivers/power/supply/twl4030_charger.c 934 */;
	struct twl4030_bci_platform_data *cocci_id/* drivers/power/supply/twl4030_charger.c 933 */;
	struct device_node *cocci_id/* drivers/power/supply/twl4030_charger.c 932 */;
	const struct twl4030_bci_platform_data *cocci_id/* drivers/power/supply/twl4030_charger.c 929 */;
	enum power_supply_property cocci_id/* drivers/power/supply/twl4030_charger.c 920 */[];
	const union power_supply_propval *cocci_id/* drivers/power/supply/twl4030_charger.c 890 */;
	u8 cocci_id/* drivers/power/supply/twl4030_charger.c 807 */;
	struct twl4030_bci *cocci_id/* drivers/power/supply/twl4030_charger.c 793 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/twl4030_charger.c 791 */;
	enum power_supply_property cocci_id/* drivers/power/supply/twl4030_charger.c 790 */;
	struct power_supply *cocci_id/* drivers/power/supply/twl4030_charger.c 789 */;
	struct device_attribute *cocci_id/* drivers/power/supply/twl4030_charger.c 717 */;
	char *cocci_id/* drivers/power/supply/twl4030_charger.c 717 */;
	struct device *cocci_id/* drivers/power/supply/twl4030_charger.c 716 */;
	ssize_t cocci_id/* drivers/power/supply/twl4030_charger.c 715 */;
	const char *cocci_id/* drivers/power/supply/twl4030_charger.c 688 */;
	size_t cocci_id/* drivers/power/supply/twl4030_charger.c 688 */;
	struct twl4030_bci cocci_id/* drivers/power/supply/twl4030_charger.c 667 */;
	struct notifier_block *cocci_id/* drivers/power/supply/twl4030_charger.c 664 */;
	unsigned long cocci_id/* drivers/power/supply/twl4030_charger.c 664 */;
	struct work_struct *cocci_id/* drivers/power/supply/twl4030_charger.c 649 */;
	void cocci_id/* drivers/power/supply/twl4030_charger.c 649 */;
	irqreturn_t cocci_id/* drivers/power/supply/twl4030_charger.c 605 */;
	void *cocci_id/* drivers/power/supply/twl4030_charger.c 605 */;
	int cocci_id/* drivers/power/supply/twl4030_charger.c 397 */(void);
	unsigned cocci_id/* drivers/power/supply/twl4030_charger.c 242 */;
	u8 *cocci_id/* drivers/power/supply/twl4030_charger.c 172 */;
	const char *cocci_id/* drivers/power/supply/twl4030_charger.c 152 */[];
	struct platform_driver cocci_id/* drivers/power/supply/twl4030_charger.c 1137 */;
	const struct of_device_id cocci_id/* drivers/power/supply/twl4030_charger.c 1131 */[];
	struct twl4030_bci {
		struct device *dev;
		struct power_supply *ac;
		struct power_supply *usb;
		struct usb_phy *transceiver;
		struct notifier_block usb_nb;
		struct work_struct work;
		int irq_chg;
		int irq_bci;
		int usb_enabled;
		unsigned int ichg_eoc,ichg_lo,ichg_hi;
		unsigned int usb_cur,ac_cur;
		struct iio_channel *channel_vac;
		bool ac_is_active;
		int usb_mode,ac_mode;
#define CHARGE_OFF 0
#define CHARGE_AUTO 1
#define CHARGE_LINEAR 2
		unsigned int usb_cur_target;
		struct delayed_work current_worker;
#define USB_CUR_STEP 20000
#define USB_MIN_VOLT 4750000
#define USB_CUR_DELAY msecs_to_jiffies(100)
#define USB_MAX_CURRENT 1700000
			unsigned long event;
	} cocci_id/* drivers/power/supply/twl4030_charger.c 111 */;
	bool cocci_id/* drivers/power/supply/twl4030_charger.c 107 */;
}
