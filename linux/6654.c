cocci_test_suite() {
	sg_scsi_id_t cocci_id/* drivers/scsi/sg.c 990 */;
	s64 cocci_id/* drivers/scsi/sg.c 969 */;
	void cocci_id/* drivers/scsi/sg.c 95 */(struct device *,
						struct class_interface *);
	int cocci_id/* drivers/scsi/sg.c 94 */(struct device *,
					       struct class_interface *);
	int __user *cocci_id/* drivers/scsi/sg.c 925 */;
	uintptr_t cocci_id/* drivers/scsi/sg.c 912 */;
	sg_req_info_t cocci_id/* drivers/scsi/sg.c 911 */;
	struct sg_req_info *cocci_id/* drivers/scsi/sg.c 907 */;
	struct compat_sg_req_info __user *cocci_id/* drivers/scsi/sg.c 906 */;
	struct compat_sg_req_info {
		char req_state;
		char orphan;
		char sg_io_owned;
		char problem;
		int pack_id;
		compat_uptr_t usr_ptr;
		unsigned int duration;
		int unused;
	} cocci_id/* drivers/scsi/sg.c 895 */;
	sg_req_info_t *cocci_id/* drivers/scsi/sg.c 862 */;
	int cocci_id/* drivers/scsi/sg.c 86 */;
	unsigned int cocci_id/* drivers/scsi/sg.c 854 */;
	struct request_queue *cocci_id/* drivers/scsi/sg.c 852 */;
	sg_io_hdr_t *cocci_id/* drivers/scsi/sg.c 790 */;
	unsigned char cocci_id/* drivers/scsi/sg.c 725 */[SG_MAX_CDB_SIZE];
	Sg_request **cocci_id/* drivers/scsi/sg.c 720 */;
	const char __user *cocci_id/* drivers/scsi/sg.c 718 */;
	int cocci_id/* drivers/scsi/sg.c 64 */(void);
	struct sg_header cocci_id/* drivers/scsi/sg.c 615 */;
	unsigned char cocci_id/* drivers/scsi/sg.c 611 */;
	char __user *cocci_id/* drivers/scsi/sg.c 572 */;
	size_t cocci_id/* drivers/scsi/sg.c 572 */;
	ssize_t cocci_id/* drivers/scsi/sg.c 571 */;
	struct sg_header *cocci_id/* drivers/scsi/sg.c 416 */;
	struct inode *cocci_id/* drivers/scsi/sg.c 283 */;
	const sg_io_hdr_t *cocci_id/* drivers/scsi/sg.c 2542 */;
	void cocci_id/* drivers/scsi/sg.c 2486 */;
	struct sg_proc_deviter *cocci_id/* drivers/scsi/sg.c 2480 */;
	loff_t *cocci_id/* drivers/scsi/sg.c 2478 */;
	struct seq_file *cocci_id/* drivers/scsi/sg.c 2478 */;
	void *cocci_id/* drivers/scsi/sg.c 2478 */;
	Sg_device *cocci_id/* drivers/scsi/sg.c 246 */;
	struct sg_proc_deviter {
		loff_t index;
		size_t max;
	} cocci_id/* drivers/scsi/sg.c 2458 */;
	struct proc_dir_entry *cocci_id/* drivers/scsi/sg.c 2376 */;
	struct sg_fd *cocci_id/* drivers/scsi/sg.c 237 */;
	const struct seq_operations cocci_id/* drivers/scsi/sg.c 2366 */;
	int cocci_id/* drivers/scsi/sg.c 2365 */(struct seq_file *s, void *v);
	struct file *cocci_id/* drivers/scsi/sg.c 235 */;
	unsigned char *cocci_id/* drivers/scsi/sg.c 235 */;
	void cocci_id/* drivers/scsi/sg.c 2349 */(struct seq_file *s, void *v);
	void *cocci_id/* drivers/scsi/sg.c 2348 */(struct seq_file *s,
						   void *v, loff_t *pos);
	void *cocci_id/* drivers/scsi/sg.c 2347 */(struct seq_file *s,
						   loff_t *pos);
	const struct file_operations cocci_id/* drivers/scsi/sg.c 2323 */;
	ssize_t cocci_id/* drivers/scsi/sg.c 2321 */(struct file *filp,
						     const char __user *buffer,
						     size_t count,
						     loff_t *off);
	int cocci_id/* drivers/scsi/sg.c 2320 */(struct inode *inode,
						 struct file *file);
	int *cocci_id/* drivers/scsi/sg.c 2268 */;
	struct sg_fd cocci_id/* drivers/scsi/sg.c 2252 */;
	struct work_struct *cocci_id/* drivers/scsi/sg.c 2215 */;
	const char *cocci_id/* drivers/scsi/sg.c 220 */;
	Sg_request cocci_id/* drivers/scsi/sg.c 2136 */;
	Sg_fd *cocci_id/* drivers/scsi/sg.c 2118 */;
	Sg_request *cocci_id/* drivers/scsi/sg.c 2117 */;
	sg_io_hdr_t cocci_id/* drivers/scsi/sg.c 200 */;
	void cocci_id/* drivers/scsi/sg.c 197 */(struct kref *kref);
	Sg_device *cocci_id/* drivers/scsi/sg.c 196 */(int dev);
	int cocci_id/* drivers/scsi/sg.c 195 */(Sg_fd *sfp, Sg_request *srp);
	Sg_request *cocci_id/* drivers/scsi/sg.c 194 */(Sg_fd *sfp);
	Sg_request *cocci_id/* drivers/scsi/sg.c 193 */(Sg_fd *sfp,
							int pack_id);
	void cocci_id/* drivers/scsi/sg.c 192 */(struct kref *);
	Sg_fd *cocci_id/* drivers/scsi/sg.c 191 */(Sg_device *sdp);
	void cocci_id/* drivers/scsi/sg.c 190 */(Sg_fd *sfp, Sg_request *srp);
	struct sg_device *cocci_id/* drivers/scsi/sg.c 1898 */;
	gfp_t cocci_id/* drivers/scsi/sg.c 1897 */;
	Sg_scatter_hold *cocci_id/* drivers/scsi/sg.c 1892 */;
	void cocci_id/* drivers/scsi/sg.c 189 */(Sg_fd *sfp, Sg_request *srp,
						 int size);
	struct page *cocci_id/* drivers/scsi/sg.c 1881 */;
	void cocci_id/* drivers/scsi/sg.c 188 */(Sg_fd *sfp, int req_size);
	const Sg_fd *cocci_id/* drivers/scsi/sg.c 1879 */;
	void cocci_id/* drivers/scsi/sg.c 187 */(Sg_fd *sfp,
						 Sg_scatter_hold *schp);
	int cocci_id/* drivers/scsi/sg.c 186 */(Sg_request *srp,
						char __user *outp,
						int num_read_xfer);
	int cocci_id/* drivers/scsi/sg.c 184 */(Sg_fd *sfp, Sg_request *srp,
						unsigned char *cmnd,
						int timeout, int blocking);
	struct iov_iter cocci_id/* drivers/scsi/sg.c 1815 */;
	struct iovec *cocci_id/* drivers/scsi/sg.c 1814 */;
	ssize_t cocci_id/* drivers/scsi/sg.c 181 */(Sg_fd *sfp,
						    struct file *file,
						    const char __user *buf,
						    size_t count,
						    int blocking,
						    int read_only,
						    int sg_io_owned,
						    Sg_request **o_srp);
	ssize_t cocci_id/* drivers/scsi/sg.c 179 */(Sg_fd *sfp,
						    char __user *buf,
						    size_t count,
						    Sg_request *srp);
	int cocci_id/* drivers/scsi/sg.c 178 */(Sg_scatter_hold *schp,
						Sg_fd *sfp, int buff_size);
	int cocci_id/* drivers/scsi/sg.c 177 */(Sg_request *srp);
	int cocci_id/* drivers/scsi/sg.c 176 */(Sg_request *srp,
						unsigned char *cmd);
	void cocci_id/* drivers/scsi/sg.c 175 */(struct request *rq,
						 blk_status_t status);
	struct rq_map_data *cocci_id/* drivers/scsi/sg.c 1728 */;
	void __exit cocci_id/* drivers/scsi/sg.c 1700 */;
	int __init cocci_id/* drivers/scsi/sg.c 1663 */;
	struct sg_device cocci_id/* drivers/scsi/sg.c 1593 */;
	struct kref *cocci_id/* drivers/scsi/sg.c 1591 */;
	struct sg_device {
		struct scsi_device *device;
		wait_queue_head_t open_wait;
		struct mutex open_rel_lock;
		int sg_tablesize;
		u32 index;
		struct list_head sfds;
		rwlock_t sfd_lock;
		atomic_t detaching;
		bool exclude;
		int open_cnt;
		char sgdebug;
		struct gendisk *disk;
		struct cdev *cdev;
		struct kref d_ref;
	} cocci_id/* drivers/scsi/sg.c 157 */;
	unsigned long cocci_id/* drivers/scsi/sg.c 1520 */;
	struct cdev *cocci_id/* drivers/scsi/sg.c 1518 */;
	struct gendisk *cocci_id/* drivers/scsi/sg.c 1516 */;
	struct scsi_device *cocci_id/* drivers/scsi/sg.c 1515 */;
	struct device *cocci_id/* drivers/scsi/sg.c 1513 */;
	struct class_interface *cocci_id/* drivers/scsi/sg.c 1513 */;
	Sg_device cocci_id/* drivers/scsi/sg.c 1459 */;
	u32 cocci_id/* drivers/scsi/sg.c 1457 */;
	struct class *cocci_id/* drivers/scsi/sg.c 1446 */;
	struct scsi_sense_hdr cocci_id/* drivers/scsi/sg.c 1367 */;
	struct sg_fd {
		struct list_head sfd_siblings;
		struct sg_device *parentdp;
		wait_queue_head_t read_wait;
		rwlock_t rq_list_lock;
		struct mutex f_mutex;
		int timeout;
		int timeout_user;
		Sg_scatter_hold reserve;
		struct list_head rq_list;
		struct fasync_struct *async_qp;
		Sg_request req_arr[SG_MAX_QUEUE];
		char force_packid;
		char cmd_q;
		unsigned char next_cmd_len;
		char keep_orphan;
		char mmap_called;
		char res_in_use;
		struct kref f_ref;
		struct execute_work ew;
	} cocci_id/* drivers/scsi/sg.c 135 */;
	char *cocci_id/* drivers/scsi/sg.c 1341 */;
	struct scsi_request *cocci_id/* drivers/scsi/sg.c 1336 */;
	struct sg_request *cocci_id/* drivers/scsi/sg.c 1335 */;
	blk_status_t cocci_id/* drivers/scsi/sg.c 1333 */;
	struct request *cocci_id/* drivers/scsi/sg.c 1333 */;
	struct sg_request cocci_id/* drivers/scsi/sg.c 1320 */;
	struct vm_area_struct *cocci_id/* drivers/scsi/sg.c 1277 */;
	const struct vm_operations_struct cocci_id/* drivers/scsi/sg.c 1272 */;
	struct vm_fault *cocci_id/* drivers/scsi/sg.c 1236 */;
	vm_fault_t cocci_id/* drivers/scsi/sg.c 1235 */;
	struct sg_request {
		struct list_head entry;
		struct sg_fd *parentfp;
		Sg_scatter_hold data;
		sg_io_hdr_t header;
		unsigned char sense_b[SCSI_SENSE_BUFFERSIZE];
		char res_used;
		char orphan;
		char sg_io_owned;
		char done;
		struct request *rq;
		struct bio *bio;
		struct execute_work ew;
	} cocci_id/* drivers/scsi/sg.c 119 */;
	poll_table *cocci_id/* drivers/scsi/sg.c 1184 */;
	__poll_t cocci_id/* drivers/scsi/sg.c 1183 */;
	void __user *cocci_id/* drivers/scsi/sg.c 1174 */;
	long cocci_id/* drivers/scsi/sg.c 1161 */;
	char cocci_id/* drivers/scsi/sg.c 1123 */;
	struct sg_scatter_hold {
		unsigned short k_use_sg;
		unsigned sglist_len;
		unsigned bufflen;
		struct page **pages;
		int page_order;
		char dio_in_use;
		unsigned char cmd_opcode;
	} cocci_id/* drivers/scsi/sg.c 106 */;
	struct class_interface cocci_id/* drivers/scsi/sg.c 101 */;
}
