cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/staging/uwb/hwa-rc.c 916 */;
	const struct usb_device_id cocci_id/* drivers/staging/uwb/hwa-rc.c 897 */[];
	struct usb_interface *cocci_id/* drivers/staging/uwb/hwa-rc.c 866 */;
	void cocci_id/* drivers/staging/uwb/hwa-rc.c 866 */;
	const struct usb_device_id *cocci_id/* drivers/staging/uwb/hwa-rc.c 802 */;
	struct uwb_rc_evt_beacon_WUSB_0100 {
		struct uwb_rceb rceb;
		u8 bChannelNumber;
		__le16 wBPSTOffset;
		u8 bLQI;
		u8 bRSSI;
		__le16 wBeaconInfoLength;
		u8 BeaconInfo[];
	}__attribute__((packed)) cocci_id/* drivers/staging/uwb/hwa-rc.c 75 */;
	u16 cocci_id/* drivers/staging/uwb/hwa-rc.c 744 */;
	struct usb_descriptor_header *cocci_id/* drivers/staging/uwb/hwa-rc.c 742 */;
	char *cocci_id/* drivers/staging/uwb/hwa-rc.c 741 */;
	struct usb_device *cocci_id/* drivers/staging/uwb/hwa-rc.c 740 */;
	struct uwb_rc_control_intf_class_desc *cocci_id/* drivers/staging/uwb/hwa-rc.c 738 */;
	unsigned long cocci_id/* drivers/staging/uwb/hwa-rc.c 704 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/staging/uwb/hwa-rc.c 678 */;
	struct hwarc {
		struct usb_device *usb_dev;
		struct usb_interface *usb_iface;
		struct uwb_rc *uwb_rc;
		struct urb *neep_urb;
		struct edc neep_edc;
		void *rd_buffer;
	} cocci_id/* drivers/staging/uwb/hwa-rc.c 64 */;
	struct urb *cocci_id/* drivers/staging/uwb/hwa-rc.c 616 */;
	void *cocci_id/* drivers/staging/uwb/hwa-rc.c 590 */;
	struct hwarc *cocci_id/* drivers/staging/uwb/hwa-rc.c 585 */;
	const struct uwb_rccb *cocci_id/* drivers/staging/uwb/hwa-rc.c 583 */;
	struct uwb_rc *cocci_id/* drivers/staging/uwb/hwa-rc.c 583 */;
	int cocci_id/* drivers/staging/uwb/hwa-rc.c 583 */;
	size_t cocci_id/* drivers/staging/uwb/hwa-rc.c 583 */;
	const size_t cocci_id/* drivers/staging/uwb/hwa-rc.c 562 */;
	struct uwb_rceb **cocci_id/* drivers/staging/uwb/hwa-rc.c 561 */;
	struct uwb_rc_evt_drp_WUSB_0100 cocci_id/* drivers/staging/uwb/hwa-rc.c 526 */;
	struct uwb_rc_evt_drp_avail_WUSB_0100 cocci_id/* drivers/staging/uwb/hwa-rc.c 513 */;
	struct uwb_rc_evt_bp_slot_change_WUSB_0100 cocci_id/* drivers/staging/uwb/hwa-rc.c 508 */;
	struct uwb_rc_evt_beacon_WUSB_0100 cocci_id/* drivers/staging/uwb/hwa-rc.c 495 */;
	ssize_t cocci_id/* drivers/staging/uwb/hwa-rc.c 488 */;
	struct uwb_rceb *cocci_id/* drivers/staging/uwb/hwa-rc.c 486 */;
	struct uwb_rc_evt_bp_slot_change_WUSB_0100 {
		struct uwb_rceb rceb;
		u8 bSlotNumber;
	}__attribute__((packed)) cocci_id/* drivers/staging/uwb/hwa-rc.c 452 */;
	__le16 *cocci_id/* drivers/staging/uwb/hwa-rc.c 445 */;
	__le16 cocci_id/* drivers/staging/uwb/hwa-rc.c 434 */;
	const void *cocci_id/* drivers/staging/uwb/hwa-rc.c 433 */;
	const struct uwb_rceb *cocci_id/* drivers/staging/uwb/hwa-rc.c 428 */;
	size_t *cocci_id/* drivers/staging/uwb/hwa-rc.c 408 */;
	struct uwb_rccb **cocci_id/* drivers/staging/uwb/hwa-rc.c 407 */;
	struct uwb_rccb *cocci_id/* drivers/staging/uwb/hwa-rc.c 379 */;
	struct uwb_rc_cmd_set_drp_ie cocci_id/* drivers/staging/uwb/hwa-rc.c 338 */;
	struct uwb_rc_cmd_set_drp_ie_WUSB_0100 *cocci_id/* drivers/staging/uwb/hwa-rc.c 335 */;
	struct uwb_rc_cmd_set_drp_ie *cocci_id/* drivers/staging/uwb/hwa-rc.c 334 */;
	struct uwb_rc_cmd_set_drp_ie_WUSB_0100 {
		struct uwb_rccb rccb;
		u8 bExplicit;
		__le16 wIELength;
		struct uwb_ie_drp IEData[];
	}__attribute__((packed)) cocci_id/* drivers/staging/uwb/hwa-rc.c 309 */;
	struct uwb_rc_cmd_scan cocci_id/* drivers/staging/uwb/hwa-rc.c 298 */;
	struct uwb_rc_cmd_scan *cocci_id/* drivers/staging/uwb/hwa-rc.c 296 */;
	struct uwb_rc_cmd_scan_WUSB_0100 {
		struct uwb_rccb rccb;
		u8 bChannelNumber;
		u8 bScanState;
	}__attribute__((packed)) cocci_id/* drivers/staging/uwb/hwa-rc.c 275 */;
	struct uwb_rc_evt_drp *cocci_id/* drivers/staging/uwb/hwa-rc.c 239 */;
	struct uwb_rc_evt_drp_WUSB_0100 *cocci_id/* drivers/staging/uwb/hwa-rc.c 238 */;
	struct uwb_rc_evt_drp_WUSB_0100 {
		struct uwb_rceb rceb;
		struct uwb_dev_addr wSrcAddr;
		u8 bExplicit;
		__le16 wIELength;
		u8 IEData[];
	}__attribute__((packed)) cocci_id/* drivers/staging/uwb/hwa-rc.c 211 */;
	u8 *cocci_id/* drivers/staging/uwb/hwa-rc.c 203 */;
	struct uwb_ie_hdr *cocci_id/* drivers/staging/uwb/hwa-rc.c 165 */;
	struct uwb_rc_evt_drp_avail *cocci_id/* drivers/staging/uwb/hwa-rc.c 164 */;
	struct uwb_rc_evt_drp_avail_WUSB_0100 *cocci_id/* drivers/staging/uwb/hwa-rc.c 163 */;
	struct uwb_rc_evt_drp_avail_WUSB_0100 {
		struct uwb_rceb rceb;
		__le16 wIELength;
		u8 IEData[];
	}__attribute__((packed)) cocci_id/* drivers/staging/uwb/hwa-rc.c 144 */;
	struct device *cocci_id/* drivers/staging/uwb/hwa-rc.c 108 */;
	struct uwb_rc_evt_beacon *cocci_id/* drivers/staging/uwb/hwa-rc.c 106 */;
	struct uwb_rc_evt_beacon_WUSB_0100 *cocci_id/* drivers/staging/uwb/hwa-rc.c 105 */;
}
