cocci_test_suite() {
	struct dentry *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 97 */;
	const char __user *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 934 */;
	u16 cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 915 */;
	u8 *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 915 */;
	int cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 909 */;
	struct idt_89hpesx_dev *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 908 */;
	loff_t cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 906 */;
	char *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 906 */;
	size_t cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 906 */;
	struct bin_attribute *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 905 */;
	struct kobject *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 904 */;
	struct file *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 904 */;
	ssize_t cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 904 */;
	struct idt_smb_seq cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 819 */;
	struct idt_csr_seq cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 818 */;
	u32 *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 815 */;
	const u32 cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 750 */;
	const u8 *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 648 */;
	struct idt_eeprom_seq cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 579 */;
	u8 cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 481 */;
	s32 cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 480 */;
	struct idt_smb_seq *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 478 */;
	const struct idt_smb_seq *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 455 */;
	u16 *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 427 */;
	struct idt_csr_seq {
		u8 cmd;
		u16 csraddr;
		u32 data;
	}__packed cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 173 */;
	void __exit cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1610 */;
	struct idt_eeprom_seq {
		u8 cmd;
		u8 eeaddr;
		u16 memaddr;
		u8 data;
	}__packed cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 160 */;
	int __init cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1596 */;
	struct i2c_driver cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1583 */;
	const struct of_device_id cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1524 */[];
	struct idt_smb_seq {
		u8 ccode;
		u8 bytecnt;
		u8 *data;
	} cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 147 */;
	char cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1372 */[CSRNAME_LEN];
	struct i2c_client *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1371 */;
	void cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1369 */;
	u32 cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1286 */;
	struct device *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1285 */;
	struct i2c_adapter *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1221 */;
	struct idt_89hpesx_dev {
		u32 eesize;
		bool eero;
		u8 eeaddr;
		u8 inieecmd;
		u8 inicsrcmd;
		u8 iniccode;
		u16 csr;
		int (*smb_write)(struct idt_89hpesx_dev *,
				 const struct idt_smb_seq *);
		int (*smb_read)(struct idt_89hpesx_dev *,
				struct idt_smb_seq *);
		struct mutex smb_mtx;
		struct i2c_client *client;
		struct bin_attribute *ee_file;
		struct dentry *csr_dir;
	} cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 120 */;
	struct idt_89hpesx_dev cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1177 */;
	char cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1097 */[I2C_NAME_SIZE];
	const char *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1096 */;
	const struct i2c_device_id *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1093 */;
	struct fwnode_handle *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1093 */;
	const struct i2c_device_id cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1088 */[];
	const struct file_operations cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1063 */;
	unsigned int cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1046 */;
	char cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1033 */[CSRBUF_SIZE];
	loff_t *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1029 */;
	char __user *cocci_id/* drivers/misc/eeprom/idt_89hpesx.c 1028 */;
}
