cocci_test_suite() {
	uint32_t cocci_id/* arch/mips/pci/pci-octeon.c 89 */;
	uint16_t cocci_id/* arch/mips/pci/pci-octeon.c 88 */;
	struct pci_dev *cocci_id/* arch/mips/pci/pci-octeon.c 86 */;
	union cvmx_pci_bar1_indexx cocci_id/* arch/mips/pci/pci-octeon.c 634 */;
	u32 cocci_id/* arch/mips/pci/pci-octeon.c 615 */;
	enum octeon_dma_bar_type cocci_id/* arch/mips/pci/pci-octeon.c 61 */;
	int (*cocci_id/* arch/mips/pci/pci-octeon.c 60 */)(const struct pci_dev *dev,
							   u8 slot, u8 pin);
	union cvmx_npi_mem_access_subidx cocci_id/* arch/mips/pci/pci-octeon.c 564 */;
	union cvmx_npi_pci_int_arb_cfg cocci_id/* arch/mips/pci/pci-octeon.c 494 */;
	union octeon_pci_address {
		uint64_t u64;
		struct {
			uint64_t upper:2;
			uint64_t reserved:13;
			uint64_t io:1;
			uint64_t did:5;
			uint64_t subdid:3;
			uint64_t reserved2:4;
			uint64_t endian_swap:2;
			uint64_t reserved3:10;
			uint64_t bus:8;
			uint64_t dev:5;
			uint64_t func:3;
			uint64_t reg:8;
		} s;
	} cocci_id/* arch/mips/pci/pci-octeon.c 42 */;
	unsigned long cocci_id/* arch/mips/pci/pci-octeon.c 415 */;
	union cvmx_pci_cnt_reg cocci_id/* arch/mips/pci/pci-octeon.c 413 */;
	u64 cocci_id/* arch/mips/pci/pci-octeon.c 37 */;
	union cvmx_pci_cfg56 cocci_id/* arch/mips/pci/pci-octeon.c 366 */;
	union cvmx_pci_cfg22 cocci_id/* arch/mips/pci/pci-octeon.c 365 */;
	union cvmx_pci_cfg16 cocci_id/* arch/mips/pci/pci-octeon.c 364 */;
	union cvmx_pci_cfg19 cocci_id/* arch/mips/pci/pci-octeon.c 363 */;
	union cvmx_pci_ctl_status_2 cocci_id/* arch/mips/pci/pci-octeon.c 362 */;
	union cvmx_npi_ctl_status cocci_id/* arch/mips/pci/pci-octeon.c 361 */;
	union cvmx_pci_cfg01 cocci_id/* arch/mips/pci/pci-octeon.c 360 */;
	struct pci_controller cocci_id/* arch/mips/pci/pci-octeon.c 345 */;
	struct resource cocci_id/* arch/mips/pci/pci-octeon.c 338 */;
	struct pci_ops cocci_id/* arch/mips/pci/pci-octeon.c 322 */;
	union octeon_pci_address cocci_id/* arch/mips/pci/pci-octeon.c 260 */;
	u32 *cocci_id/* arch/mips/pci/pci-octeon.c 258 */;
	struct pci_bus *cocci_id/* arch/mips/pci/pci-octeon.c 257 */;
	unsigned int cocci_id/* arch/mips/pci/pci-octeon.c 257 */;
	int cocci_id/* arch/mips/pci/pci-octeon.c 237 */;
	u8 cocci_id/* arch/mips/pci/pci-octeon.c 235 */;
	const struct pci_dev *cocci_id/* arch/mips/pci/pci-octeon.c 234 */;
	int __init cocci_id/* arch/mips/pci/pci-octeon.c 234 */;
	const char *cocci_id/* arch/mips/pci/pci-octeon.c 179 */;
	void cocci_id/* arch/mips/pci/pci-octeon.c 179 */;
}
