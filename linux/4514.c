cocci_test_suite() {
	struct vmci_datagram cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 81 */;
	void __exit cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 752 */;
	int __init cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 747 */;
	struct pci_driver cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 740 */;
	const struct pci_device_id cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 734 */[];
	atomic_t cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 71 */;
	struct vmci_guest_device *cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 68 */;
	struct vmci_guest_device {
		struct device *dev;
		void __iomem *iobase;
		bool exclusive_vectors;
		struct tasklet_struct datagram_tasklet;
		struct tasklet_struct bm_tasklet;
		void *data_buffer;
		void *notification_bitmap;
		dma_addr_t notification_base;
	} cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 45 */;
	unsigned int cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 433 */;
	void __iomem *cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 432 */;
	const struct pci_device_id *cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 429 */;
	u32 cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 42 */;
	irqreturn_t cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 371 */;
	bool cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 35 */;
	uintptr_t cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 234 */;
	unsigned cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 226 */;
	size_t cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 213 */;
	u8 *cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 211 */;
	unsigned long cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 208 */;
	void cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 208 */;
	struct vmci_datagram *cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 169 */;
	struct vmci_resource_query_hdr cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 167 */;
	struct vmci_resource_query_msg *cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 166 */;
	struct pci_dev *cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 163 */;
	int cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 163 */;
	const struct vmci_event_payld_ctx *cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 138 */;
	void *cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 136 */;
	const struct vmci_event_data *cocci_id/* drivers/misc/vmw_vmci/vmci_guest.c 135 */;
}
