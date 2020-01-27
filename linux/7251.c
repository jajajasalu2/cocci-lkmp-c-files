cocci_test_suite() {
	int cocci_id/* drivers/bluetooth/bcm203x.c 68 */;
	struct usb_device *cocci_id/* drivers/bluetooth/bcm203x.c 67 */;
	struct bcm203x_data *cocci_id/* drivers/bluetooth/bcm203x.c 66 */;
	struct urb *cocci_id/* drivers/bluetooth/bcm203x.c 64 */;
	void cocci_id/* drivers/bluetooth/bcm203x.c 64 */;
	struct bcm203x_data {
		struct usb_device *udev;
		unsigned long state;
		struct work_struct work;
		atomic_t shutdown;
		struct urb *urb;
		unsigned char *buffer;
		unsigned char *fw_data;
		unsigned int fw_size;
		unsigned int fw_sent;
	} cocci_id/* drivers/bluetooth/bcm203x.c 48 */;
	const struct usb_device_id cocci_id/* drivers/bluetooth/bcm203x.c 28 */[];
	struct usb_driver cocci_id/* drivers/bluetooth/bcm203x.c 252 */;
	struct usb_interface *cocci_id/* drivers/bluetooth/bcm203x.c 234 */;
	const struct firmware *cocci_id/* drivers/bluetooth/bcm203x.c 155 */;
	const struct usb_device_id *cocci_id/* drivers/bluetooth/bcm203x.c 153 */;
	struct bcm203x_data cocci_id/* drivers/bluetooth/bcm203x.c 144 */;
	struct work_struct *cocci_id/* drivers/bluetooth/bcm203x.c 141 */;
}
