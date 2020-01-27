cocci_test_suite() {
	struct irq_routing_table *__initcocci_id/* arch/x86/pci/irq.c 94 */;
	char *cocci_id/* arch/x86/pci/irq.c 890 */;
	u32 cocci_id/* arch/x86/pci/irq.c 887 */;
	struct irq_info *cocci_id/* arch/x86/pci/irq.c 884 */;
	struct irq_info cocci_id/* arch/x86/pci/irq.c 871 */;
	struct irq_router_handler *cocci_id/* arch/x86/pci/irq.c 823 */;
	struct irq_router cocci_id/* arch/x86/pci/irq.c 811 */;
	struct irq_router_handler cocci_id/* arch/x86/pci/irq.c 796 */[];
	struct irq_routing_table cocci_id/* arch/x86/pci/irq.c 75 */;
	u16 cocci_id/* arch/x86/pci/irq.c 745 */;
	struct pci_dev *cocci_id/* arch/x86/pci/irq.c 745 */;
	struct irq_router *cocci_id/* arch/x86/pci/irq.c 745 */;
	u8 *cocci_id/* arch/x86/pci/irq.c 65 */;
	void (*cocci_id/* arch/x86/pci/irq.c 58 */)(struct pci_dev *dev);
	int (*cocci_id/* arch/x86/pci/irq.c 57 */)(struct pci_dev *dev);
	struct pci_device_id __initdata cocci_id/* arch/x86/pci/irq.c 541 */[];
	struct irq_router_handler {
		u16 vendor;
		int (*probe)(struct irq_router *r, struct pci_dev *router,
			     u16 device);
	} cocci_id/* arch/x86/pci/irq.c 52 */;
	struct irq_router {
		char *name;
		u16 vendor,device;
		int (*get)(struct pci_dev *router, struct pci_dev *dev,
			   int pirq);
		int (*set)(struct pci_dev *router, struct pci_dev *dev,
			   int pirq, int new);
	} cocci_id/* arch/x86/pci/irq.c 44 */;
	int cocci_id/* arch/x86/pci/irq.c 39 */[16];
	void cocci_id/* arch/x86/pci/irq.c 30 */(struct pci_dev *dev);
	int cocci_id/* arch/x86/pci/irq.c 29 */(struct pci_dev *dev);
	const unsigned char cocci_id/* arch/x86/pci/irq.c 285 */[4];
	const unsigned int cocci_id/* arch/x86/pci/irq.c 263 */[5];
	int cocci_id/* arch/x86/pci/irq.c 25 */;
	const unsigned char cocci_id/* arch/x86/pci/irq.c 203 */[16];
	unsigned cocci_id/* arch/x86/pci/irq.c 176 */;
	unsigned char cocci_id/* arch/x86/pci/irq.c 155 */;
	unsigned int cocci_id/* arch/x86/pci/irq.c 153 */;
	void cocci_id/* arch/x86/pci/irq.c 153 */;
	bool cocci_id/* arch/x86/pci/irq.c 1268 */;
	struct device *cocci_id/* arch/x86/pci/irq.c 1268 */;
	u8 cocci_id/* arch/x86/pci/irq.c 122 */[256];
	struct irq_routing_table *cocci_id/* arch/x86/pci/irq.c 1122 */;
	const struct dmi_system_id cocci_id/* arch/x86/pci/irq.c 1097 */[]__initconst;
	const struct dmi_system_id *cocci_id/* arch/x86/pci/irq.c 1087 */;
	int __init cocci_id/* arch/x86/pci/irq.c 1087 */;
	u8 cocci_id/* arch/x86/pci/irq.c 1029 */;
	void __init cocci_id/* arch/x86/pci/irq.c 1026 */;
}
