cocci_test_suite() {
	const u32 cocci_id/* drivers/usb/class/usbtmc.c 797 */;
	u32 *cocci_id/* drivers/usb/class/usbtmc.c 790 */;
	ssize_t cocci_id/* drivers/usb/class/usbtmc.c 787 */;
	bool cocci_id/* drivers/usb/class/usbtmc.c 774 */;
	struct usbtmc_device_data {
		const struct usb_device_id *id;
		struct usb_device *usb_dev;
		struct usb_interface *intf;
		struct list_head file_list;
		unsigned int bulk_in;
		unsigned int bulk_out;
		u8 bTag;
		u8 bTag_last_write;
		u8 bTag_last_read;
		u16 wMaxPacketSize;
		u8 bNotify1;
		u8 bNotify2;
		u16 ifnum;
		u8 iin_bTag;
		u8 *iin_buffer;
		atomic_t iin_data_valid;
		unsigned int iin_ep;
		int iin_ep_present;
		int iin_interval;
		struct urb *iin_urb;
		u16 iin_wMaxPacketSize;
		__u8 usb488_caps;
		bool zombie;
		struct usbtmc_dev_capabilities capabilities;
		struct kref kref;
		struct mutex io_mutex;
		wait_queue_head_t waitq;
		struct fasync_struct *fasync;
		spinlock_t dev_lock;
	} cocci_id/* drivers/usb/class/usbtmc.c 73 */;
	const size_t cocci_id/* drivers/usb/class/usbtmc.c 720 */;
	struct urb *cocci_id/* drivers/usb/class/usbtmc.c 718 */;
	void cocci_id/* drivers/usb/class/usbtmc.c 718 */;
	struct usbtmc_dev_capabilities {
		__u8 interface_capabilities;
		__u8 device_capabilities;
		__u8 usb488_interface_capabilities;
		__u8 usb488_device_capabilities;
	} cocci_id/* drivers/usb/class/usbtmc.c 63 */;
	u16 cocci_id/* drivers/usb/class/usbtmc.c 624 */;
	unsigned long cocci_id/* drivers/usb/class/usbtmc.c 577 */;
	__u32 __user *cocci_id/* drivers/usb/class/usbtmc.c 571 */;
	unsigned int cocci_id/* drivers/usb/class/usbtmc.c 500 */;
	const struct usb_device_id cocci_id/* drivers/usb/class/usbtmc.c 50 */[];
	__u8 __user *cocci_id/* drivers/usb/class/usbtmc.c 498 */;
	__u8 cocci_id/* drivers/usb/class/usbtmc.c 486 */;
	u8 cocci_id/* drivers/usb/class/usbtmc.c 485 */;
	void __user *cocci_id/* drivers/usb/class/usbtmc.c 479 */;
	pm_message_t cocci_id/* drivers/usb/class/usbtmc.c 2469 */;
	struct usbtmc_file_data cocci_id/* drivers/usb/class/usbtmc.c 2449 */;
	struct list_head *cocci_id/* drivers/usb/class/usbtmc.c 2439 */;
	struct usb_interface *cocci_id/* drivers/usb/class/usbtmc.c 2436 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/class/usbtmc.c 2321 */;
	struct usb_host_interface *cocci_id/* drivers/usb/class/usbtmc.c 2320 */;
	const struct usb_device_id *cocci_id/* drivers/usb/class/usbtmc.c 2317 */;
	struct usb_class_driver cocci_id/* drivers/usb/class/usbtmc.c 2226 */;
	const struct file_operations cocci_id/* drivers/usb/class/usbtmc.c 2212 */;
	__poll_t cocci_id/* drivers/usb/class/usbtmc.c 2169 */;
	poll_table *cocci_id/* drivers/usb/class/usbtmc.c 2169 */;
	struct file *cocci_id/* drivers/usb/class/usbtmc.c 2162 */;
	fl_owner_t cocci_id/* drivers/usb/class/usbtmc.c 215 */;
	unsigned char __user *cocci_id/* drivers/usb/class/usbtmc.c 2105 */;
	long cocci_id/* drivers/usb/class/usbtmc.c 2018 */;
	struct usbtmc_termchar cocci_id/* drivers/usb/class/usbtmc.c 2002 */;
	struct usbtmc_ctrlrequest cocci_id/* drivers/usb/class/usbtmc.c 1889 */;
	struct attribute *cocci_id/* drivers/usb/class/usbtmc.c 1839 */[];
	char *cocci_id/* drivers/usb/class/usbtmc.c 1784 */;
	struct device *cocci_id/* drivers/usb/class/usbtmc.c 1783 */;
	struct usbtmc_device_data *cocci_id/* drivers/usb/class/usbtmc.c 1781 */;
	int cocci_id/* drivers/usb/class/usbtmc.c 1781 */;
	struct inode *cocci_id/* drivers/usb/class/usbtmc.c 163 */;
	struct kref *cocci_id/* drivers/usb/class/usbtmc.c 155 */;
	void cocci_id/* drivers/usb/class/usbtmc.c 153 */(struct usbtmc_file_data *file_data);
	struct usb_driver cocci_id/* drivers/usb/class/usbtmc.c 152 */;
	const char __user *cocci_id/* drivers/usb/class/usbtmc.c 1480 */;
	loff_t *cocci_id/* drivers/usb/class/usbtmc.c 1331 */;
	size_t cocci_id/* drivers/usb/class/usbtmc.c 1331 */;
	char __user *cocci_id/* drivers/usb/class/usbtmc.c 1330 */;
	u8 *cocci_id/* drivers/usb/class/usbtmc.c 1284 */;
	u32 cocci_id/* drivers/usb/class/usbtmc.c 1280 */;
	struct usbtmc_file_data *cocci_id/* drivers/usb/class/usbtmc.c 1279 */;
	struct usbtmc_file_data {
		struct usbtmc_device_data *data;
		struct list_head file_elem;
		u32 timeout;
		u8 srq_byte;
		atomic_t srq_asserted;
		atomic_t closing;
		u8 bmTransferAttributes;
		u8 eom_val;
		u8 term_char;
		bool term_char_enabled;
		bool auto_abort;
		spinlock_t err_lock;
		struct usb_anchor submitted;
		struct semaphore limit_write_sem;
		u32 out_transfer_size;
		int out_status;
		u32 in_transfer_size;
		int in_status;
		int in_urbs_used;
		struct usb_anchor in_anchor;
		wait_queue_head_t wait_bulk_in;
	} cocci_id/* drivers/usb/class/usbtmc.c 119 */;
	struct usbtmc_device_data cocci_id/* drivers/usb/class/usbtmc.c 114 */;
	const void __user *cocci_id/* drivers/usb/class/usbtmc.c 1075 */;
	struct usbtmc_message __user *cocci_id/* drivers/usb/class/usbtmc.c 1034 */;
	struct usbtmc_message cocci_id/* drivers/usb/class/usbtmc.c 1021 */;
}
