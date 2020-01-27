cocci_test_suite() {
	struct ushc_data {
		struct usb_device *usb_dev;
		struct mmc_host *mmc;
		struct urb *int_urb;
		struct ushc_int_data *int_data;
		struct urb *cbw_urb;
		struct ushc_cbw *cbw;
		struct urb *data_urb;
		struct urb *csw_urb;
		struct ushc_csw *csw;
		spinlock_t lock;
		struct mmc_request *current_req;
		u32 caps;
		u16 host_ctrl;
		unsigned long flags;
		u8 last_status;
		int clock_freq;
	} cocci_id/* drivers/mmc/host/ushc.c 89 */;
	struct ushc_int_data {
		u8 status;
		u8 reserved[3];
	} cocci_id/* drivers/mmc/host/ushc.c 80 */;
	struct ushc_csw {
		__u8 signature;
		__u8 status;
		__le32 response;
	}__attribute__((packed)) cocci_id/* drivers/mmc/host/ushc.c 72 */;
	struct ushc_cbw {
		__u8 signature;
		__u8 cmd_idx;
		__le16 block_size;
		__le32 arg;
	}__attribute__((packed)) cocci_id/* drivers/mmc/host/ushc.c 63 */;
	struct usb_driver cocci_id/* drivers/mmc/host/ushc.c 557 */;
	struct usb_device_id cocci_id/* drivers/mmc/host/ushc.c 550 */[];
	struct usb_interface *cocci_id/* drivers/mmc/host/ushc.c 532 */;
	struct ushc_csw cocci_id/* drivers/mmc/host/ushc.c 506 */;
	struct ushc_cbw cocci_id/* drivers/mmc/host/ushc.c 484 */;
	struct ushc_int_data cocci_id/* drivers/mmc/host/ushc.c 467 */;
	struct ushc_data cocci_id/* drivers/mmc/host/ushc.c 428 */;
	struct usb_device *cocci_id/* drivers/mmc/host/ushc.c 420 */;
	const struct usb_device_id *cocci_id/* drivers/mmc/host/ushc.c 418 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/ushc.c 411 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/ushc.c 387 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/ushc.c 371 */;
	bool cocci_id/* drivers/mmc/host/ushc.c 348 */;
	unsigned char cocci_id/* drivers/mmc/host/ushc.c 321 */;
	enum ushc_request_type{USHC_GET_CAPS_TYPE=USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, USHC_HOST_CTRL_TYPE=USB_DIR_OUT | USB_TYPE_VENDOR | USB_RECIP_DEVICE, USHC_PWR_CTRL_TYPE=USB_DIR_OUT | USB_TYPE_VENDOR | USB_RECIP_DEVICE, USHC_CLK_FREQ_TYPE=USB_DIR_OUT | USB_TYPE_VENDOR | USB_RECIP_DEVICE, USHC_EXEC_CMD_TYPE=USB_DIR_OUT | USB_TYPE_VENDOR | USB_RECIP_DEVICE, USHC_READ_RESP_TYPE=USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_DEVICE, USHC_RESET_TYPE=USB_DIR_OUT | USB_TYPE_VENDOR | USB_RECIP_DEVICE,} cocci_id/* drivers/mmc/host/ushc.c 32 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/ushc.c 290 */;
	unsigned long cocci_id/* drivers/mmc/host/ushc.c 252 */;
	enum ushc_request{USHC_GET_CAPS=0x00, USHC_HOST_CTRL=0x01, USHC_PWR_CTRL=0x02, USHC_CLK_FREQ=0x03, USHC_EXEC_CMD=0x04, USHC_READ_RESP=0x05, USHC_RESET=0x06,} cocci_id/* drivers/mmc/host/ushc.c 22 */;
	int cocci_id/* drivers/mmc/host/ushc.c 219 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/ushc.c 218 */;
	struct ushc_data *cocci_id/* drivers/mmc/host/ushc.c 199 */;
	struct urb *cocci_id/* drivers/mmc/host/ushc.c 197 */;
	void cocci_id/* drivers/mmc/host/ushc.c 197 */;
	u8 cocci_id/* drivers/mmc/host/ushc.c 166 */;
	u16 cocci_id/* drivers/mmc/host/ushc.c 148 */;
	void cocci_id/* drivers/mmc/host/ushc.c 117 */(struct urb *urb);
}
