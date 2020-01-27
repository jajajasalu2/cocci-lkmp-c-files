cocci_test_suite() {
	struct pci_ops cocci_id/* arch/mips/pci/pci-virtio-guest.c 95 */;
	u32 *cocci_id/* arch/mips/pci/pci-virtio-guest.c 77 */;
	struct pci_bus *cocci_id/* arch/mips/pci/pci-virtio-guest.c 76 */;
	unsigned int cocci_id/* arch/mips/pci/pci-virtio-guest.c 76 */;
	int cocci_id/* arch/mips/pci/pci-virtio-guest.c 76 */;
	u32 cocci_id/* arch/mips/pci/pci-virtio-guest.c 57 */;
	union pci_config_address cocci_id/* arch/mips/pci/pci-virtio-guest.c 46 */;
	u8 cocci_id/* arch/mips/pci/pci-virtio-guest.c 38 */;
	const struct pci_dev *cocci_id/* arch/mips/pci/pci-virtio-guest.c 38 */;
	struct pci_dev *cocci_id/* arch/mips/pci/pci-virtio-guest.c 33 */;
	union pci_config_address {
		struct {
			__BITFIELD_FIELD(unsigned enable_bit:1,
					 __BITFIELD_FIELD(unsigned reserved:7,
							  __BITFIELD_FIELD(unsigned bus_number:8,
									   __BITFIELD_FIELD(unsigned devfn_number:8,
											    __BITFIELD_FIELD(unsigned register_number:8,
		)))));
		};
		u32 w;
	} cocci_id/* arch/mips/pci/pci-virtio-guest.c 21 */;
	int __init cocci_id/* arch/mips/pci/pci-virtio-guest.c 120 */;
	void cocci_id/* arch/mips/pci/pci-virtio-guest.c 120 */;
	struct pci_controller cocci_id/* arch/mips/pci/pci-virtio-guest.c 114 */;
	struct resource cocci_id/* arch/mips/pci/pci-virtio-guest.c 107 */;
}
