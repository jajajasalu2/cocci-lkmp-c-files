cocci_test_suite() {
	struct pn544_i2c_fw_blob {
		u32 be_size;
		u32 be_destaddr;
		u8 data[];
	} cocci_id/* drivers/nfc/pn544/i2c.c 97 */;
	struct i2c_driver cocci_id/* drivers/nfc/pn544/i2c.c 959 */;
	const struct of_device_id cocci_id/* drivers/nfc/pn544/i2c.c 953 */[];
	struct pn544_i2c_fw_frame_response {
		u8 status;
		u16 be_length;
	}__packed cocci_id/* drivers/nfc/pn544/i2c.c 92 */;
	struct device *cocci_id/* drivers/nfc/pn544/i2c.c 873 */;
	const struct i2c_device_id *cocci_id/* drivers/nfc/pn544/i2c.c 871 */;
	const struct acpi_gpio_mapping cocci_id/* drivers/nfc/pn544/i2c.c 864 */[];
	const struct acpi_gpio_params cocci_id/* drivers/nfc/pn544/i2c.c 861 */;
	struct pn544_i2c_fw_frame_check {
		u8 cmd;
		u16 be_length;
		u8 be_start_addr[3];
		u16 be_datalen;
		u16 be_crc;
	}__packed cocci_id/* drivers/nfc/pn544/i2c.c 84 */;
	struct pn544_i2c_fw_frame_write {
		u8 cmd;
		u16 be_length;
		u8 be_dest_addr[3];
		u16 be_datalen;
		u8 data[];
	}__packed cocci_id/* drivers/nfc/pn544/i2c.c 76 */;
	struct pn544_i2c_fw_secure_blob *cocci_id/* drivers/nfc/pn544/i2c.c 742 */;
	struct pn544_i2c_fw_blob *cocci_id/* drivers/nfc/pn544/i2c.c 741 */;
	struct pn544_i2c_phy cocci_id/* drivers/nfc/pn544/i2c.c 738 */;
	struct work_struct *cocci_id/* drivers/nfc/pn544/i2c.c 736 */;
	struct pn544_i2c_fw_secure_frame *cocci_id/* drivers/nfc/pn544/i2c.c 690 */;
	u8 cocci_id/* drivers/nfc/pn544/i2c.c 659 */[PN544_FW_I2C_MAX_PAYLOAD];
	const char *cocci_id/* drivers/nfc/pn544/i2c.c 629 */;
	struct pn544_i2c_fw_frame_check cocci_id/* drivers/nfc/pn544/i2c.c 603 */;
	const u8 *cocci_id/* drivers/nfc/pn544/i2c.c 601 */;
	u32 cocci_id/* drivers/nfc/pn544/i2c.c 600 */;
	struct i2c_client *cocci_id/* drivers/nfc/pn544/i2c.c 600 */;
	struct pn544_i2c_fw_frame_write *cocci_id/* drivers/nfc/pn544/i2c.c 563 */;
	const struct acpi_device_id cocci_id/* drivers/nfc/pn544/i2c.c 53 */[];
	u8 cocci_id/* drivers/nfc/pn544/i2c.c 526 */;
	struct nfc_phy_ops cocci_id/* drivers/nfc/pn544/i2c.c 519 */;
	irqreturn_t cocci_id/* drivers/nfc/pn544/i2c.c 481 */;
	const struct i2c_device_id cocci_id/* drivers/nfc/pn544/i2c.c 46 */[];
	char *cocci_id/* drivers/nfc/pn544/i2c.c 422 */;
	struct pn544_i2c_fw_frame_response cocci_id/* drivers/nfc/pn544/i2c.c 419 */;
	u8 cocci_id/* drivers/nfc/pn544/i2c.c 361 */[PN544_HCI_I2C_LLC_MAX_SIZE - 1];
	struct sk_buff **cocci_id/* drivers/nfc/pn544/i2c.c 357 */;
	u16 cocci_id/* drivers/nfc/pn544/i2c.c 331 */;
	u8 *cocci_id/* drivers/nfc/pn544/i2c.c 328 */;
	int cocci_id/* drivers/nfc/pn544/i2c.c 328 */;
	struct sk_buff *cocci_id/* drivers/nfc/pn544/i2c.c 269 */;
	void cocci_id/* drivers/nfc/pn544/i2c.c 269 */;
	struct pn544_i2c_phy *cocci_id/* drivers/nfc/pn544/i2c.c 254 */;
	void *cocci_id/* drivers/nfc/pn544/i2c.c 252 */;
	char cocci_id/* drivers/nfc/pn544/i2c.c 191 */[];
	struct pn544_i2c_phy {
		struct i2c_client *i2c_dev;
		struct nfc_hci_dev *hdev;
		struct gpio_desc *gpiod_en;
		struct gpio_desc *gpiod_fw;
		unsigned int en_polarity;
		u8 hw_variant;
		struct work_struct fw_work;
		int fw_work_state;
		char firmware_name[NFC_FIRMWARE_NAME_MAXSIZE + 1];
		const struct firmware *fw;
		u32 fw_blob_dest_addr;
		size_t fw_blob_size;
		const u8 *fw_blob_data;
		size_t fw_written;
		size_t fw_size;
		int fw_cmd_result;
		int powered;
		int run_mode;
		int hard_fault;
	} cocci_id/* drivers/nfc/pn544/i2c.c 149 */;
	struct pn544_i2c_fw_secure_blob {
		u64 header;
		u8 data[];
	} cocci_id/* drivers/nfc/pn544/i2c.c 109 */;
	struct pn544_i2c_fw_secure_frame {
		u8 cmd;
		u16 be_datalen;
		u8 data[];
	}__packed cocci_id/* drivers/nfc/pn544/i2c.c 103 */;
}
