cocci_test_suite() {
	void cocci_id/* drivers/usb/mon/mon_text.c 98 */(void *);
	struct dentry *cocci_id/* drivers/usb/mon/mon_text.c 96 */;
	struct mon_reader_text {
		struct kmem_cache *e_slab;
		int nevents;
		struct list_head e_list;
		struct mon_reader r;
		wait_queue_head_t wait;
		int printf_size;
		size_t printf_offset;
		size_t printf_togo;
		char *printf_buf;
		struct mutex printf_lock;
		char slab_name[SLAB_NAME_SZ];
	} cocci_id/* drivers/usb/mon/mon_text.c 80 */;
	int __init cocci_id/* drivers/usb/mon/mon_text.c 764 */;
	struct mon_event_text cocci_id/* drivers/usb/mon/mon_text.c 761 */;
	char cocci_id/* drivers/usb/mon/mon_text.c 704 */[NAMESZ];
	enum{NAMESZ=10,} cocci_id/* drivers/usb/mon/mon_text.c 703 */;
	const struct usb_bus *cocci_id/* drivers/usb/mon/mon_text.c 701 */;
	struct mon_bus *cocci_id/* drivers/usb/mon/mon_text.c 701 */;
	int cocci_id/* drivers/usb/mon/mon_text.c 701 */;
	const struct file_operations cocci_id/* drivers/usb/mon/mon_text.c 685 */;
	const struct mon_event_text *cocci_id/* drivers/usb/mon/mon_text.c 611 */;
	struct mon_text_ptr *cocci_id/* drivers/usb/mon/mon_text.c 611 */;
	const struct mon_iso_desc *cocci_id/* drivers/usb/mon/mon_text.c 593 */;
	struct mon_event_text {
		struct list_head e_link;
		int type;
		unsigned long id;
		unsigned int tstamp;
		int busnum;
		char devnum;
		char epnum;
		char is_in;
		char xfertype;
		int length;
		int status;
		int interval;
		int start_frame;
		int error_count;
		char setup_flag;
		char data_flag;
		int numdesc;
		struct mon_iso_desc isodesc[ISODESC_MAX];
		unsigned char setup[SETUP_MAX];
		unsigned char data[DATA_MAX];
	} cocci_id/* drivers/usb/mon/mon_text.c 56 */;
	struct mon_iso_desc {
		int status;
		unsigned int offset;
		unsigned int length;
	} cocci_id/* drivers/usb/mon/mon_text.c 50 */;
	struct mon_text_ptr cocci_id/* drivers/usb/mon/mon_text.c 399 */;
	loff_t *cocci_id/* drivers/usb/mon/mon_text.c 395 */;
	size_t cocci_id/* drivers/usb/mon/mon_text.c 395 */;
	char __user *cocci_id/* drivers/usb/mon/mon_text.c 394 */;
	char __user *constcocci_id/* drivers/usb/mon/mon_text.c 382 */;
	const size_t cocci_id/* drivers/usb/mon/mon_text.c 382 */;
	ssize_t cocci_id/* drivers/usb/mon/mon_text.c 381 */;
	long cocci_id/* drivers/usb/mon/mon_text.c 357 */;
	struct mon_reader_text cocci_id/* drivers/usb/mon/mon_text.c 333 */;
	struct inode *cocci_id/* drivers/usb/mon/mon_text.c 324 */;
	struct file *cocci_id/* drivers/usb/mon/mon_text.c 324 */;
	struct list_head *cocci_id/* drivers/usb/mon/mon_text.c 307 */;
	unsigned long cocci_id/* drivers/usb/mon/mon_text.c 283 */;
	struct mon_event_text *cocci_id/* drivers/usb/mon/mon_text.c 274 */;
	struct mon_reader_text *cocci_id/* drivers/usb/mon/mon_text.c 267 */;
	struct urb *cocci_id/* drivers/usb/mon/mon_text.c 265 */;
	void *cocci_id/* drivers/usb/mon/mon_text.c 265 */;
	struct mon_iso_desc *cocci_id/* drivers/usb/mon/mon_text.c 199 */;
	struct usb_iso_packet_descriptor *cocci_id/* drivers/usb/mon/mon_text.c 198 */;
	char cocci_id/* drivers/usb/mon/mon_text.c 194 */;
	struct timespec64 cocci_id/* drivers/usb/mon/mon_text.c 184 */;
	unsigned int cocci_id/* drivers/usb/mon/mon_text.c 182 */;
	void cocci_id/* drivers/usb/mon/mon_text.c 182 */;
	struct scatterlist *cocci_id/* drivers/usb/mon/mon_text.c 168 */;
	void cocci_id/* drivers/usb/mon/mon_text.c 119 */(struct mon_reader_text *rp,
							  struct mon_text_ptr *p,
							  const struct mon_event_text *ep);
	struct mon_event_text *cocci_id/* drivers/usb/mon/mon_text.c 105 */(struct mon_reader_text *rp,
									    struct file *file);
	struct mon_text_ptr {
		int cnt,limit;
		char *pbuf;
	} cocci_id/* drivers/usb/mon/mon_text.c 100 */;
}
