cocci_test_suite() {
	u32 cocci_id/* drivers/vfio/pci/vfio_pci_config.c 933 */;
	u8 cocci_id/* drivers/vfio/pci/vfio_pci_config.c 925 */;
	int __init cocci_id/* drivers/vfio/pci/vfio_pci_config.c 918 */;
	u8 *cocci_id/* drivers/vfio/pci/vfio_pci_config.c 888 */;
	__le32 cocci_id/* drivers/vfio/pci/vfio_pci_config.c 886 */;
	struct vfio_pci_device *cocci_id/* drivers/vfio/pci/vfio_pci_config.c 884 */;
	const u16 cocci_id/* drivers/vfio/pci/vfio_pci_config.c 71 */[PCI_EXT_CAP_ID_MAX + 1];
	pci_power_t cocci_id/* drivers/vfio/pci/vfio_pci_config.c 675 */;
	u16 cocci_id/* drivers/vfio/pci/vfio_pci_config.c 628 */;
	bool cocci_id/* drivers/vfio/pci/vfio_pci_config.c 550 */;
	u64 cocci_id/* drivers/vfio/pci/vfio_pci_config.c 454 */;
	struct pci_dev *cocci_id/* drivers/vfio/pci/vfio_pci_config.c 451 */;
	const u8 cocci_id/* drivers/vfio/pci/vfio_pci_config.c 43 */[PCI_CAP_ID_MAX + 1];
	unsigned long cocci_id/* drivers/vfio/pci/vfio_pci_config.c 428 */;
	u32 *cocci_id/* drivers/vfio/pci/vfio_pci_config.c 405 */;
	__le32 *cocci_id/* drivers/vfio/pci/vfio_pci_config.c 394 */;
	__le16 *cocci_id/* drivers/vfio/pci/vfio_pci_config.c 387 */;
	struct perm_bits *cocci_id/* drivers/vfio/pci/vfio_pci_config.c 346 */;
	int cocci_id/* drivers/vfio/pci/vfio_pci_config.c 346 */;
	void cocci_id/* drivers/vfio/pci/vfio_pci_config.c 338 */;
	struct perm_bits cocci_id/* drivers/vfio/pci/vfio_pci_config.c 328 */;
	struct perm_bits cocci_id/* drivers/vfio/pci/vfio_pci_config.c 319 */[PCI_EXT_CAP_ID_MAX + 1];
	struct perm_bits cocci_id/* drivers/vfio/pci/vfio_pci_config.c 316 */[PCI_CAP_ID_MAX + 1];
	loff_t *cocci_id/* drivers/vfio/pci/vfio_pci_config.c 1752 */;
	size_t cocci_id/* drivers/vfio/pci/vfio_pci_config.c 1752 */;
	char __user *cocci_id/* drivers/vfio/pci/vfio_pci_config.c 1751 */;
	ssize_t cocci_id/* drivers/vfio/pci/vfio_pci_config.c 1751 */;
	loff_t cocci_id/* drivers/vfio/pci/vfio_pci_config.c 1740 */;
	const struct pci_device_id cocci_id/* drivers/vfio/pci/vfio_pci_config.c 1614 */[];
	struct perm_bits {
		u8 *virt;
		u8 *write;
		int (*readfn)(struct vfio_pci_device *vdev, int pos,
			      int count, struct perm_bits *perm, int offset,
			      __le32 *val);
		int (*writefn)(struct vfio_pci_device *vdev, int pos,
			       int count, struct perm_bits *perm, int offset,
			       __le32 val);
	} cocci_id/* drivers/vfio/pci/vfio_pci_config.c 108 */;
}
