cocci_test_suite() {
	struct device *cocci_id/* drivers/usb/core/devio.c 990 */;
	dev_t cocci_id/* drivers/usb/core/devio.c 988 */;
	struct async {
		struct list_head asynclist;
		struct usb_dev_state *ps;
		struct pid *pid;
		const struct cred *cred;
		unsigned int signr;
		unsigned int ifnum;
		void __user *userbuffer;
		void __user *userurb;
		sigval_t userurb_sigval;
		struct urb *urb;
		struct usb_memory *usbm;
		unsigned int mem_usage;
		int status;
		u8 bulk_addr;
		u8 bulk_status;
	} cocci_id/* drivers/usb/core/devio.c 93 */;
	struct usb_interface **cocci_id/* drivers/usb/core/devio.c 920 */;
	struct usb_host_endpoint ***cocci_id/* drivers/usb/core/devio.c 919 */;
	unsigned int *cocci_id/* drivers/usb/core/devio.c 917 */;
	struct usbdevfs_streams __user *cocci_id/* drivers/usb/core/devio.c 916 */;
	unsigned char cocci_id/* drivers/usb/core/devio.c 907 */;
	struct usb_host_interface *cocci_id/* drivers/usb/core/devio.c 851 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/core/devio.c 827 */;
	struct usb_memory {
		struct list_head memlist;
		int vma_use_count;
		int urb_use_count;
		u32 size;
		void *mem;
		dma_addr_t dma_handle;
		unsigned long vm_start;
		struct usb_dev_state *ps;
	} cocci_id/* drivers/usb/core/devio.c 82 */;
	struct usb_interface *cocci_id/* drivers/usb/core/devio.c 751 */;
	struct usb_driver cocci_id/* drivers/usb/core/devio.c 739 */;
	pm_message_t cocci_id/* drivers/usb/core/devio.c 710 */;
	const struct usb_device_id *cocci_id/* drivers/usb/core/devio.c 680 */;
	struct list_head *cocci_id/* drivers/usb/core/devio.c 631 */;
	struct usb_dev_state {
		struct list_head list;
		struct usb_device *dev;
		struct file *file;
		spinlock_t lock;
		struct list_head async_pending;
		struct list_head async_completed;
		struct list_head memory_list;
		wait_queue_head_t wait;
		wait_queue_head_t wait_for_resume;
		unsigned int discsignr;
		struct pid *disc_pid;
		const struct cred *cred;
		sigval_t disccontext;
		unsigned long ifclaimed;
		u32 disabled_bulk_eps;
		unsigned long interface_allowed_mask;
		int not_yet_resumed;
		bool suspend_allowed;
		bool privileges_dropped;
	} cocci_id/* drivers/usb/core/devio.c 60 */;
	int cocci_id/* drivers/usb/core/devio.c 599 */;
	sigval_t cocci_id/* drivers/usb/core/devio.c 598 */;
	unsigned long cocci_id/* drivers/usb/core/devio.c 597 */;
	const struct cred *cocci_id/* drivers/usb/core/devio.c 596 */;
	struct pid *cocci_id/* drivers/usb/core/devio.c 595 */;
	struct usb_dev_state *cocci_id/* drivers/usb/core/devio.c 594 */;
	struct urb *cocci_id/* drivers/usb/core/devio.c 591 */;
	void cocci_id/* drivers/usb/core/devio.c 591 */;
	unsigned cocci_id/* drivers/usb/core/devio.c 553 */;
	u8 __user *cocci_id/* drivers/usb/core/devio.c 524 */;
	const char *cocci_id/* drivers/usb/core/devio.c 465 */;
	const char *cocci_id/* drivers/usb/core/devio.c 462 */[];
	enum snoop_when cocci_id/* drivers/usb/core/devio.c 459 */;
	void __user *cocci_id/* drivers/usb/core/devio.c 444 */;
	struct async cocci_id/* drivers/usb/core/devio.c 373 */;
	struct async *cocci_id/* drivers/usb/core/devio.c 369 */;
	unsigned int cocci_id/* drivers/usb/core/devio.c 369 */;
	struct usb_config_descriptor *cocci_id/* drivers/usb/core/devio.c 325 */;
	struct usb_device_descriptor cocci_id/* drivers/usb/core/devio.c 299 */;
	loff_t cocci_id/* drivers/usb/core/devio.c 286 */;
	loff_t *cocci_id/* drivers/usb/core/devio.c 280 */;
	char __user *cocci_id/* drivers/usb/core/devio.c 279 */;
	ssize_t cocci_id/* drivers/usb/core/devio.c 279 */;
	int __init cocci_id/* drivers/usb/core/devio.c 2769 */;
	struct cdev cocci_id/* drivers/usb/core/devio.c 2767 */;
	struct notifier_block cocci_id/* drivers/usb/core/devio.c 2763 */;
	struct notifier_block *cocci_id/* drivers/usb/core/devio.c 2750 */;
	const struct file_operations cocci_id/* drivers/usb/core/devio.c 2718 */;
	struct poll_table_struct *cocci_id/* drivers/usb/core/devio.c 2703 */;
	__poll_t cocci_id/* drivers/usb/core/devio.c 2702 */;
	struct inode *cocci_id/* drivers/usb/core/devio.c 2481 */;
	struct file *cocci_id/* drivers/usb/core/devio.c 2477 */;
	long cocci_id/* drivers/usb/core/devio.c 2477 */;
	u32 cocci_id/* drivers/usb/core/devio.c 2416 */;
	struct usb_driver *cocci_id/* drivers/usb/core/devio.c 2353 */;
	struct usbdevfs_disconnect_claim cocci_id/* drivers/usb/core/devio.c 2342 */;
	__u32 __user *cocci_id/* drivers/usb/core/devio.c 2334 */;
	unsigned __user *cocci_id/* drivers/usb/core/devio.c 2303 */;
	struct usbdevfs_ioctl cocci_id/* drivers/usb/core/devio.c 2287 */;
	struct usbdevfs_ioctl32 cocci_id/* drivers/usb/core/devio.c 2286 */;
	compat_uptr_t cocci_id/* drivers/usb/core/devio.c 2284 */;
	dma_addr_t cocci_id/* drivers/usb/core/devio.c 223 */;
	struct usbdevfs_ioctl *cocci_id/* drivers/usb/core/devio.c 2196 */;
	unsigned int __user *cocci_id/* drivers/usb/core/devio.c 2177 */;
	struct usbdevfs_disconnectsignal cocci_id/* drivers/usb/core/devio.c 2164 */;
	struct vm_area_struct *cocci_id/* drivers/usb/core/devio.c 216 */;
	u32 __user *cocci_id/* drivers/usb/core/devio.c 2121 */;
	const struct vm_operations_struct cocci_id/* drivers/usb/core/devio.c 211 */;
	struct usbdevfs_urb32 cocci_id/* drivers/usb/core/devio.c 2057 */;
	struct usbdevfs_urb32 __user *cocci_id/* drivers/usb/core/devio.c 2055 */;
	struct usbdevfs_urb *cocci_id/* drivers/usb/core/devio.c 2054 */;
	struct usbdevfs_disconnectsignal32 cocci_id/* drivers/usb/core/devio.c 2045 */;
	compat_caddr_t cocci_id/* drivers/usb/core/devio.c 2031 */;
	compat_uint_t cocci_id/* drivers/usb/core/devio.c 2030 */;
	struct usbdevfs_bulktransfer __user *cocci_id/* drivers/usb/core/devio.c 2029 */;
	struct usbdevfs_bulktransfer32 __user *cocci_id/* drivers/usb/core/devio.c 2027 */;
	__u32 cocci_id/* drivers/usb/core/devio.c 2017 */;
	struct usbdevfs_ctrltransfer __user *cocci_id/* drivers/usb/core/devio.c 2016 */;
	struct usbdevfs_ctrltransfer32 __user *cocci_id/* drivers/usb/core/devio.c 2014 */;
	void __user *__user*cocci_id/* drivers/usb/core/devio.c 1987 */;
	struct usbdevfs_urb __user *cocci_id/* drivers/usb/core/devio.c 1879 */;
	struct usb_memory cocci_id/* drivers/usb/core/devio.c 187 */;
	struct usbdevfs_urb cocci_id/* drivers/usb/core/devio.c 1869 */;
	struct usb_memory *cocci_id/* drivers/usb/core/devio.c 173 */;
	int *cocci_id/* drivers/usb/core/devio.c 173 */;
	struct scatterlist cocci_id/* drivers/usb/core/devio.c 1676 */;
	struct usb_iso_packet_descriptor cocci_id/* drivers/usb/core/devio.c 1642 */;
	struct usbdevfs_iso_packet_desc cocci_id/* drivers/usb/core/devio.c 1623 */;
	u64 cocci_id/* drivers/usb/core/devio.c 162 */;
	bool cocci_id/* drivers/usb/core/devio.c 1507 */;
	void *cocci_id/* drivers/usb/core/devio.c 1506 */;
	struct usb_ctrlrequest *cocci_id/* drivers/usb/core/devio.c 1501 */;
	struct usbdevfs_iso_packet_desc *cocci_id/* drivers/usb/core/devio.c 1498 */;
	struct usbdevfs_iso_packet_desc __user *cocci_id/* drivers/usb/core/devio.c 1495 */;
	const struct usbdevfs_urb *cocci_id/* drivers/usb/core/devio.c 1470 */;
	int __user *cocci_id/* drivers/usb/core/devio.c 1427 */;
	atomic64_t cocci_id/* drivers/usb/core/devio.c 141 */;
	struct usbdevfs_setinterface cocci_id/* drivers/usb/core/devio.c 1406 */;
	struct usb_host_config *cocci_id/* drivers/usb/core/devio.c 1379 */;
	struct usbdevfs_conninfo_ex cocci_id/* drivers/usb/core/devio.c 1347 */;
	size_t cocci_id/* drivers/usb/core/devio.c 1345 */;
	struct usbdevfs_connectinfo cocci_id/* drivers/usb/core/devio.c 1333 */;
	struct usbdevfs_getdriver cocci_id/* drivers/usb/core/devio.c 1314 */;
	struct usb_host_endpoint *cocci_id/* drivers/usb/core/devio.c 1261 */;
	struct usb_host_endpoint **cocci_id/* drivers/usb/core/devio.c 1260 */;
	enum snoop_when{SUBMIT, COMPLETE,} cocci_id/* drivers/usb/core/devio.c 126 */;
	char *cocci_id/* drivers/usb/core/devio.c 1258 */;
	struct usb_device *cocci_id/* drivers/usb/core/devio.c 1257 */;
	struct urb cocci_id/* drivers/usb/core/devio.c 1207 */;
	unsigned char *cocci_id/* drivers/usb/core/devio.c 1189 */;
	struct usbdevfs_bulktransfer cocci_id/* drivers/usb/core/devio.c 1186 */;
	struct usb_ctrlrequest cocci_id/* drivers/usb/core/devio.c 1115 */;
	struct usbdevfs_ctrltransfer cocci_id/* drivers/usb/core/devio.c 1099 */;
	struct usb_dev_state cocci_id/* drivers/usb/core/devio.c 1008 */;
}