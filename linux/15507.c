cocci_test_suite() {
	int cocci_id/* drivers/nfc/nfcmrvl/usb.c 72 */;
	struct sk_buff *cocci_id/* drivers/nfc/nfcmrvl/usb.c 71 */;
	struct nfcmrvl_usb_drv_data *cocci_id/* drivers/nfc/nfcmrvl/usb.c 70 */;
	struct urb *cocci_id/* drivers/nfc/nfcmrvl/usb.c 68 */;
	void cocci_id/* drivers/nfc/nfcmrvl/usb.c 68 */;
	unsigned long cocci_id/* drivers/nfc/nfcmrvl/usb.c 56 */;
	struct usb_driver cocci_id/* drivers/nfc/nfcmrvl/usb.c 454 */;
	pm_message_t cocci_id/* drivers/nfc/nfcmrvl/usb.c 373 */;
	struct nfcmrvl_usb_drv_data {
		struct usb_device *udev;
		struct usb_interface *intf;
		unsigned long flags;
		struct work_struct waker;
		struct usb_anchor tx_anchor;
		struct usb_anchor bulk_anchor;
		struct usb_anchor deferred;
		int tx_in_flight;
		spinlock_t txlock;
		struct usb_endpoint_descriptor *bulk_tx_ep;
		struct usb_endpoint_descriptor *bulk_rx_ep;
		int suspend_count;
		struct nfcmrvl_private *priv;
	} cocci_id/* drivers/nfc/nfcmrvl/usb.c 37 */;
	struct usb_interface *cocci_id/* drivers/nfc/nfcmrvl/usb.c 358 */;
	struct nfcmrvl_platform_data cocci_id/* drivers/nfc/nfcmrvl/usb.c 304 */;
	struct usb_device *cocci_id/* drivers/nfc/nfcmrvl/usb.c 303 */;
	struct nfcmrvl_private *cocci_id/* drivers/nfc/nfcmrvl/usb.c 301 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/nfc/nfcmrvl/usb.c 299 */;
	const struct usb_device_id *cocci_id/* drivers/nfc/nfcmrvl/usb.c 297 */;
	struct nfcmrvl_usb_drv_data cocci_id/* drivers/nfc/nfcmrvl/usb.c 286 */;
	struct work_struct *cocci_id/* drivers/nfc/nfcmrvl/usb.c 283 */;
	struct nfcmrvl_if_ops cocci_id/* drivers/nfc/nfcmrvl/usb.c 277 */;
	struct usb_device_id cocci_id/* drivers/nfc/nfcmrvl/usb.c 26 */[];
	struct nci_dev *cocci_id/* drivers/nfc/nfcmrvl/usb.c 160 */;
	unsigned int cocci_id/* drivers/nfc/nfcmrvl/usb.c 117 */;
	unsigned char *cocci_id/* drivers/nfc/nfcmrvl/usb.c 116 */;
	gfp_t cocci_id/* drivers/nfc/nfcmrvl/usb.c 113 */;
}
