cocci_test_suite() {
	u32 __user *cocci_id/* drivers/usb/mon/mon_bin.c 899 */;
	struct mon_bin_hdr {
		u64 id;
		unsigned char type;
		unsigned char xfer_type;
		unsigned char epnum;
		unsigned char devnum;
		unsigned short busnum;
		char flag_setup;
		char flag_data;
		s64 ts_sec;
		s32 ts_usec;
		int status;
		unsigned int len_urb;
		unsigned int len_cap;
		union {
			unsigned char setup[SETUP_LEN];
			struct iso_rec {
				int error_count;
				int numdesc;
			} iso;
		} s;
		int interval;
		int start_frame;
		unsigned int xfer_flags;
		unsigned int ndesc;
	} cocci_id/* drivers/usb/mon/mon_bin.c 89 */;
	loff_t *cocci_id/* drivers/usb/mon/mon_bin.c 801 */;
	ssize_t cocci_id/* drivers/usb/mon/mon_bin.c 800 */;
	size_t cocci_id/* drivers/usb/mon/mon_bin.c 743 */;
	struct mon_bin_hdr __user *cocci_id/* drivers/usb/mon/mon_bin.c 738 */;
	struct mon_reader_bin cocci_id/* drivers/usb/mon/mon_bin.c 692 */;
	struct inode *cocci_id/* drivers/usb/mon/mon_bin.c 673 */;
	struct timespec64 cocci_id/* drivers/usb/mon/mon_bin.c 635 */;
	void cocci_id/* drivers/usb/mon/mon_bin.c 626 */;
	struct mon_bin_isodesc cocci_id/* drivers/usb/mon/mon_bin.c 524 */;
	unsigned char cocci_id/* drivers/usb/mon/mon_bin.c 496 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/usb/mon/mon_bin.c 488 */;
	char cocci_id/* drivers/usb/mon/mon_bin.c 486 */;
	struct mon_bin_isodesc *cocci_id/* drivers/usb/mon/mon_bin.c 468 */;
	struct usb_iso_packet_descriptor *cocci_id/* drivers/usb/mon/mon_bin.c 450 */;
	struct urb *cocci_id/* drivers/usb/mon/mon_bin.c 448 */;
	struct scatterlist *cocci_id/* drivers/usb/mon/mon_bin.c 408 */;
	char *cocci_id/* drivers/usb/mon/mon_bin.c 405 */;
	const struct urb *cocci_id/* drivers/usb/mon/mon_bin.c 394 */;
	struct mon_bin_stats cocci_id/* drivers/usb/mon/mon_bin.c 39 */;
	unsigned char *cocci_id/* drivers/usb/mon/mon_bin.c 265 */;
	char __user *cocci_id/* drivers/usb/mon/mon_bin.c 262 */;
	int cocci_id/* drivers/usb/mon/mon_bin.c 261 */;
	const unsigned char *cocci_id/* drivers/usb/mon/mon_bin.c 230 */;
	void cocci_id/* drivers/usb/mon/mon_bin.c 224 */(struct mon_pgmap *map,
							 int npages);
	int cocci_id/* drivers/usb/mon/mon_bin.c 223 */(struct mon_pgmap *map,
							int npages);
	int cocci_id/* drivers/usb/mon/mon_bin.c 222 */(struct file *file,
							struct mon_reader_bin *rp);
	void cocci_id/* drivers/usb/mon/mon_bin.c 220 */(const struct mon_reader_bin *rp,
							 unsigned int offset,
							 unsigned int size);
	struct cdev cocci_id/* drivers/usb/mon/mon_bin.c 218 */;
	dev_t cocci_id/* drivers/usb/mon/mon_bin.c 217 */;
	struct class *cocci_id/* drivers/usb/mon/mon_bin.c 216 */;
	unsigned char cocci_id/* drivers/usb/mon/mon_bin.c 212 */[4];
	unsigned int cocci_id/* drivers/usb/mon/mon_bin.c 204 */;
	const struct mon_reader_bin *cocci_id/* drivers/usb/mon/mon_bin.c 203 */;
	struct mon_bin_hdr *cocci_id/* drivers/usb/mon/mon_bin.c 203 */;
	struct mon_reader_bin {
		spinlock_t b_lock;
		unsigned int b_size;
		unsigned int b_cnt;
		unsigned int b_in,b_out;
		unsigned int b_read;
		struct mon_pgmap *b_vec;
		wait_queue_head_t b_wait;
		struct mutex fetch_lock;
		int mmap_active;
		struct mon_reader r;
		unsigned int cnt_lost;
	} cocci_id/* drivers/usb/mon/mon_bin.c 183 */;
	struct mon_pgmap {
		struct page *pg;
		unsigned char *ptr;
	} cocci_id/* drivers/usb/mon/mon_bin.c 175 */;
	struct mon_bin_mfetch32 {
		u32 offvec32;
		u32 nfetch32;
		u32 nflush32;
	} cocci_id/* drivers/usb/mon/mon_bin.c 153 */;
	struct mon_bin_get32 {
		u32 hdr32;
		u32 data32;
		u32 alloc32;
	} cocci_id/* drivers/usb/mon/mon_bin.c 147 */;
	struct mon_bin_mfetch {
		u32 __user *offvec;
		u32 nfetch;
		u32 nflush;
	} cocci_id/* drivers/usb/mon/mon_bin.c 140 */;
	int __init cocci_id/* drivers/usb/mon/mon_bin.c 1374 */;
	unsigned cocci_id/* drivers/usb/mon/mon_bin.c 1354 */;
	struct device *cocci_id/* drivers/usb/mon/mon_bin.c 1353 */;
	const struct usb_bus *cocci_id/* drivers/usb/mon/mon_bin.c 1351 */;
	struct mon_bus *cocci_id/* drivers/usb/mon/mon_bin.c 1351 */;
	struct mon_bin_get {
		struct mon_bin_hdr __user *hdr;
		void __user *data;
		size_t alloc;
	} cocci_id/* drivers/usb/mon/mon_bin.c 134 */;
	void *cocci_id/* drivers/usb/mon/mon_bin.c 1338 */;
	unsigned long cocci_id/* drivers/usb/mon/mon_bin.c 1328 */;
	struct mon_pgmap *cocci_id/* drivers/usb/mon/mon_bin.c 1325 */;
	struct mon_bin_stats {
		u32 queued;
		u32 dropped;
	} cocci_id/* drivers/usb/mon/mon_bin.c 129 */;
	const struct file_operations cocci_id/* drivers/usb/mon/mon_bin.c 1277 */;
	struct vm_area_struct *cocci_id/* drivers/usb/mon/mon_bin.c 1267 */;
	const struct vm_operations_struct cocci_id/* drivers/usb/mon/mon_bin.c 1261 */;
	struct page *cocci_id/* drivers/usb/mon/mon_bin.c 1249 */;
	vm_fault_t cocci_id/* drivers/usb/mon/mon_bin.c 1245 */;
	struct vm_fault *cocci_id/* drivers/usb/mon/mon_bin.c 1245 */;
	struct mon_bin_isodesc {
		int iso_status;
		unsigned int iso_off;
		unsigned int iso_len;
		u32 _pad;
	} cocci_id/* drivers/usb/mon/mon_bin.c 121 */;
	struct poll_table_struct *cocci_id/* drivers/usb/mon/mon_bin.c 1202 */;
	__poll_t cocci_id/* drivers/usb/mon/mon_bin.c 1201 */;
	struct mon_bin_mfetch32 __user *cocci_id/* drivers/usb/mon/mon_bin.c 1162 */;
	struct mon_bin_mfetch32 cocci_id/* drivers/usb/mon/mon_bin.c 1161 */;
	void __user *cocci_id/* drivers/usb/mon/mon_bin.c 1147 */;
	struct mon_bin_get32 cocci_id/* drivers/usb/mon/mon_bin.c 1145 */;
	struct mon_reader_bin *cocci_id/* drivers/usb/mon/mon_bin.c 1137 */;
	struct file *cocci_id/* drivers/usb/mon/mon_bin.c 1134 */;
	long cocci_id/* drivers/usb/mon/mon_bin.c 1134 */;
	struct mon_bin_stats __user *cocci_id/* drivers/usb/mon/mon_bin.c 1107 */;
	struct mon_bin_mfetch __user *cocci_id/* drivers/usb/mon/mon_bin.c 1083 */;
	struct mon_bin_mfetch cocci_id/* drivers/usb/mon/mon_bin.c 1082 */;
	struct mon_bin_get cocci_id/* drivers/usb/mon/mon_bin.c 1066 */;
	struct mon_pgmap cocci_id/* drivers/usb/mon/mon_bin.c 1027 */;
}
