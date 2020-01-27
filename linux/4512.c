cocci_test_suite() {
	struct vmci_resource *cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 92 */;
	u32 *cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 85 */;
	enum vmci_route cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 582 */;
	struct dbell_index_table cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 51 */;
	struct dbell_index_table {
		spinlock_t lock;
		struct hlist_head entries[VMCI_DOORBELL_INDEX_TABLE_SIZE];
	} cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 46 */;
	vmci_callback cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 412 */;
	void *cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 412 */;
	struct vmci_handle *cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 409 */;
	u8 *cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 380 */;
	u32 cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 353 */;
	struct dbell_entry {
		struct vmci_resource resource;
		struct hlist_node node;
		struct work_struct work;
		vmci_callback notify_cb;
		void *client_data;
		u32 idx;
		u32 priv_flags;
		bool run_delayed;
		atomic_t active;
	} cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 33 */;
	struct vmci_notify_bm_set_msg cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 329 */;
	u64 cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 326 */;
	struct dbell_entry cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 283 */;
	struct dbell_entry *cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 282 */;
	struct work_struct *cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 280 */;
	void cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 280 */;
	struct vmci_doorbell_notify_msg cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 266 */;
	struct vmci_doorbell_unlink_msg cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 249 */;
	struct vmci_doorbell_link_msg cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 231 */;
	struct vmci_handle cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 229 */;
	int cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 229 */;
	bool cocci_id/* drivers/misc/vmw_vmci/vmci_doorbell.c 160 */;
}
