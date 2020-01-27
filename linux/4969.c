cocci_test_suite() {
	struct vnic_dev_bar *cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 98 */;
	int (*cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 93 */)(char *,
									 int);
	int (*cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 92 */)(void *,
									 char *,
									 int);
	void *cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 91 */;
	char *cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 89 */;
	const char *cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 84 */;
	const char *const cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 72 */[];
	enum vnic_res_type cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 55 */[];
	enum vnic_res_type cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 49 */;
	enum usnic_vnic_res_type cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 49 */;
	void cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 472 */;
	int cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 442 */;
	struct usnic_vnic *cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 439 */;
	struct pci_dev *cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 439 */;
	struct usnic_vnic {
		struct vnic_dev *vdev;
		struct vnic_dev_bar bar[PCI_NUM_RESOURCES];
		struct usnic_vnic_res_chunk chunks[USNIC_VNIC_RES_TYPE_MAX];
		spinlock_t res_lock;
	} cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 42 */;
	struct usnic_vnic_res *cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 306 */;
	struct usnic_vnic_res_chunk *cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 303 */;
	u16 cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 296 */;
	struct usnic_vnic_res_spec *cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 200 */;
	const struct usnic_vnic_res_spec *cocci_id/* drivers/infiniband/hw/usnic/usnic_vnic.c 154 */;
}
