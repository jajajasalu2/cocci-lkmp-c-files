cocci_test_suite() {
	void *cocci_id/* drivers/hwtracing/intel_th/msu.c 992 */;
	struct scatterlist *cocci_id/* drivers/hwtracing/intel_th/msu.c 991 */;
	unsigned int cocci_id/* drivers/hwtracing/intel_th/msu.c 989 */;
	struct msc_window *cocci_id/* drivers/hwtracing/intel_th/msu.c 988 */;
	int cocci_id/* drivers/hwtracing/intel_th/msu.c 988 */;
	struct msc_iter {
		struct list_head entry;
		struct msc *msc;
		struct msc_window *start_win;
		struct msc_window *win;
		unsigned long offset;
		struct scatterlist *start_block;
		struct scatterlist *block;
		unsigned int block_off;
		unsigned int wrap_count;
		unsigned int eof;
	} cocci_id/* drivers/hwtracing/intel_th/msu.c 92 */;
	struct intel_th_device *cocci_id/* drivers/hwtracing/intel_th/msu.c 863 */;
	enum lockout_state cocci_id/* drivers/hwtracing/intel_th/msu.c 706 */;
	struct msc_window {
		struct list_head entry;
		unsigned long pgoff;
		enum lockout_state lockout;
		spinlock_t lo_lock;
		unsigned int nr_blocks;
		unsigned int nr_segs;
		struct msc *msc;
		struct sg_table _sgt;
		struct sg_table *sgt;
	} cocci_id/* drivers/hwtracing/intel_th/msu.c 67 */;
	struct msc_block_desc cocci_id/* drivers/hwtracing/intel_th/msu.c 657 */;
	unsigned long (*cocci_id/* drivers/hwtracing/intel_th/msu.c 575 */)(void *,
									    void *,
									    size_t);
	enum lockout_state{WIN_READY=0, WIN_INUSE, WIN_LOCKED,} cocci_id/* drivers/hwtracing/intel_th/msu.c 50 */;
	bool cocci_id/* drivers/hwtracing/intel_th/msu.c 261 */;
	struct msc_block_desc *cocci_id/* drivers/hwtracing/intel_th/msu.c 261 */;
	struct module *cocci_id/* drivers/hwtracing/intel_th/msu.c 221 */;
	const struct msu_buffer *cocci_id/* drivers/hwtracing/intel_th/msu.c 220 */;
	struct intel_th_driver cocci_id/* drivers/hwtracing/intel_th/msu.c 2117 */;
	void __iomem *cocci_id/* drivers/hwtracing/intel_th/msu.c 2066 */;
	struct resource *cocci_id/* drivers/hwtracing/intel_th/msu.c 2064 */;
	struct device *cocci_id/* drivers/hwtracing/intel_th/msu.c 2063 */;
	struct attribute_group cocci_id/* drivers/hwtracing/intel_th/msu.c 2057 */;
	struct attribute *cocci_id/* drivers/hwtracing/intel_th/msu.c 2049 */[];
	struct device_attribute *cocci_id/* drivers/hwtracing/intel_th/msu.c 1823 */;
	char *cocci_id/* drivers/hwtracing/intel_th/msu.c 1823 */;
	const char *cocci_id/* drivers/hwtracing/intel_th/msu.c 181 */;
	struct msu_buffer_entry *cocci_id/* drivers/hwtracing/intel_th/msu.c 181 */;
	const char *constcocci_id/* drivers/hwtracing/intel_th/msu.c 1775 */[];
	struct msu_buffer_entry {
		struct list_head entry;
		const struct msu_buffer *mbuf;
		struct module *owner;
	} cocci_id/* drivers/hwtracing/intel_th/msu.c 175 */;
	u32 cocci_id/* drivers/hwtracing/intel_th/msu.c 1732 */;
	irqreturn_t cocci_id/* drivers/hwtracing/intel_th/msu.c 1729 */;
	struct msc cocci_id/* drivers/hwtracing/intel_th/msu.c 1724 */;
	struct work_struct *cocci_id/* drivers/hwtracing/intel_th/msu.c 1722 */;
	struct sg_table *cocci_id/* drivers/hwtracing/intel_th/msu.c 1706 */;
	const struct file_operations cocci_id/* drivers/hwtracing/intel_th/msu.c 1638 */;
	struct msc_iter *cocci_id/* drivers/hwtracing/intel_th/msu.c 1604 */;
	unsigned long cocci_id/* drivers/hwtracing/intel_th/msu.c 1603 */;
	struct vm_area_struct *cocci_id/* drivers/hwtracing/intel_th/msu.c 1601 */;
	struct file *cocci_id/* drivers/hwtracing/intel_th/msu.c 1601 */;
	const struct vm_operations_struct cocci_id/* drivers/hwtracing/intel_th/msu.c 1595 */;
	vm_fault_t cocci_id/* drivers/hwtracing/intel_th/msu.c 1579 */;
	struct vm_fault *cocci_id/* drivers/hwtracing/intel_th/msu.c 1579 */;
	struct msc_win_to_user_struct cocci_id/* drivers/hwtracing/intel_th/msu.c 1524 */;
	loff_t cocci_id/* drivers/hwtracing/intel_th/msu.c 1499 */;
	loff_t *cocci_id/* drivers/hwtracing/intel_th/msu.c 1494 */;
	size_t cocci_id/* drivers/hwtracing/intel_th/msu.c 1494 */;
	char __user *cocci_id/* drivers/hwtracing/intel_th/msu.c 1493 */;
	ssize_t cocci_id/* drivers/hwtracing/intel_th/msu.c 1493 */;
	struct inode *cocci_id/* drivers/hwtracing/intel_th/msu.c 1429 */;
	struct msc_win_to_user_struct *cocci_id/* drivers/hwtracing/intel_th/msu.c 1415 */;
	struct msc_win_to_user_struct {
		char __user *buf;
		unsigned long offset;
	} cocci_id/* drivers/hwtracing/intel_th/msu.c 1402 */;
	struct msc {
		void __iomem *reg_base;
		void __iomem *msu_base;
		struct intel_th_device *thdev;
		const struct msu_buffer *mbuf;
		void *mbuf_priv;
		struct work_struct work;
		struct list_head win_list;
		struct sg_table single_sgt;
		struct msc_window *cur_win;
		unsigned long nr_pages;
		unsigned long single_sz;
		unsigned int single_wrap:1;
		void *base;
		dma_addr_t base_addr;
		u32 orig_addr;
		u32 orig_sz;
		atomic_t user_count;
		atomic_t mmap_count;
		struct mutex buf_mutex;
		struct list_head iter_list;
		unsigned int enabled:1,wrap:1,do_irq:1;
		unsigned int mode;
		unsigned int burst_len;
		unsigned int index;
	} cocci_id/* drivers/hwtracing/intel_th/msu.c 129 */;
	unsigned long *cocci_id/* drivers/hwtracing/intel_th/msu.c 1280 */;
	dma_addr_t cocci_id/* drivers/hwtracing/intel_th/msu.c 1204 */;
	struct msc_window cocci_id/* drivers/hwtracing/intel_th/msu.c 1184 */;
	struct page *cocci_id/* drivers/hwtracing/intel_th/msu.c 1123 */;
	struct msc *cocci_id/* drivers/hwtracing/intel_th/msu.c 1117 */;
	void cocci_id/* drivers/hwtracing/intel_th/msu.c 1117 */;
}