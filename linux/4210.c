cocci_test_suite() {
	enum get_ec_info_op cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 99 */;
	u8 cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 73 */;
	int cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 72 */;
	struct wilco_ec_message cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 71 */;
	struct boot_on_ac_request cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 70 */;
	struct wilco_ec_device *cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 69 */;
	const char *cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 67 */;
	size_t cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 67 */;
	struct device_attribute *cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 66 */;
	struct device *cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 65 */;
	ssize_t cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 65 */;
	struct get_ec_info_resp {
		u8 reserved[2];
		char value[9];
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 60 */;
	struct get_ec_info_req {
		u8 cmd;
		u8 reserved;
		u8 op;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 54 */;
	enum get_ec_info_op{CMD_GET_EC_LABEL=0, CMD_GET_EC_REV=1, CMD_GET_EC_MODEL=2, CMD_GET_EC_BUILD_DATE=3,} cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 47 */;
	struct usb_charge_response {
		u8 reserved;
		u8 status;
		u8 val;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 40 */;
	struct usb_charge_request {
		u8 cmd;
		u8 reserved;
		u8 op;
		u8 val;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 33 */;
	enum usb_charge_op{USB_CHARGE_GET=0, USB_CHARGE_SET=1,} cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 28 */;
	void cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 244 */;
	struct attribute_group cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 235 */;
	struct attribute *cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 225 */[];
	struct usb_charge_response cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 181 */;
	struct usb_charge_request cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 180 */;
	struct boot_on_ac_request {
		u8 cmd;
		u8 reserved1;
		u8 sub_cmd;
		u8 reserved3to5[3];
		u8 val;
		u8 reserved7;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 17 */;
	struct usb_charge_response *cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 156 */;
	struct usb_charge_request *cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 155 */;
	char *cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 139 */;
	struct get_ec_info_resp cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 103 */;
	struct get_ec_info_req cocci_id/* drivers/platform/chrome/wilco_ec/sysfs.c 102 */;
}
