cocci_test_suite() {
	struct optee_call_waiter *cocci_id/* drivers/tee/optee/call.c 64 */;
	struct optee_call_queue *cocci_id/* drivers/tee/optee/call.c 62 */;
	void cocci_id/* drivers/tee/optee/call.c 62 */;
	struct mm_struct *cocci_id/* drivers/tee/optee/call.c 554 */;
	size_t cocci_id/* drivers/tee/optee/call.c 552 */;
	struct vm_area_struct *cocci_id/* drivers/tee/optee/call.c 541 */;
	unsigned long cocci_id/* drivers/tee/optee/call.c 541 */;
	int cocci_id/* drivers/tee/optee/call.c 541 */;
	pgprot_t cocci_id/* drivers/tee/optee/call.c 530 */;
	bool cocci_id/* drivers/tee/optee/call.c 530 */;
	u64 *cocci_id/* drivers/tee/optee/call.c 520 */;
	void *cocci_id/* drivers/tee/optee/call.c 480 */;
	struct {
		u64 pages_list[PAGELIST_ENTRIES_PER_PAGE];
		u64 next_page_data;
	} *cocci_id/* drivers/tee/optee/call.c 465 */;
	struct page **cocci_id/* drivers/tee/optee/call.c 456 */;
	u64 cocci_id/* drivers/tee/optee/call.c 442 */;
	union {
		struct arm_smccc_res smccc;
		struct optee_smc_disable_shm_cache_result result;
	} cocci_id/* drivers/tee/optee/call.c 419 */;
	struct optee_call_waiter cocci_id/* drivers/tee/optee/call.c 414 */;
	struct optee *cocci_id/* drivers/tee/optee/call.c 412 */;
	phys_addr_t cocci_id/* drivers/tee/optee/call.c 361 */;
	struct tee_param *cocci_id/* drivers/tee/optee/call.c 311 */;
	struct tee_ioctl_invoke_arg *cocci_id/* drivers/tee/optee/call.c 310 */;
	struct tee_ioctl_open_session_arg *cocci_id/* drivers/tee/optee/call.c 209 */;
	struct optee_msg_arg *cocci_id/* drivers/tee/optee/call.c 179 */;
	phys_addr_t *cocci_id/* drivers/tee/optee/call.c 175 */;
	struct optee_msg_arg **cocci_id/* drivers/tee/optee/call.c 174 */;
	struct tee_shm *cocci_id/* drivers/tee/optee/call.c 173 */;
	struct tee_context *cocci_id/* drivers/tee/optee/call.c 173 */;
	struct optee_call_waiter {
		struct list_head list_node;
		struct completion c;
	} cocci_id/* drivers/tee/optee/call.c 17 */;
	struct arm_smccc_res cocci_id/* drivers/tee/optee/call.c 138 */;
	struct optee_call_ctx cocci_id/* drivers/tee/optee/call.c 130 */;
	struct optee_rpc_param cocci_id/* drivers/tee/optee/call.c 129 */;
	u32 cocci_id/* drivers/tee/optee/call.c 104 */;
	struct optee_session *cocci_id/* drivers/tee/optee/call.c 103 */;
	struct optee_context_data *cocci_id/* drivers/tee/optee/call.c 103 */;
}
