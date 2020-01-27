cocci_test_suite() {
	struct dln2_dev {
		struct usb_device *usb_dev;
		struct usb_interface *interface;
		u8 ep_in;
		u8 ep_out;
		struct urb *rx_urb[DLN2_MAX_URBS];
		void *rx_buf[DLN2_MAX_URBS];
		struct dln2_mod_rx_slots mod_rx_slots[DLN2_HANDLES];
		struct list_head event_cb_list;
		spinlock_t event_cb_lock;
		bool disconnect;
		int active_transfers;
		wait_queue_head_t disconnect_wq;
		spinlock_t disconnect_lock;
	} cocci_id/* drivers/mfd/dln2.c 93 */;
	struct usb_driver cocci_id/* drivers/mfd/dln2.c 812 */;
	const struct usb_device_id cocci_id/* drivers/mfd/dln2.c 805 */[];
	struct dln2_mod_rx_slots {
	DECLARE_BITMAP(bmap,DLN2_MAX_RX_SLOTS)
		;
		wait_queue_head_t wq;
		struct dln2_rx_context slots[DLN2_MAX_RX_SLOTS];
		spinlock_t lock;
	} cocci_id/* drivers/mfd/dln2.c 79 */;
	pm_message_t cocci_id/* drivers/mfd/dln2.c 787 */;
	struct usb_host_interface *cocci_id/* drivers/mfd/dln2.c 724 */;
	const struct usb_device_id *cocci_id/* drivers/mfd/dln2.c 722 */;
	struct usb_interface *cocci_id/* drivers/mfd/dln2.c 710 */;
	void cocci_id/* drivers/mfd/dln2.c 710 */;
	struct dln2_platform_data cocci_id/* drivers/mfd/dln2.c 663 */;
	const struct mfd_cell cocci_id/* drivers/mfd/dln2.c 659 */[];
	struct dln2_rx_context {
		struct completion done;
		struct urb *urb;
		bool in_use;
	} cocci_id/* drivers/mfd/dln2.c 62 */;
	const int cocci_id/* drivers/mfd/dln2.c 607 */;
	__le32 cocci_id/* drivers/mfd/dln2.c 529 */;
	struct dln2_platform_data *cocci_id/* drivers/mfd/dln2.c 513 */;
	enum dln2_handle{DLN2_HANDLE_EVENT=0, DLN2_HANDLE_CTRL, DLN2_HANDLE_GPIO, DLN2_HANDLE_I2C, DLN2_HANDLE_SPI, DLN2_HANDLES,} cocci_id/* drivers/mfd/dln2.c 47 */;
	struct dln2_mod_rx_slots *cocci_id/* drivers/mfd/dln2.c 432 */;
	const unsigned long cocci_id/* drivers/mfd/dln2.c 431 */;
	struct device *cocci_id/* drivers/mfd/dln2.c 430 */;
	struct dln2_rx_context *cocci_id/* drivers/mfd/dln2.c 429 */;
	struct dln2_response *cocci_id/* drivers/mfd/dln2.c 428 */;
	unsigned *cocci_id/* drivers/mfd/dln2.c 424 */;
	void *cocci_id/* drivers/mfd/dln2.c 424 */;
	const void *cocci_id/* drivers/mfd/dln2.c 423 */;
	unsigned cocci_id/* drivers/mfd/dln2.c 423 */;
	u16 cocci_id/* drivers/mfd/dln2.c 422 */;
	struct dln2_dev *cocci_id/* drivers/mfd/dln2.c 422 */;
	int cocci_id/* drivers/mfd/dln2.c 422 */;
	struct dln2_response {
		struct dln2_header hdr;
		__le16 result;
	} cocci_id/* drivers/mfd/dln2.c 31 */;
	struct dln2_header *cocci_id/* drivers/mfd/dln2.c 303 */;
	gfp_t cocci_id/* drivers/mfd/dln2.c 299 */;
	int *cocci_id/* drivers/mfd/dln2.c 299 */;
	struct dln2_header cocci_id/* drivers/mfd/dln2.c 260 */;
	u8 *cocci_id/* drivers/mfd/dln2.c 240 */;
	struct dln2_header {
		__le16 size;
		__le16 id;
		__le16 echo;
		__le16 handle;
	} cocci_id/* drivers/mfd/dln2.c 24 */;
	struct urb *cocci_id/* drivers/mfd/dln2.c 234 */;
	bool cocci_id/* drivers/mfd/dln2.c 188 */;
	unsigned long cocci_id/* drivers/mfd/dln2.c 125 */;
	struct dln2_event_cb_entry *cocci_id/* drivers/mfd/dln2.c 124 */;
	dln2_event_cb_t cocci_id/* drivers/mfd/dln2.c 121 */;
	struct platform_device *cocci_id/* drivers/mfd/dln2.c 120 */;
	struct dln2_event_cb_entry {
		struct list_head list;
		u16 id;
		struct platform_device *pdev;
		dln2_event_cb_t callback;
	} cocci_id/* drivers/mfd/dln2.c 113 */;
}
