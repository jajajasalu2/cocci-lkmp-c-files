cocci_test_suite() {
	struct pn533_std_frame *cocci_id/* drivers/nfc/pn533/usb.c 89 */;
	struct pn533_cmd *cocci_id/* drivers/nfc/pn533/usb.c 88 */;
	struct sk_buff *cocci_id/* drivers/nfc/pn533/usb.c 62 */;
	struct usb_driver cocci_id/* drivers/nfc/pn533/usb.c 601 */;
	struct usb_interface *cocci_id/* drivers/nfc/pn533/usb.c 576 */;
	struct pn533_usb_phy {
		struct usb_device *udev;
		struct usb_interface *interface;
		struct urb *out_urb;
		struct urb *in_urb;
		struct urb *ack_urb;
		u8 *ack_buffer;
		struct pn533 *priv;
	} cocci_id/* drivers/nfc/pn533/usb.c 46 */;
	unsigned char *cocci_id/* drivers/nfc/pn533/usb.c 456 */;
	struct pn533_frame_ops *cocci_id/* drivers/nfc/pn533/usb.c 455 */;
	enum pn533_protocol_type cocci_id/* drivers/nfc/pn533/usb.c 454 */;
	u32 cocci_id/* drivers/nfc/pn533/usb.c 453 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/nfc/pn533/usb.c 448 */;
	struct usb_host_interface *cocci_id/* drivers/nfc/pn533/usb.c 447 */;
	const struct usb_device_id *cocci_id/* drivers/nfc/pn533/usb.c 443 */;
	struct pn533_phy_ops cocci_id/* drivers/nfc/pn533/usb.c 436 */;
	struct pn533_acr122_poweron_rdr_arg cocci_id/* drivers/nfc/pn533/usb.c 376 */;
	char *cocci_id/* drivers/nfc/pn533/usb.c 372 */;
	u8 cocci_id/* drivers/nfc/pn533/usb.c 370 */[10];
	struct pn533_usb_phy *cocci_id/* drivers/nfc/pn533/usb.c 367 */;
	int cocci_id/* drivers/nfc/pn533/usb.c 367 */;
	struct pn533_acr122_poweron_rdr_arg *cocci_id/* drivers/nfc/pn533/usb.c 355 */;
	struct urb *cocci_id/* drivers/nfc/pn533/usb.c 353 */;
	void cocci_id/* drivers/nfc/pn533/usb.c 353 */;
	struct pn533_acr122_poweron_rdr_arg {
		int rc;
		struct completion done;
	} cocci_id/* drivers/nfc/pn533/usb.c 348 */;
	struct pn533_frame_ops cocci_id/* drivers/nfc/pn533/usb.c 332 */;
	const struct usb_device_id cocci_id/* drivers/nfc/pn533/usb.c 33 */[];
	struct pn533_acr122_rx_frame *cocci_id/* drivers/nfc/pn533/usb.c 327 */;
	u8 cocci_id/* drivers/nfc/pn533/usb.c 325 */;
	void *cocci_id/* drivers/nfc/pn533/usb.c 325 */;
	struct pn533_acr122_rx_frame cocci_id/* drivers/nfc/pn533/usb.c 322 */;
	bool cocci_id/* drivers/nfc/pn533/usb.c 301 */;
	struct pn533 *cocci_id/* drivers/nfc/pn533/usb.c 301 */;
	struct pn533_acr122_tx_frame *cocci_id/* drivers/nfc/pn533/usb.c 289 */;
	struct pn533_acr122_rx_frame {
		struct pn533_acr122_ccid_hdr ccid;
		u8 data[];
	}__packed cocci_id/* drivers/nfc/pn533/usb.c 259 */;
	struct pn533_acr122_tx_frame {
		struct pn533_acr122_ccid_hdr ccid;
		struct pn533_acr122_apdu_hdr apdu;
		u8 datalen;
		u8 data[];
	}__packed cocci_id/* drivers/nfc/pn533/usb.c 252 */;
	struct pn533_acr122_apdu_hdr {
		u8 class;
		u8 ins;
		u8 p1;
		u8 p2;
	}__packed cocci_id/* drivers/nfc/pn533/usb.c 245 */;
	struct pn533_acr122_ccid_hdr {
		u8 type;
		u32 datalen;
		u8 slot;
		u8 seq;
		u8 params[3];
		u8 data[];
	}__packed cocci_id/* drivers/nfc/pn533/usb.c 231 */;
	struct pn533_acr122_tx_frame cocci_id/* drivers/nfc/pn533/usb.c 216 */;
	const u8 cocci_id/* drivers/nfc/pn533/usb.c 142 */[6];
	gfp_t cocci_id/* drivers/nfc/pn533/usb.c 132 */;
}
