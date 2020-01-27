cocci_test_suite() {
	void cocci_id/* drivers/ata/libata-transport.c 86 */(struct ata_device *dev);
	int cocci_id/* drivers/ata/libata-transport.c 85 */(struct ata_device *dev);
	void __exit cocci_id/* drivers/ata/libata-transport.c 806 */;
	struct ata_port cocci_id/* drivers/ata/libata-transport.c 79 */;
	struct ata_link cocci_id/* drivers/ata/libata-transport.c 74 */;
	struct ata_internal cocci_id/* drivers/ata/libata-transport.c 715 */;
	int cocci_id/* drivers/ata/libata-transport.c 713 */;
	struct ata_internal *cocci_id/* drivers/ata/libata-transport.c 712 */;
	struct scsi_transport_template *cocci_id/* drivers/ata/libata-transport.c 710 */;
	void cocci_id/* drivers/ata/libata-transport.c 710 */;
	struct ata_device cocci_id/* drivers/ata/libata-transport.c 69 */;
	struct ata_port *cocci_id/* drivers/ata/libata-transport.c 662 */;
	struct ata_link *cocci_id/* drivers/ata/libata-transport.c 661 */;
	struct device *cocci_id/* drivers/ata/libata-transport.c 660 */;
	struct ata_device *cocci_id/* drivers/ata/libata-transport.c 658 */;
	struct attribute_container *cocci_id/* drivers/ata/libata-transport.c 608 */;
	const struct device *cocci_id/* drivers/ata/libata-transport.c 603 */;
	unsigned char *cocci_id/* drivers/ata/libata-transport.c 571 */;
	struct ata_show_ering_arg cocci_id/* drivers/ata/libata-transport.c 517 */;
	struct device_attribute *cocci_id/* drivers/ata/libata-transport.c 514 */;
	char *cocci_id/* drivers/ata/libata-transport.c 514 */;
	ssize_t cocci_id/* drivers/ata/libata-transport.c 512 */;
	u32 cocci_id/* drivers/ata/libata-transport.c 501 */;
	u64 cocci_id/* drivers/ata/libata-transport.c 500 */;
	struct ata_show_ering_arg *cocci_id/* drivers/ata/libata-transport.c 499 */;
	struct ata_ering_entry *cocci_id/* drivers/ata/libata-transport.c 497 */;
	void *cocci_id/* drivers/ata/libata-transport.c 497 */;
	struct ata_show_ering_arg {
		char *buf;
		int written;
	} cocci_id/* drivers/ata/libata-transport.c 492 */;
	struct ata_internal {
		struct scsi_transport_template t;
		struct device_attribute private_port_attrs[ATA_PORT_ATTRS];
		struct device_attribute private_link_attrs[ATA_LINK_ATTRS];
		struct device_attribute private_dev_attrs[ATA_DEV_ATTRS];
		struct transport_container link_attr_cont;
		struct transport_container dev_attr_cont;
		struct device_attribute *link_attrs[ATA_LINK_ATTRS + 1];
		struct device_attribute *port_attrs[ATA_PORT_ATTRS + 1];
		struct device_attribute *dev_attrs[ATA_DEV_ATTRS + 1];
	} cocci_id/* drivers/ata/libata-transport.c 47 */;
	struct scsi_transport_template cocci_id/* drivers/ata/libata-transport.c 44 */;
	unsigned int cocci_id/* drivers/ata/libata-transport.c 220 */;
	unsigned long cocci_id/* drivers/ata/libata-transport.c 219 */;
	struct {
		u32 value;
		char *name;
	} cocci_id/* drivers/ata/libata-transport.c 133 */[];
}
