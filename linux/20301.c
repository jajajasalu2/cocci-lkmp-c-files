cocci_test_suite() {
	struct sta2x11_instance *cocci_id/* arch/x86/pci/sta2x11-fixup.c 95 */;
	struct sta2x11_instance {
		struct list_head list;
		int bus0;
		struct sta2x11_mapping map[STA2X11_NR_EP];
	} cocci_id/* arch/x86/pci/sta2x11-fixup.c 37 */;
	struct sta2x11_mapping {
		int is_suspended;
		struct sta2x11_ahb_regs regs[STA2X11_NR_FUNCS];
	} cocci_id/* arch/x86/pci/sta2x11-fixup.c 32 */;
	struct sta2x11_ahb_regs {
		u32 base,pexlbase,pexhbase,crw;
	} cocci_id/* arch/x86/pci/sta2x11-fixup.c 28 */;
	struct sta2x11_ahb_regs *cocci_id/* arch/x86/pci/sta2x11-fixup.c 219 */;
	int cocci_id/* arch/x86/pci/sta2x11-fixup.c 207 */;
	struct sta2x11_mapping *cocci_id/* arch/x86/pci/sta2x11-fixup.c 206 */;
	struct pci_dev *cocci_id/* arch/x86/pci/sta2x11-fixup.c 204 */;
	void cocci_id/* arch/x86/pci/sta2x11-fixup.c 204 */;
	int cocci_id/* arch/x86/pci/sta2x11-fixup.c 18 */(size_t default_size);
	u32 cocci_id/* arch/x86/pci/sta2x11-fixup.c 135 */;
	struct device *cocci_id/* arch/x86/pci/sta2x11-fixup.c 134 */;
}
