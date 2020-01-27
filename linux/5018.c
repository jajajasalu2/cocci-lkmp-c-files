cocci_test_suite() {
	struct mmu_rb_handler **cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 98 */;
	struct workqueue_struct *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 97 */;
	struct mmu_rb_ops *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 96 */;
	struct mm_struct *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 95 */;
	 cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 82 */(struct mmu_rb_node,
							      node,
							      unsigned long,
							      __last,
							      mmu_node_start,
							      mmu_node_last,
							      static,
							      __mmu_int_rb);
	const struct mmu_notifier_ops cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 78 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 76 */(struct work_struct *work);
	void cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 74 */(struct mmu_rb_handler *handler,
								  struct list_head *del_list);
	struct mmu_rb_node *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 72 */(struct mmu_rb_handler *,
										 unsigned long,
										 unsigned long);
	int cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 70 */(struct mmu_notifier *,
								 const struct mmu_notifier_range *);
	unsigned long cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 69 */(struct mmu_rb_node *);
	struct mmu_rb_handler {
		struct mmu_notifier mn;
		struct rb_root_cached root;
		void *ops_arg;
		spinlock_t lock;
		struct mmu_rb_ops *ops;
		struct mm_struct *mm;
		struct list_head lru_list;
		struct work_struct del_work;
		struct list_head del_list;
		struct workqueue_struct *wq;
	} cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 55 */;
	struct list_head cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 344 */;
	struct mmu_rb_handler cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 342 */;
	struct work_struct *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 339 */;
	struct mmu_rb_node cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 328 */;
	struct list_head *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 323 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 322 */;
	struct rb_root_cached *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 290 */;
	const struct mmu_notifier_range *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 286 */;
	struct mmu_notifier *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 285 */;
	bool cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 240 */;
	void *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 235 */;
	struct mmu_rb_node **cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 214 */;
	unsigned long cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 190 */;
	struct mmu_rb_node *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 189 */;
	struct mmu_rb_handler *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 189 */;
	int cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 161 */;
	struct rb_node *cocci_id/* drivers/infiniband/hw/hfi1/mmu_rb.c 132 */;
}
