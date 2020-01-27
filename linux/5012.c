cocci_test_suite() {
	struct sdma_rht_map_elem cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 965 */;
	cpumask_var_t cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 937 */;
	const char *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 933 */;
	struct sdma_rht_map_elem *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 909 */;
	struct sdma_rht_node cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 849 */;
	const struct rhashtable_params cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 847 */;
	struct sdma_rht_node {
		unsigned long cpu_id;
		struct sdma_rht_map_elem *map[HFI1_MAX_VLS_SUPPORTED];
		struct rhash_head node;
	} cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 839 */;
	struct sdma_rht_map_elem {
		u32 mask;
		u8 ctr;
		struct sdma_engine *sde[0];
	} cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 833 */;
	struct sdma_vl_map *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 752 */;
	const struct sdma_set_state_action *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 675 */;
	enum sdma_states cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 672 */;
	struct timer_list *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 509 */;
	struct sdma_engine cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 462 */;
	struct work_struct *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 460 */;
	callback_t cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 370 */;
	struct iowait *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 369 */;
	u64 cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 3264 */;
	u32 *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 3234 */;
	dma_addr_t cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 3118 */;
	unsigned long cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 3115 */;
	struct page *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 3114 */;
	void *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 3114 */;
	struct sdma_desc cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 3081 */;
	u32 cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 3067 */;
	struct sdma_state cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 270 */;
	struct kref *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 267 */;
	int cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2564 */;
	struct sdma_state *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2563 */;
	enum sdma_events cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2561 */;
	struct sdma_engine *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2560 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2560 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 250 */(struct sdma_engine *sde,
								 uint avail);
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 249 */(struct sdma_engine *sde,
								 u64 status);
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 248 */(struct sdma_engine *sde);
	u16 *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2475 */;
	struct list_head *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2475 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 245 */(struct sdma_engine *sde,
								 enum sdma_events event);
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 241 */(struct sdma_engine *,
								 u32, uint);
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 240 */(struct sdma_engine *,
								 unsigned);
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 238 */(struct sdma_engine *);
	const seqcount_t *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2370 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 237 */(struct sdma_engine *,
								 enum sdma_states);
	unsigned cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2367 */;
	bool cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2358 */;
	struct iowait_work *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2356 */;
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 235 */(unsigned long);
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 233 */(struct sdma_state *);
	void cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 232 */(struct kref *);
	char cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2163 */[6];
	u64 cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2146 */[2];
	struct hw_sdma_desc *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2145 */;
	uint cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 2054 */;
	unsigned long long cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1922 */;
	struct iowait *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1768 */[SDMA_WAIT_BATCH_SIZE];
	u8 cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1682 */;
	u16 cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1679 */;
	struct sdma_txreq *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1677 */;
	struct hfi1_devdata *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1676 */;
	struct sdma_desc *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1634 */;
	unsigned int cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1572 */;
	const struct sdma_set_state_action cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 157 */[];
	const char *constcocci_id/* drivers/infiniband/hw/hfi1/sdma.c 139 */[];
	struct hfi1_pportdata *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1365 */;
	struct rhashtable *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1362 */;
	size_t cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1294 */;
	struct sdma_map_elem cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1244 */;
	struct sdma_map_elem *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1225 */;
	struct sdma_vl_map cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1223 */;
	u8 cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1205 */[OPA_MAX_VLS];
	u8 *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1200 */;
	struct rcu_head *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1166 */;
	struct seq_file *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1116 */;
	struct sdma_rht_node *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1099 */;
	char *cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1086 */;
	ssize_t cocci_id/* drivers/infiniband/hw/hfi1/sdma.c 1086 */;
}
