cocci_test_suite() {
	struct list_head *cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 88 */;
	struct vmci_subscription *cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 87 */;
	struct vmci_event_msg *cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 85 */;
	void cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 85 */;
	int cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 69 */;
	u32 cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 67 */;
	int __init cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 33 */;
	struct list_head cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 30 */[VMCI_EVENT_MAX];
	struct vmci_subscription {
		u32 id;
		u32 event;
		vmci_event_cb callback;
		void *callback_data;
		struct list_head node;
	} cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 22 */;
	bool cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 137 */;
	u32 *cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 132 */;
	void *cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 131 */;
	vmci_event_cb cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 130 */;
	struct vmci_event_data_max cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 108 */;
	struct vmci_datagram *cocci_id/* drivers/misc/vmw_vmci/vmci_event.c 103 */;
}
