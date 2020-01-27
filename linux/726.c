cocci_test_suite() {
	struct bin_attribute cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 96 */;
	struct notification cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 95 */;
	acpi_handle cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 94 */;
	void __exit cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 92 */(void);
	int __init cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 91 */(void);
	acpi_status __init cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 89 */(acpi_handle handle,
									      u32 lvl,
									      void *context,
									      void **rv);
	ssize_t cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 86 */(struct file *filp,
								   struct kobject *kobj,
								   struct bin_attribute *bin_attr,
								   char *buffer,
								   loff_t pos,
								   size_t size);
	int cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 85 */(char **bufp);
	void cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 84 */(acpi_handle handle,
								u32 event,
								void *context);
	int cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 83 */(struct hotplug_slot *slot,
							       u8 *status);
	int cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 82 */(struct hotplug_slot *slot,
							       u8 status);
	struct notification {
		struct acpi_device *device;
		u8 event;
	} cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 77 */;
	union apci_descriptor {
		struct {
			char sig[4];
			u8 len;
		} header;
		struct {
			u8 type;
			u8 len;
			u16 slot_id;
			u8 bus_id;
			u8 dev_num;
			u8 slot_num;
			u8 slot_attr[2];
			u8 attn;
			u8 status[2];
			u8 sun;
			u8 res[3];
		} slot;
		struct {
			u8 type;
			u8 len;
		} generic;
	} cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 50 */;
	struct kobject *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 471 */;
	acpi_status cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 470 */;
	void __exit cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 468 */;
	void cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 468 */;
	struct acpi_device *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 423 */;
	int cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 421 */;
	int __init cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 419 */;
	struct acpi_device_info *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 390 */;
	unsigned long long cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 388 */;
	acpi_handle *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 387 */;
	u32 cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 385 */;
	void **cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 385 */;
	void *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 385 */;
	acpi_status __init cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 384 */;
	loff_t cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 357 */;
	size_t cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 357 */;
	struct bin_attribute *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 356 */;
	struct file *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 355 */;
	ssize_t cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 355 */;
	char *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 287 */;
	struct acpi_buffer cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 285 */;
	union acpi_object *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 284 */;
	char **cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 282 */;
	struct notification *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 255 */;
	u8 cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 253 */;
	union apci_descriptor *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 211 */;
	u8 *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 209 */;
	struct hotplug_slot *cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 209 */;
	struct acpi_object_list cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 163 */;
	union acpi_object cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 162 */[2];
	union apci_descriptor cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 144 */;
	struct acpiphp_attention_info cocci_id/* drivers/pci/hotplug/acpiphp_ibm.c 104 */;
}
