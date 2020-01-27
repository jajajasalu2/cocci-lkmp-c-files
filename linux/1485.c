cocci_test_suite() {
	enum ep0_state cocci_id/* drivers/usb/gadget/legacy/inode.c 911 */;
	char __user *cocci_id/* drivers/usb/gadget/legacy/inode.c 907 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/legacy/inode.c 851 */;
	void cocci_id/* drivers/usb/gadget/legacy/inode.c 851 */;
	enum ep0_state{STATE_DEV_DISABLED=0, STATE_DEV_OPENED, STATE_DEV_UNCONNECTED, STATE_DEV_CONNECTED, STATE_DEV_SETUP, STATE_DEV_UNBOUND,} cocci_id/* drivers/usb/gadget/legacy/inode.c 84 */;
	int cocci_id/* drivers/usb/gadget/legacy/inode.c 76 */(struct inode *,
							       struct file *);
	const char cocci_id/* drivers/usb/gadget/legacy/inode.c 69 */[];
	bool cocci_id/* drivers/usb/gadget/legacy/inode.c 637 */;
	ssize_t cocci_id/* drivers/usb/gadget/legacy/inode.c 629 */(struct ep_data *,
								    const char *,
								    size_t);
	struct iov_iter *cocci_id/* drivers/usb/gadget/legacy/inode.c 573 */;
	struct kiocb_priv *cocci_id/* drivers/usb/gadget/legacy/inode.c 521 */;
	struct kiocb *cocci_id/* drivers/usb/gadget/legacy/inode.c 520 */;
	struct mm_struct *cocci_id/* drivers/usb/gadget/legacy/inode.c 461 */;
	struct kiocb_priv cocci_id/* drivers/usb/gadget/legacy/inode.c 460 */;
	struct work_struct *cocci_id/* drivers/usb/gadget/legacy/inode.c 458 */;
	struct kiocb_priv {
		struct usb_request *req;
		struct ep_data *epdata;
		struct kiocb *iocb;
		struct mm_struct *mm;
		struct work_struct work;
		void *buf;
		struct iov_iter to;
		const void *to_free;
		unsigned actual;
	} cocci_id/* drivers/usb/gadget/legacy/inode.c 427 */;
	struct completion *cocci_id/* drivers/usb/gadget/legacy/inode.c 281 */;
	const char *cocci_id/* drivers/usb/gadget/legacy/inode.c 229 */;
	void __exit cocci_id/* drivers/usb/gadget/legacy/inode.c 2099 */;
	int __init cocci_id/* drivers/usb/gadget/legacy/inode.c 2087 */;
	struct file_system_type cocci_id/* drivers/usb/gadget/legacy/inode.c 2077 */;
	const struct fs_context_operations cocci_id/* drivers/usb/gadget/legacy/inode.c 2053 */;
	struct fs_context *cocci_id/* drivers/usb/gadget/legacy/inode.c 1994 */;
	const struct super_operations cocci_id/* drivers/usb/gadget/legacy/inode.c 1988 */;
	const struct file_operations *cocci_id/* drivers/usb/gadget/legacy/inode.c 1969 */;
	struct super_block *cocci_id/* drivers/usb/gadget/legacy/inode.c 1968 */;
	const struct file_operations cocci_id/* drivers/usb/gadget/legacy/inode.c 1910 */;
	struct ep_data {
		struct mutex lock;
		enum ep_state state;
		refcount_t count;
		struct dev_data *dev;
		struct usb_ep *ep;
		struct usb_request *req;
		ssize_t status;
		char name[16];
		struct usb_endpoint_descriptor desc,hs_desc;
		struct list_head epfiles;
		wait_queue_head_t wait;
		struct dentry *dentry;
	} cocci_id/* drivers/usb/gadget/legacy/inode.c 189 */;
	void *cocci_id/* drivers/usb/gadget/legacy/inode.c 1825 */;
	enum ep_state{STATE_EP_DISABLED=0, STATE_EP_READY, STATE_EP_ENABLED, STATE_EP_UNBOUND,} cocci_id/* drivers/usb/gadget/legacy/inode.c 182 */;
	char *cocci_id/* drivers/usb/gadget/legacy/inode.c 1790 */;
	u32 cocci_id/* drivers/usb/gadget/legacy/inode.c 1789 */;
	const char __user *cocci_id/* drivers/usb/gadget/legacy/inode.c 1784 */;
	loff_t *cocci_id/* drivers/usb/gadget/legacy/inode.c 1784 */;
	struct file *cocci_id/* drivers/usb/gadget/legacy/inode.c 1784 */;
	size_t cocci_id/* drivers/usb/gadget/legacy/inode.c 1784 */;
	ssize_t cocci_id/* drivers/usb/gadget/legacy/inode.c 1783 */;
	unsigned int cocci_id/* drivers/usb/gadget/legacy/inode.c 1771 */;
	struct usb_config_descriptor *cocci_id/* drivers/usb/gadget/legacy/inode.c 1770 */;
	struct usb_gadget_driver *cocci_id/* drivers/usb/gadget/legacy/inode.c 1652 */;
	struct ep_data *cocci_id/* drivers/usb/gadget/legacy/inode.c 1580 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/legacy/inode.c 1579 */;
	struct dev_data *cocci_id/* drivers/usb/gadget/legacy/inode.c 1577 */;
	int cocci_id/* drivers/usb/gadget/legacy/inode.c 1577 */;
	struct dentry *cocci_id/* drivers/usb/gadget/legacy/inode.c 1573 */(struct super_block *sb,
									    const char *name,
									    void *data,
									    const struct file_operations *fops);
	struct ep_data cocci_id/* drivers/usb/gadget/legacy/inode.c 1541 */;
	struct dentry *cocci_id/* drivers/usb/gadget/legacy/inode.c 1538 */;
	struct inode *cocci_id/* drivers/usb/gadget/legacy/inode.c 1537 */;
	struct usb_qualifier_descriptor cocci_id/* drivers/usb/gadget/legacy/inode.c 1381 */;
	u16 cocci_id/* drivers/usb/gadget/legacy/inode.c 1333 */;
	struct usb_gadgetfs_event *cocci_id/* drivers/usb/gadget/legacy/inode.c 1332 */;
	const struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/legacy/inode.c 1327 */;
	u8 *cocci_id/* drivers/usb/gadget/legacy/inode.c 1322 */;
	u8 cocci_id/* drivers/usb/gadget/legacy/inode.c 1301 */;
	unsigned cocci_id/* drivers/usb/gadget/legacy/inode.c 1301 */;
	struct usb_device_descriptor *cocci_id/* drivers/usb/gadget/legacy/inode.c 1280 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/legacy/inode.c 1248 */;
	unsigned long cocci_id/* drivers/usb/gadget/legacy/inode.c 1245 */;
	long cocci_id/* drivers/usb/gadget/legacy/inode.c 1245 */;
	poll_table *cocci_id/* drivers/usb/gadget/legacy/inode.c 1214 */;
	__poll_t cocci_id/* drivers/usb/gadget/legacy/inode.c 1213 */;
	struct usb_gadget_driver cocci_id/* drivers/usb/gadget/legacy/inode.c 1182 */;
	struct dev_data {
		spinlock_t lock;
		refcount_t count;
		int udc_usage;
		enum ep0_state state;
		struct usb_gadgetfs_event event[N_EVENT];
		unsigned ev_next;
		struct fasync_struct *fasync;
		u8 current_config;
		unsigned usermode_setup:1,setup_in:1,setup_can_stall:1,setup_out_ready:1,setup_out_error:1,setup_abort:1,gadget_registered:1;
		unsigned setup_wLength;
		struct usb_config_descriptor *config,*hs_config;
		struct usb_device_descriptor *dev;
		struct usb_request *req;
		struct usb_gadget *gadget;
		struct list_head epfiles;
		void *buf;
		wait_queue_head_t wait;
		struct super_block *sb;
		struct dentry *dentry;
		u8 rbuf[256];
	} cocci_id/* drivers/usb/gadget/legacy/inode.c 113 */;
	enum usb_gadgetfs_event_type cocci_id/* drivers/usb/gadget/legacy/inode.c 1077 */;
	struct usb_gadgetfs_event cocci_id/* drivers/usb/gadget/legacy/inode.c 1006 */;
}
