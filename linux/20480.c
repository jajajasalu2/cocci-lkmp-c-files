cocci_test_suite() {
	const struct device_fixup *cocci_id/* arch/x86/kernel/reboot_fixups_32.c 84 */;
	const struct device_fixup cocci_id/* arch/x86/kernel/reboot_fixups_32.c 68 */[];
	struct device_fixup {
		unsigned int vendor;
		unsigned int device;
		void (*reboot_fixup)(struct pci_dev *);
	} cocci_id/* arch/x86/kernel/reboot_fixups_32.c 57 */;
	int cocci_id/* arch/x86/kernel/reboot_fixups_32.c 49 */;
	struct pci_dev *cocci_id/* arch/x86/kernel/reboot_fixups_32.c 47 */;
	void cocci_id/* arch/x86/kernel/reboot_fixups_32.c 47 */;
	unsigned cocci_id/* arch/x86/kernel/reboot_fixups_32.c 36 */;
}
