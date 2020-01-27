cocci_test_suite() {
	struct rave_sp_deframer {
		enum rave_sp_deframer_state state;
		unsigned char data[RAVE_SP_RX_BUFFER_SIZE];
		size_t length;
	} cocci_id/* drivers/mfd/rave-sp.c 86 */;
	struct serdev_device_driver cocci_id/* drivers/mfd/rave-sp.c 830 */;
	u32 cocci_id/* drivers/mfd/rave-sp.c 773 */;
	struct serdev_device *cocci_id/* drivers/mfd/rave-sp.c 768 */;
	const struct serdev_device_ops cocci_id/* drivers/mfd/rave-sp.c 763 */;
	const struct of_device_id cocci_id/* drivers/mfd/rave-sp.c 754 */[];
	const struct rave_sp_variant cocci_id/* drivers/mfd/rave-sp.c 730 */;
	enum rave_sp_deframer_state{RAVE_SP_EXPECT_SOF, RAVE_SP_EXPECT_DATA, RAVE_SP_EXPECT_ESCAPED_DATA,} cocci_id/* drivers/mfd/rave-sp.c 73 */;
	const struct rave_sp_checksum cocci_id/* drivers/mfd/rave-sp.c 720 */;
	struct rave_sp_status cocci_id/* drivers/mfd/rave-sp.c 697 */;
	u8 cocci_id/* drivers/mfd/rave-sp.c 678 */[];
	struct rave_sp_status *cocci_id/* drivers/mfd/rave-sp.c 676 */;
	struct rave_sp_version *cocci_id/* drivers/mfd/rave-sp.c 649 */;
	const char *cocci_id/* drivers/mfd/rave-sp.c 648 */;
	enum rave_sp_command cocci_id/* drivers/mfd/rave-sp.c 619 */;
	const unsigned char cocci_id/* drivers/mfd/rave-sp.c 484 */;
	struct rave_sp_deframer *cocci_id/* drivers/mfd/rave-sp.c 479 */;
	const unsigned char *cocci_id/* drivers/mfd/rave-sp.c 475 */;
	u8 cocci_id/* drivers/mfd/rave-sp.c 445 */[RAVE_SP_CHECKSUM_SIZE];
	const size_t cocci_id/* drivers/mfd/rave-sp.c 441 */;
	struct rave_sp_reply *cocci_id/* drivers/mfd/rave-sp.c 407 */;
	u8 cocci_id/* drivers/mfd/rave-sp.c 353 */;
	unsigned char *cocci_id/* drivers/mfd/rave-sp.c 351 */;
	struct rave_sp_reply cocci_id/* drivers/mfd/rave-sp.c 346 */;
	void *cocci_id/* drivers/mfd/rave-sp.c 343 */;
	unsigned char cocci_id/* drivers/mfd/rave-sp.c 286 */[RAVE_SP_CHECKSUM_SIZE];
	unsigned char cocci_id/* drivers/mfd/rave-sp.c 285 */[RAVE_SP_TX_BUFFER_SIZE];
	const u16 cocci_id/* drivers/mfd/rave-sp.c 254 */;
	const u8 *cocci_id/* drivers/mfd/rave-sp.c 241 */;
	u8 *cocci_id/* drivers/mfd/rave-sp.c 241 */;
	size_t cocci_id/* drivers/mfd/rave-sp.c 241 */;
	void cocci_id/* drivers/mfd/rave-sp.c 241 */;
	struct notifier_block **cocci_id/* drivers/mfd/rave-sp.c 221 */;
	struct rave_sp *cocci_id/* drivers/mfd/rave-sp.c 220 */;
	struct notifier_block *cocci_id/* drivers/mfd/rave-sp.c 218 */;
	struct device *cocci_id/* drivers/mfd/rave-sp.c 217 */;
	int cocci_id/* drivers/mfd/rave-sp.c 217 */;
	struct blocking_notifier_head *cocci_id/* drivers/mfd/rave-sp.c 212 */;
	bool cocci_id/* drivers/mfd/rave-sp.c 203 */;
	struct rave_sp {
		struct serdev_device *serdev;
		struct rave_sp_deframer deframer;
		atomic_t ackid;
		struct mutex bus_lock;
		struct mutex reply_lock;
		struct rave_sp_reply *reply;
		const struct rave_sp_variant *variant;
		struct blocking_notifier_head event_notifier_list;
		const char *part_number_firmware;
		const char *part_number_bootloader;
	} cocci_id/* drivers/mfd/rave-sp.c 188 */;
	struct rave_sp_variant {
		const struct rave_sp_checksum *checksum;
		struct rave_sp_variant_cmds cmd;
	} cocci_id/* drivers/mfd/rave-sp.c 167 */;
	struct rave_sp_variant_cmds {
		int (*translate)(enum rave_sp_command);
		int (*get_status)(struct rave_sp *sp, struct rave_sp_status *);
	} cocci_id/* drivers/mfd/rave-sp.c 155 */;
	struct rave_sp_status {
		struct rave_sp_version bootloader_version;
		struct rave_sp_version firmware_version;
		u16 rdu_eeprom_flag;
		u16 dds_eeprom_flag;
		u8 pic_flag;
		u8 orientation;
		u32 etc;
		s16 temp[2];
		u8 backlight_current[3];
		u8 dip_switch;
		u8 host_interrupt;
		u16 voltage_28;
		u8 i2c_device_status;
		u8 power_status;
		u8 general_status;
		u8 deprecated1;
		u8 power_led_status;
		u8 deprecated2;
		u8 periph_power_shutoff;
	}__packed cocci_id/* drivers/mfd/rave-sp.c 127 */;
	struct rave_sp_version {
		u8 hardware;
		__le16 major;
		u8 minor;
		u8 letter[2];
	}__packed cocci_id/* drivers/mfd/rave-sp.c 120 */;
	struct rave_sp_checksum {
		size_t length;
		void (*subroutine)(const u8 *, size_t, u8 *);
	} cocci_id/* drivers/mfd/rave-sp.c 115 */;
	struct rave_sp_reply {
		size_t length;
		void *data;
		u8 code;
		u8 ackid;
		struct completion received;
	} cocci_id/* drivers/mfd/rave-sp.c 101 */;
}
