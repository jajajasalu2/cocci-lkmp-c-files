cocci_test_suite() {
	struct qp_list *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 995 */;
	struct vmci_qp_detach_msg cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 981 */;
	u8 *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 965 */;
	size_t cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 940 */;
	struct vmci_qp_alloc_msg *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 939 */;
	const struct qp_guest_endpoint *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 937 */;
	struct qp_broker_entry cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 837 */;
	struct qp_entry *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 834 */;
	struct qp_guest_endpoint cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 823 */;
	struct page *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 742 */[2];
	uintptr_t cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 653 */;
	struct vmci_queue *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 605 */;
	void cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 605 */;
	struct page **cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 549 */;
	u32 *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 504 */;
	const struct ppn_set *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 490 */;
	u64 *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 430 */;
	struct ppn_set *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 428 */;
	const struct vmci_queue *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 378 */;
	struct msghdr *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 3186 */;
	struct kvec cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 3061 */;
	struct iov_iter cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 3060 */;
	void **cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 302 */;
	const void *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 3011 */;
	dma_addr_t *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 300 */;
	struct vmci_queue_kern_if *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 297 */;
	enum vmci_route cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 2665 */;
	struct vmci_qp **cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 2653 */;
	const size_t cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 2618 */;
	s64 cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 2593 */;
	struct iov_iter *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 2589 */;
	ssize_t cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 2586 */;
	unsigned int cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 2503 */;
	struct vmci_qp *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 2501 */;
	struct vmci_queue_header **cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 2457 */;
	const struct vmci_qp *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 2456 */;
	struct qp_list cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 226 */;
	struct vmci_qp_page_store cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 2237 */;
	struct qp_list {
		struct list_head head;
		struct mutex mutex;
	} cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 221 */;
	struct qp_guest_endpoint {
		struct vmci_resource resource;
		struct qp_entry qp;
		u64 num_ppns;
		void *produce_q;
		void *consume_q;
		struct ppn_set ppn_set;
	} cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 212 */;
	struct qp_broker_entry {
		struct vmci_resource resource;
		struct qp_entry qp;
		u32 create_id;
		u32 attach_id;
		enum qp_broker_state state;
		bool require_trusted_attach;
		bool created_by_trusted;
		bool vmci_page_files;
		struct vmci_queue *produce_q;
		struct vmci_queue *consume_q;
		struct vmci_queue_header saved_produce_q;
		struct vmci_queue_header saved_consume_q;
		vmci_event_release_cb wakeup_cb;
		void *client_data;
		void *local_mem;
	} cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 194 */;
	struct qp_entry cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1889 */;
	struct qp_entry {
		struct list_head list_item;
		struct vmci_handle handle;
		u32 peer;
		u32 flags;
		u64 produce_size;
		u64 consume_size;
		u32 ref_count;
	} cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 184 */;
	bool cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1776 */;
	struct qp_broker_entry *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1774 */;
	struct vmci_ctx *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1773 */;
	struct vmci_handle cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1772 */;
	vmci_event_release_cb cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1769 */;
	const u32 cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1700 */;
	bool *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1698 */;
	struct qp_broker_entry **cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1697 */;
	struct vmci_qp_page_store *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1693 */;
	enum qp_broker_state{VMCIQPB_NEW, VMCIQPB_CREATED_NO_MEM, VMCIQPB_CREATED_MEM, VMCIQPB_ATTACHED_NO_MEM, VMCIQPB_ATTACHED_MEM, VMCIQPB_SHUTDOWN_NO_MEM, VMCIQPB_SHUTDOWN_MEM, VMCIQPB_GONE,} cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 160 */;
	struct vmci_qp {
		struct vmci_handle handle;
		struct vmci_queue *produce_q;
		struct vmci_queue *consume_q;
		u64 produce_q_size;
		u64 consume_q_size;
		u32 peer;
		u32 flags;
		u32 priv_flags;
		bool guest_endpoint;
		unsigned int blocked;
		unsigned int generation;
		wait_queue_head_t event;
	} cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 145 */;
	struct vmci_event_qp cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1449 */;
	struct vmci_queue_header *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1377 */;
	struct vmci_queue_kern_if {
		struct mutex __mutex;
		struct mutex *mutex;
		size_t num_pages;
		bool host;
		union {
			struct {
				dma_addr_t *pas;
				void **vas;
			} g;
			struct {
				struct page **page;
				struct page **header_page;
			} h;
		} u;
	} cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 125 */;
	struct qp_guest_endpoint *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1101 */;
	void *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1098 */;
	const u64 cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1094 */;
	u32 cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1090 */;
	u64 cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1087 */;
	struct vmci_queue **cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1086 */;
	struct vmci_handle *cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1085 */;
	int cocci_id/* drivers/misc/vmw_vmci/vmci_queue_pair.c 1085 */;
}