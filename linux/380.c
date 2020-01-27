cocci_test_suite() {
	int __init cocci_id/* kernel/kcov.c 918 */;
	struct list_head cocci_id/* kernel/kcov.c 87 */;
	struct kcov_remote {
		u64 handle;
		struct kcov *kcov;
		struct hlist_node hnode;
	} cocci_id/* kernel/kcov.c 79 */;
	struct kcov_remote_area {
		struct list_head list;
		unsigned int size;
	} cocci_id/* kernel/kcov.c 74 */;
	const struct file_operations cocci_id/* kernel/kcov.c 709 */;
	void __user *cocci_id/* kernel/kcov.c 689 */;
	struct kcov_remote_arg cocci_id/* kernel/kcov.c 683 */;
	unsigned __user *cocci_id/* kernel/kcov.c 682 */;
	struct kcov_remote_arg *cocci_id/* kernel/kcov.c 677 */;
	long cocci_id/* kernel/kcov.c 673 */;
	struct kcov_remote *cocci_id/* kernel/kcov.c 552 */;
	struct inode *cocci_id/* kernel/kcov.c 493 */;
	struct file *cocci_id/* kernel/kcov.c 493 */;
	int cocci_id/* kernel/kcov.c 493 */;
	struct kcov {
		refcount_t refcount;
		spinlock_t lock;
		enum kcov_mode mode;
		unsigned int size;
		void *area;
		struct task_struct *t;
		bool remote;
		unsigned int remote_size;
		int sequence;
	} cocci_id/* kernel/kcov.c 46 */;
	struct page *cocci_id/* kernel/kcov.c 448 */;
	void *cocci_id/* kernel/kcov.c 445 */;
	struct vm_area_struct *cocci_id/* kernel/kcov.c 442 */;
	struct kcov *cocci_id/* kernel/kcov.c 378 */;
	struct hlist_node *cocci_id/* kernel/kcov.c 363 */;
	u64 *cocci_id/* kernel/kcov.c 286 */;
	u64 cocci_id/* kernel/kcov.c 252 */;
	u32 cocci_id/* kernel/kcov.c 246 */;
	u16 cocci_id/* kernel/kcov.c 240 */;
	u8 cocci_id/* kernel/kcov.c 234 */;
	void notrace cocci_id/* kernel/kcov.c 234 */;
	unsigned long cocci_id/* kernel/kcov.c 183 */;
	unsigned long *cocci_id/* kernel/kcov.c 182 */;
	struct task_struct *cocci_id/* kernel/kcov.c 181 */;
	void cocci_id/* kernel/kcov.c 179 */;
	unsigned int cocci_id/* kernel/kcov.c 147 */;
	bool cocci_id/* kernel/kcov.c 145 */;
	enum kcov_mode cocci_id/* kernel/kcov.c 145 */;
	struct kcov_remote_area cocci_id/* kernel/kcov.c 124 */;
	struct list_head *cocci_id/* kernel/kcov.c 120 */;
	struct kcov_remote_area *cocci_id/* kernel/kcov.c 117 */;
}
