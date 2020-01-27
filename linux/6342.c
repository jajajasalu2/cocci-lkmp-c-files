cocci_test_suite() {
	struct dax_ccb cocci_id/* drivers/sbus/char/oradax.c 860 */;
	loff_t *cocci_id/* drivers/sbus/char/oradax.c 853 */;
	size_t cocci_id/* drivers/sbus/char/oradax.c 853 */;
	const char __user *cocci_id/* drivers/sbus/char/oradax.c 852 */;
	struct dax_ctx *cocci_id/* drivers/sbus/char/oradax.c 852 */;
	struct ccb_info_result *cocci_id/* drivers/sbus/char/oradax.c 737 */;
	enum{OUT, PRI, SEC, TBL, NUM_STREAM_TYPES,} cocci_id/* drivers/sbus/char/oradax.c 73 */;
	u16 *cocci_id/* drivers/sbus/char/oradax.c 710 */;
	int *cocci_id/* drivers/sbus/char/oradax.c 684 */;
	struct dax_command cocci_id/* drivers/sbus/char/oradax.c 568 */;
	union ccb_result cocci_id/* drivers/sbus/char/oradax.c 557 */;
	char __user *cocci_id/* drivers/sbus/char/oradax.c 547 */;
	ssize_t cocci_id/* drivers/sbus/char/oradax.c 547 */;
	struct inode *cocci_id/* drivers/sbus/char/oradax.c 524 */;
	struct file *cocci_id/* drivers/sbus/char/oradax.c 524 */;
	struct dax_cca cocci_id/* drivers/sbus/char/oradax.c 519 */;
	void *cocci_id/* drivers/sbus/char/oradax.c 517 */;
	u16 cocci_id/* drivers/sbus/char/oradax.c 506 */;
	struct dax_ccb *cocci_id/* drivers/sbus/char/oradax.c 444 */;
	u64 *cocci_id/* drivers/sbus/char/oradax.c 439 */;
	struct page **cocci_id/* drivers/sbus/char/oradax.c 422 */;
	struct page *cocci_id/* drivers/sbus/char/oradax.c 409 */;
	struct vm_area_struct *cocci_id/* drivers/sbus/char/oradax.c 372 */;
	void __exit cocci_id/* drivers/sbus/char/oradax.c 361 */;
	u64 cocci_id/* drivers/sbus/char/oradax.c 244 */;
	int cocci_id/* drivers/sbus/char/oradax.c 243 */;
	bool cocci_id/* drivers/sbus/char/oradax.c 242 */;
	char *cocci_id/* drivers/sbus/char/oradax.c 241 */;
	struct mdesc_handle *cocci_id/* drivers/sbus/char/oradax.c 240 */;
	unsigned long cocci_id/* drivers/sbus/char/oradax.c 239 */;
	int __init cocci_id/* drivers/sbus/char/oradax.c 237 */;
	void cocci_id/* drivers/sbus/char/oradax.c 237 */;
	dev_t cocci_id/* drivers/sbus/char/oradax.c 230 */;
	struct class *cocci_id/* drivers/sbus/char/oradax.c 229 */;
	struct cdev cocci_id/* drivers/sbus/char/oradax.c 228 */;
	int cocci_id/* drivers/sbus/char/oradax.c 226 */(u64 ca,
							 u16 *kill_res);
	int cocci_id/* drivers/sbus/char/oradax.c 225 */(u64 ca,
							 struct ccb_info_result *info);
	int cocci_id/* drivers/sbus/char/oradax.c 223 */(struct dax_ctx *ctx,
							 const char __user *buf,
							 size_t count,
							 loff_t *ppos);
	const struct file_operations cocci_id/* drivers/sbus/char/oradax.c 214 */;
	int cocci_id/* drivers/sbus/char/oradax.c 212 */(struct inode *i,
							 struct file *f);
	int cocci_id/* drivers/sbus/char/oradax.c 211 */(struct file *f,
							 struct vm_area_struct *vma);
	ssize_t cocci_id/* drivers/sbus/char/oradax.c 209 */(struct file *filp,
							     const char __user *buf,
							     size_t count,
							     loff_t *ppos);
	ssize_t cocci_id/* drivers/sbus/char/oradax.c 207 */(struct file *filp,
							     char __user *buf,
							     size_t count,
							     loff_t *ppos);
	int cocci_id/* drivers/sbus/char/oradax.c 206 */(struct inode *inode,
							 struct file *file);
	struct dax_ctx {
		struct dax_ccb *ccb_buf;
		u64 ccb_buf_ra;
		struct dax_cca *ca_buf;
		u64 ca_buf_ra;
		struct page *pages[DAX_CA_ELEMS][NUM_STREAM_TYPES];
		struct task_struct *owner;
		struct task_struct *client;
		union ccb_result result;
		u32 ccb_count;
		u32 fail_count;
	} cocci_id/* drivers/sbus/char/oradax.c 191 */;
	struct dax_cca {
		u8 status;
		u8 err;
		u8 rsvd[2];
		u32 n_remaining;
		u32 output_sz;
		u32 rsvd2;
		u64 run_cycles;
		u64 run_stats;
		u32 n_processed;
		u32 rsvd3[5];
		u64 retval;
		u64 rsvd4[8];
	} cocci_id/* drivers/sbus/char/oradax.c 175 */;
	struct dax_ccb {
		struct dax_header hdr;
		struct dax_control ctrl;
		void *ca;
		void *pri;
		struct dax_data_access dac;
		void *sec;
		u64 dword5;
		void *out;
		void *tbl;
	} cocci_id/* drivers/sbus/char/oradax.c 163 */;
	struct dax_data_access {
		u64 flow_ctrl:2;
		u64 pipe_target:2;
		u64 out_buf_size:20;
		u64 unused1:8;
		u64 out_alloc:5;
		u64 unused2:1;
		u64 pri_len_fmt:2;
		u64 pri_len:24;
	} cocci_id/* drivers/sbus/char/oradax.c 150 */;
	struct dax_control {
		u32 pri_fmt:4;
		u32 pri_elem_size:5;
		u32 pri_offset:3;
		u32 sec_encoding:1;
		u32 sec_offset:3;
		u32 sec_elem_size:2;
		u32 out_fmt:2;
		u32 out_elem_size:2;
		u32 misc:10;
	} cocci_id/* drivers/sbus/char/oradax.c 136 */;
	struct dax_header {
		u32 ccb_version:4;
		u32 pipe:1;
		u32 longccb:1;
		u32 cond:1;
		u32 serial:1;
		u32 opcode:8;
		u32 reserved:3;
		u32 table_addr_type:2;
		u32 out_addr_type:3;
		u32 sec_addr_type:3;
		u32 pri_addr_type:3;
		u32 cca_addr_type:2;
	} cocci_id/* drivers/sbus/char/oradax.c 119 */;
}
