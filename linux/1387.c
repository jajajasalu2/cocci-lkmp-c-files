cocci_test_suite() {
	enum enum_flash_mode cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 993 */;
	struct ccg_dev_info {
#define CCG_DEVINFO_FWMODE_SHIFT (0)
#define CCG_DEVINFO_FWMODE_MASK (0x3 << CCG_DEVINFO_FWMODE_SHIFT)
#define CCG_DEVINFO_PDPORTS_SHIFT (2)
#define CCG_DEVINFO_PDPORTS_MASK (0x3 << CCG_DEVINFO_PDPORTS_SHIFT)
						u8 mode;
		u8 bl_mode;
		__le16 silicon_id;
		__le16 bl_last_row;
	}__packed cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 97 */;
	const char *const cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 91 */[];
	u8 cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 835 */[FW_CFG_TABLE_SIG_SIZE];
	enum enum_flash_mode{SECONDARY_BL, PRIMARY, SECONDARY, FLASH_NOT_NEEDED, FLASH_INVALID,} cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 83 */;
	struct version_info cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 803 */;
	struct version_info cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 786 */[3];
	enum enum_flash_mode *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 782 */;
	uint8_t *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 754 */;
	u32 cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 739 */;
	struct fw_config_table cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 738 */;
	struct device *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 737 */;
	const struct firmware *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 736 */;
	struct version_format *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 734 */;
	bool cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 733 */;
	const char *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 733 */;
	struct ucsi_ccg *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 733 */;
	struct fw_config_table *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 715 */;
	unsigned int cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 691 */;
	u8 cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 648 */[CCG4_ROW_SIZE + 2];
	struct i2c_client *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 646 */;
	u8 cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 644 */;
	const void *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 644 */;
	u16 cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 643 */;
	u8 *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 554 */;
	struct ccg_cmd cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 529 */;
	int cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 527 */;
	struct ccg_cmd *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 489 */;
	unsigned long cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 454 */;
	struct ucsi_ccg cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 400 */;
	struct work_struct *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 398 */;
	void cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 398 */;
	irqreturn_t cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 369 */;
	void *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 369 */;
	const struct ucsi_operations cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 363 */;
	struct ucsi *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 330 */;
	unsigned char *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 251 */;
	const u8 *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 248 */;
	enum enum_fw_mode{BOOT, FW1, FW2, FW_INVALID,} cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 23 */;
	struct i2c_msg cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 208 */[];
	unsigned char cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 207 */[2];
	const struct i2c_adapter_quirks *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 206 */;
	struct ucsi_ccg {
		struct device *dev;
		struct ucsi *ucsi;
		struct i2c_client *client;
		struct ccg_dev_info info;
		struct version_info version[FW2 + 1];
		u32 fw_version;
		unsigned long flags;
#define RESET_PENDING 0
#define DEV_CMD_PENDING 1
		struct ccg_resp dev_resp;
		u8 cmd_resp;
		int port_num;
		int irq;
		struct work_struct work;
		struct mutex lock;
		u16 fw_build;
		struct work_struct pm_work;
		struct completion complete;
	} cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 176 */;
	struct ccg_resp {
		u8 code;
		u8 length;
	} cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 171 */;
	struct ccg_cmd {
		u16 reg;
		u32 data;
		int len;
		u32 delay;
	} cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 164 */;
	enum ccg_resp_code{CMD_NO_RESP=0x00, CMD_SUCCESS=0x02, FLASH_DATA_AVAILABLE=0x03, CMD_INVALID=0x05, FLASH_UPDATE_FAIL=0x07, INVALID_FW=0x08, INVALID_ARG=0x09, CMD_NOT_SUPPORT=0x0A, TRANSACTION_FAIL=0x0C, PD_CMD_FAIL=0x0D, UNDEF_ERROR=0x0F, INVALID_RESP=0x10,} cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 147 */;
	struct fw_config_table {
		u32 identity;
		u16 table_size;
		u8 fwct_version;
		u8 is_key_change;
		u8 guid[16];
		struct version_format base;
		struct version_format app;
		u8 primary_fw_digest[32];
		u32 key_exp_length;
		u8 key_modulus[256];
		u8 key_exp[4];
	} cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 132 */;
	struct version_info {
		struct version_format base;
		struct version_format app;
	} cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 127 */;
	struct i2c_driver cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 1223 */;
	const struct dev_pm_ops cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 1217 */;
	const struct i2c_device_id cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 1181 */[];
	const struct i2c_device_id *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 1088 */;
	struct attribute *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 1081 */[];
	struct version_format {
		__le16 build;
		u8 patch;
		u8 ver;
#define CCG_VERSION_PATCH (x)((x) << 16)
#define CCG_VERSION (x)((x) << 24)
#define CCG_VERSION_MIN_SHIFT (0)
#define CCG_VERSION_MIN_MASK (0xf << CCG_VERSION_MIN_SHIFT)
#define CCG_VERSION_MAJ_SHIFT (4)
#define CCG_VERSION_MAJ_MASK (0xf << CCG_VERSION_MAJ_SHIFT)
									}__packed cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 108 */;
	size_t cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 1059 */;
	struct device_attribute *cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 1058 */;
	ssize_t cocci_id/* drivers/usb/typec/ucsi/ucsi_ccg.c 1057 */;
}
