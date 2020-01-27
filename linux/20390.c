cocci_test_suite() {
	bool cocci_id/* arch/x86/kernel/apic/io_apic.c 962 */;
	struct irq_alloc_info *cocci_id/* arch/x86/kernel/apic/io_apic.c 960 */;
	struct irq_domain *cocci_id/* arch/x86/kernel/apic/io_apic.c 959 */;
	irq_flow_handler_t cocci_id/* arch/x86/kernel/apic/io_apic.c 924 */;
	struct mp_chip_data {
		struct list_head irq_2_pin;
		struct IO_APIC_route_entry entry;
		int trigger;
		int polarity;
		u32 count;
		bool isa_irq;
	} cocci_id/* arch/x86/kernel/apic/io_apic.c 91 */;
	int cocci_id/* arch/x86/kernel/apic/io_apic.c 883 */(u32 gsi,
							     int *trigger,
							     int *polarity);
	struct irq_pin_list {
		struct list_head list;
		int apic,pin;
	} cocci_id/* arch/x86/kernel/apic/io_apic.c 86 */;
	unsigned int cocci_id/* arch/x86/kernel/apic/io_apic.c 765 */;
	int cocci_id/* arch/x86/kernel/apic/io_apic.c 765 */;
	int cocci_id/* arch/x86/kernel/apic/io_apic.c 614 */[MAX_PIRQS + 1];
	int cocci_id/* arch/x86/kernel/apic/io_apic.c 607 */[MAX_PIRQS];
	struct IO_APIC_route_entry cocci_id/* arch/x86/kernel/apic/io_apic.c 515 */;
	void cocci_id/* arch/x86/kernel/apic/io_apic.c 510 */;
	void (*cocci_id/* arch/x86/kernel/apic/io_apic.c 440 */)(struct irq_pin_list *entry);
	struct irq_pin_list cocci_id/* arch/x86/kernel/apic/io_apic.c 384 */;
	struct irq_pin_list *cocci_id/* arch/x86/kernel/apic/io_apic.c 377 */;
	struct mp_chip_data *cocci_id/* arch/x86/kernel/apic/io_apic.c 374 */;
	union entry_union cocci_id/* arch/x86/kernel/apic/io_apic.c 309 */;
	const struct irq_domain_ops cocci_id/* arch/x86/kernel/apic/io_apic.c 3074 */;
	union entry_union {
		struct {
			u32 w1,w2;
		};
		struct IO_APIC_route_entry entry;
	} cocci_id/* arch/x86/kernel/apic/io_apic.c 302 */;
	irq_hw_number_t cocci_id/* arch/x86/kernel/apic/io_apic.c 2992 */;
	struct IO_APIC_route_entry *cocci_id/* arch/x86/kernel/apic/io_apic.c 2955 */;
	union IO_APIC_reg_02 cocci_id/* arch/x86/kernel/apic/io_apic.c 2760 */;
	void __iomem *cocci_id/* arch/x86/kernel/apic/io_apic.c 276 */;
	union IO_APIC_reg_01 cocci_id/* arch/x86/kernel/apic/io_apic.c 2759 */;
	union IO_APIC_reg_00 cocci_id/* arch/x86/kernel/apic/io_apic.c 2758 */;
	struct io_apic __iomem *cocci_id/* arch/x86/kernel/apic/io_apic.c 274 */;
	struct mp_ioapic_gsi *cocci_id/* arch/x86/kernel/apic/io_apic.c 2733 */;
	struct resource *cocci_id/* arch/x86/kernel/apic/io_apic.c 2665 */;
	struct io_apic {
		unsigned int index;
		unsigned int unused[3];
		unsigned int data;
		unsigned int unused2[11];
		unsigned int eoi;
	} cocci_id/* arch/x86/kernel/apic/io_apic.c 266 */;
	struct resource cocci_id/* arch/x86/kernel/apic/io_apic.c 2639 */;
	struct resource *__initcocci_id/* arch/x86/kernel/apic/io_apic.c 2629 */;
	u32 cocci_id/* arch/x86/kernel/apic/io_apic.c 2597 */;
	int *cocci_id/* arch/x86/kernel/apic/io_apic.c 2597 */;
	int __init cocci_id/* arch/x86/kernel/apic/io_apic.c 253 */;
	u8 cocci_id/* arch/x86/kernel/apic/io_apic.c 2529 */;
	physid_mask_t cocci_id/* arch/x86/kernel/apic/io_apic.c 2457 */;
	struct syscore_ops cocci_id/* arch/x86/kernel/apic/io_apic.c 2408 */;
	size_t cocci_id/* arch/x86/kernel/apic/io_apic.c 236 */;
	long cocci_id/* arch/x86/kernel/apic/io_apic.c 2330 */;
	struct fwnode_handle *cocci_id/* arch/x86/kernel/apic/io_apic.c 2305 */;
	struct ioapic_domain_cfg *cocci_id/* arch/x86/kernel/apic/io_apic.c 2303 */;
	struct ioapic *cocci_id/* arch/x86/kernel/apic/io_apic.c 2302 */;
	struct mpc_intsrc *cocci_id/* arch/x86/kernel/apic/io_apic.c 215 */;
	unsigned long cocci_id/* arch/x86/kernel/apic/io_apic.c 2133 */;
	struct irq_cfg *cocci_id/* arch/x86/kernel/apic/io_apic.c 2130 */;
	void __init cocci_id/* arch/x86/kernel/apic/io_apic.c 2126 */;
	struct irq_alloc_info cocci_id/* arch/x86/kernel/apic/io_apic.c 2105 */;
	char *cocci_id/* arch/x86/kernel/apic/io_apic.c 2092 */;
	struct irq_data *cocci_id/* arch/x86/kernel/apic/io_apic.c 2012 */;
	struct irq_chip cocci_id/* arch/x86/kernel/apic/io_apic.c 1944 */;
	bool *cocci_id/* arch/x86/kernel/apic/io_apic.c 1916 */;
	enum irqchip_irq_state cocci_id/* arch/x86/kernel/apic/io_apic.c 1915 */;
	const struct cpumask *cocci_id/* arch/x86/kernel/apic/io_apic.c 1885 */;
	int cocci_id/* arch/x86/kernel/apic/io_apic.c 187 */[MAX_MP_BUSSES];
	struct mpc_intsrc cocci_id/* arch/x86/kernel/apic/io_apic.c 181 */[MAX_IRQ_SOURCES];
	atomic_t cocci_id/* arch/x86/kernel/apic/io_apic.c 1702 */;
	unsigned long long cocci_id/* arch/x86/kernel/apic/io_apic.c 1588 */;
	unsigned char cocci_id/* arch/x86/kernel/apic/io_apic.c 1466 */;
	struct {
		int pin,apic;
	} cocci_id/* arch/x86/kernel/apic/io_apic.c 1364 */;
	struct irq_chip *cocci_id/* arch/x86/kernel/apic/io_apic.c 1342 */;
	union IO_APIC_reg_03 cocci_id/* arch/x86/kernel/apic/io_apic.c 1268 */;
	struct IR_IO_APIC_route_entry *cocci_id/* arch/x86/kernel/apic/io_apic.c 1238 */;
	void *cocci_id/* arch/x86/kernel/apic/io_apic.c 1238 */;
	char cocci_id/* arch/x86/kernel/apic/io_apic.c 1236 */[256];
	struct ioapic {
		int nr_registers;
		struct IO_APIC_route_entry *saved_registers;
		struct mpc_ioapic mp_config;
		struct mp_ioapic_gsi gsi_config;
		struct ioapic_domain_cfg irqdomain_cfg;
		struct irq_domain *irqdomain;
		struct resource *iomem_res;
	} cocci_id/* arch/x86/kernel/apic/io_apic.c 105 */[MAX_IO_APICS];
	struct mp_ioapic_gsi {
		u32 gsi_base;
		u32 gsi_end;
	} cocci_id/* arch/x86/kernel/apic/io_apic.c 100 */;
}
