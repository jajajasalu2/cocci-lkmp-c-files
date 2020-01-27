cocci_test_suite() {
	enum acpi_smb_offset{ACPI_SMB_PROTOCOL=0, ACPI_SMB_STATUS=1, ACPI_SMB_ADDRESS=2, ACPI_SMB_COMMAND=3, ACPI_SMB_DATA=4, ACPI_SMB_BLOCK_COUNT=0x24, ACPI_SMB_ALARM_ADDRESS=0x25, ACPI_SMB_ALARM_DATA=0x26,} cocci_id/* drivers/acpi/sbshc.c 77 */;
	enum acpi_smb_status_codes{SMBUS_OK=0, SMBUS_UNKNOWN_FAILURE=0x07, SMBUS_DEVICE_ADDRESS_NACK=0x10, SMBUS_DEVICE_ERROR=0x11, SMBUS_DEVICE_COMMAND_ACCESS_DENIED=0x12, SMBUS_UNKNOWN_ERROR=0x13, SMBUS_DEVICE_ACCESS_DENIED=0x17, SMBUS_TIMEOUT=0x18, SMBUS_HOST_UNSUPPORTED_PROTOCOL=0x19, SMBUS_BUSY=0x1a, SMBUS_PEC_ERROR=0x1f,} cocci_id/* drivers/acpi/sbshc.c 63 */;
	union acpi_smb_status {
		u8 raw;
		struct {
			u8 status:5;
			u8 reserved:1;
			u8 alarm:1;
			u8 done:1;
		} fields;
	} cocci_id/* drivers/acpi/sbshc.c 53 */;
	struct acpi_driver cocci_id/* drivers/acpi/sbshc.c 43 */;
	const struct acpi_device_id cocci_id/* drivers/acpi/sbshc.c 35 */[];
	int cocci_id/* drivers/acpi/sbshc.c 32 */(struct acpi_device *device);
	void cocci_id/* drivers/acpi/sbshc.c 282 */(struct acpi_ec *ec,
						    u8 query_bit);
	struct acpi_smb_hc cocci_id/* drivers/acpi/sbshc.c 264 */;
	unsigned long long cocci_id/* drivers/acpi/sbshc.c 249 */;
	struct acpi_device *cocci_id/* drivers/acpi/sbshc.c 246 */;
	int cocci_id/* drivers/acpi/sbshc.c 246 */;
	int cocci_id/* drivers/acpi/sbshc.c 242 */(struct acpi_ec *ec,
						   u8 query_bit,
						   acpi_handle handle,
						   acpi_ec_query_func func,
						   void *data);
	int (*cocci_id/* drivers/acpi/sbshc.c 240 */)(void *data);
	union acpi_smb_status cocci_id/* drivers/acpi/sbshc.c 212 */;
	struct acpi_smb_hc {
		struct acpi_ec *ec;
		struct mutex lock;
		wait_queue_head_t wait;
		u8 offset;
		u8 query_bit;
		smbus_alarm_callback callback;
		void *context;
		bool done;
	} cocci_id/* drivers/acpi/sbshc.c 21 */;
	struct acpi_smb_hc *cocci_id/* drivers/acpi/sbshc.c 204 */;
	void *cocci_id/* drivers/acpi/sbshc.c 202 */;
	void cocci_id/* drivers/acpi/sbshc.c 202 */;
	smbus_alarm_callback cocci_id/* drivers/acpi/sbshc.c 179 */;
	u8 *cocci_id/* drivers/acpi/sbshc.c 163 */;
	u8 cocci_id/* drivers/acpi/sbshc.c 162 */;
}
