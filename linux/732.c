cocci_test_suite() {
	u8 **cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 98 */;
	u8 cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 96 */;
	u32 **cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 96 */;
	spinlock_t cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 83 */;
	u8 cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 78 */[1024];
	struct ev_hrt_ctrl {
		u8 bus;
		u8 device;
		u8 function;
		u8 mem_avail;
		u8 p_mem_avail;
		u8 io_avail;
		u8 bus_avail;
		u8 next;
	} cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 64 */;
	struct ev_hrt_header {
		u8 Version;
		u8 num_of_ctrl;
		u8 next;
	} cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 58 */;
	struct pci_resource cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 510 */;
	struct all_reg {
		struct register_foo eax_reg;
		struct register_foo ebx_reg;
		struct register_foo ecx_reg;
		struct register_foo edx_reg;
		struct register_foo edi_reg;
		struct register_foo esi_reg;
		struct register_foo eflags_reg;
	}__attribute__((packed)) cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 47 */;
	struct ev_hrt_header *cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 435 */;
	struct ev_hrt_ctrl *cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 434 */;
	struct pci_resource *cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 430 */;
	struct controller *cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 424 */;
	void cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 412 */;
	struct register_foo {
		union {
			unsigned long lword;
			unsigned short word;
			struct {
				unsigned char low;
				unsigned char high;
			} byte;
		} data;
		unsigned char opcode;
		unsigned long length;
	}__attribute__((packed)) cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 32 */;
	int cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 157 */;
	unsigned long cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 156 */;
	u32 cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 154 */;
	u16 cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 154 */;
	u8 *cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 154 */;
	u32 *cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 154 */;
	void __iomem *cocci_id/* drivers/pci/hotplug/cpqphp_nvram.c 130 */;
}
