cocci_test_suite() {
	struct usbatm_driver cocci_id/* drivers/usb/atm/speedtch.c 925 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/usb/atm/speedtch.c 840 */;
	const __u8 cocci_id/* drivers/usb/atm/speedtch.c 835 */;
	const struct usb_host_interface *cocci_id/* drivers/usb/atm/speedtch.c 834 */;
	const struct usb_device_id *cocci_id/* drivers/usb/atm/speedtch.c 763 */;
	struct usb_interface *cocci_id/* drivers/usb/atm/speedtch.c 762 */;
	struct usb_driver cocci_id/* drivers/usb/atm/speedtch.c 737 */;
	int cocci_id/* drivers/usb/atm/speedtch.c 735 */(struct usb_interface *,
							 const struct usb_device_id *);
	unsigned char cocci_id/* drivers/usb/atm/speedtch.c 73 */[MODEM_OPTION_LENGTH];
	const struct usb_device_id cocci_id/* drivers/usb/atm/speedtch.c 728 */[];
	unsigned char cocci_id/* drivers/usb/atm/speedtch.c 72 */;
	unsigned int cocci_id/* drivers/usb/atm/speedtch.c 71 */;
	struct urb *cocci_id/* drivers/usb/atm/speedtch.c 687 */;
	void cocci_id/* drivers/usb/atm/speedtch.c 684 */;
	const unsigned char cocci_id/* drivers/usb/atm/speedtch.c 67 */[MODEM_OPTION_LENGTH];
	unsigned char cocci_id/* drivers/usb/atm/speedtch.c 652 */[13];
	struct speedtch_instance_data *cocci_id/* drivers/usb/atm/speedtch.c 650 */;
	struct usb_device *cocci_id/* drivers/usb/atm/speedtch.c 649 */;
	struct usbatm_data *cocci_id/* drivers/usb/atm/speedtch.c 647 */;
	struct atm_dev *cocci_id/* drivers/usb/atm/speedtch.c 647 */;
	int cocci_id/* drivers/usb/atm/speedtch.c 647 */;
	const unsigned char cocci_id/* drivers/usb/atm/speedtch.c 603 */[6];
	bool cocci_id/* drivers/usb/atm/speedtch.c 60 */;
	struct timer_list *cocci_id/* drivers/usb/atm/speedtch.c 574 */;
	unsigned char *cocci_id/* drivers/usb/atm/speedtch.c 490 */;
	struct speedtch_instance_data cocci_id/* drivers/usb/atm/speedtch.c 486 */;
	struct work_struct *cocci_id/* drivers/usb/atm/speedtch.c 483 */;
	const struct firmware *cocci_id/* drivers/usb/atm/speedtch.c 381 */;
	char cocci_id/* drivers/usb/atm/speedtch.c 354 */[24];
	const u8 cocci_id/* drivers/usb/atm/speedtch.c 352 */;
	const u16 cocci_id/* drivers/usb/atm/speedtch.c 351 */;
	struct device *cocci_id/* drivers/usb/atm/speedtch.c 350 */;
	const struct firmware **cocci_id/* drivers/usb/atm/speedtch.c 348 */;
	unsigned long cocci_id/* drivers/usb/atm/speedtch.c 342 */;
	const char cocci_id/* drivers/usb/atm/speedtch.c 31 */[];
	struct speedtch_instance_data {
		struct usbatm_data *usbatm;
		struct speedtch_params params;
		struct timer_list status_check_timer;
		struct work_struct status_check_work;
		unsigned char last_status;
		int poll_delay;
		struct timer_list resubmit_timer;
		struct urb *int_urb;
		unsigned char int_data[16];
		unsigned char scratch_buffer[16];
	} cocci_id/* drivers/usb/atm/speedtch.c 121 */;
	struct speedtch_params {
		unsigned int altsetting;
		unsigned int BMaxDSL;
		unsigned char ModemMode;
		unsigned char ModemOption[MODEM_OPTION_LENGTH];
	} cocci_id/* drivers/usb/atm/speedtch.c 114 */;
}
