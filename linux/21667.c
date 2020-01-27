cocci_test_suite() {
	int cocci_id/* arch/s390/pci/pci_event.c 79 */;
	enum zpci_state cocci_id/* arch/s390/pci/pci_event.c 78 */;
	struct pci_dev *cocci_id/* arch/s390/pci/pci_event.c 77 */;
	struct zpci_dev *cocci_id/* arch/s390/pci/pci_event.c 76 */;
	struct zpci_ccdf_avail *cocci_id/* arch/s390/pci/pci_event.c 74 */;
	void cocci_id/* arch/s390/pci/pci_event.c 74 */;
	struct zpci_ccdf_err *cocci_id/* arch/s390/pci/pci_event.c 47 */;
	struct zpci_ccdf_avail {
		u32 reserved1;
		u32 fh;
		u32 fid;
		u32 reserved2;
		u32 reserved3;
		u32 reserved4;
		u32 reserved5;
		u16 reserved6;
		u16 pec;
	}__packed cocci_id/* arch/s390/pci/pci_event.c 35 */;
	struct zpci_ccdf_err {
		u32 reserved1;
		u32 fh;
		u32 fid;
		u32 ett:4;
		u32 mvn:12;
		u32 dmaas:8;
		u32:6;
		u32 q:1;
		u32 rw:1;
		u64 faddr;
		u32 reserved3;
		u16 reserved4;
		u16 pec;
	}__packed cocci_id/* arch/s390/pci/pci_event.c 18 */;
	void *cocci_id/* arch/s390/pci/pci_event.c 160 */;
}
