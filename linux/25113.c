cocci_test_suite() {
	struct pci_test {
		char *device;
		char barnum;
		bool legacyirq;
		unsigned int msinum;
		unsigned int msixnum;
		int irqtype;
		bool set_irqtype;
		bool get_irqtype;
		bool read;
		bool write;
		bool copy;
		unsigned long size;
	} cocci_id/* tools/pci/pcitest.c 24 */;
	char *cocci_id/* tools/pci/pcitest.c 22 */[];
	struct pci_test *cocci_id/* tools/pci/pcitest.c 139 */;
	char **cocci_id/* tools/pci/pcitest.c 136 */;
	int cocci_id/* tools/pci/pcitest.c 136 */;
}
