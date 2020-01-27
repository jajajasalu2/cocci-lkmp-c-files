cocci_test_suite() {
	struct datagram_entry *cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 59 */;
	struct vmci_handle cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 58 */;
	struct vmci_handle *cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 54 */;
	void *cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 54 */;
	vmci_datagram_recv_cb cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 53 */;
	u32 cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 50 */;
	int cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 50 */;
	atomic_t cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 45 */;
	struct delayed_datagram_info {
		struct datagram_entry *entry;
		struct work_struct work;
		bool in_dg_host_queue;
		struct vmci_datagram msg;
		u8 msg_payload[];
	} cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 35 */;
	unsigned long long cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 325 */;
	struct vmci_datagram cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 320 */;
	enum vmci_route cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 318 */;
	bool cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 315 */;
	struct vmci_resource *cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 297 */;
	struct vmci_datagram *cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 294 */;
	struct datagram_entry {
		struct vmci_resource resource;
		u32 flags;
		bool run_delayed;
		vmci_datagram_recv_cb recv_cb;
		void *client_data;
		u32 priv_flags;
	} cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 26 */;
	struct datagram_entry cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 203 */;
	size_t cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 160 */;
	struct delayed_datagram_info cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 139 */;
	struct delayed_datagram_info *cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 138 */;
	struct work_struct *cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 136 */;
	void cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 136 */;
	u32 *cocci_id/* drivers/misc/vmw_vmci/vmci_datagram.c 107 */;
}
