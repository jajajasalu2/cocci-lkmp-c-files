cocci_test_suite() {
	enum tb_eeprom_transfer cocci_id/* drivers/thunderbolt/eeprom.c 71 */;
	struct tb_drom_header *cocci_id/* drivers/thunderbolt/eeprom.c 430 */;
	struct tb_eeprom_ctl cocci_id/* drivers/thunderbolt/eeprom.c 43 */;
	struct tb_drom_header cocci_id/* drivers/thunderbolt/eeprom.c 418 */;
	struct device *cocci_id/* drivers/thunderbolt/eeprom.c 414 */;
	u16 *cocci_id/* drivers/thunderbolt/eeprom.c 412 */;
	struct tb_switch *cocci_id/* drivers/thunderbolt/eeprom.c 412 */;
	bool cocci_id/* drivers/thunderbolt/eeprom.c 41 */;
	struct tb_drom_entry_header *cocci_id/* drivers/thunderbolt/eeprom.c 386 */;
	u16 cocci_id/* drivers/thunderbolt/eeprom.c 381 */;
	struct tb_drom_entry_port cocci_id/* drivers/thunderbolt/eeprom.c 362 */;
	struct tb_drom_entry_port *cocci_id/* drivers/thunderbolt/eeprom.c 358 */;
	enum tb_port_type cocci_id/* drivers/thunderbolt/eeprom.c 336 */;
	struct tb_port *cocci_id/* drivers/thunderbolt/eeprom.c 334 */;
	const struct tb_drom_entry_generic *cocci_id/* drivers/thunderbolt/eeprom.c 308 */;
	enum tb_eeprom_transfer{TB_EEPROM_IN, TB_EEPROM_OUT,} cocci_id/* drivers/thunderbolt/eeprom.c 30 */;
	u8 cocci_id/* drivers/thunderbolt/eeprom.c 279 */[9];
	u64 *cocci_id/* drivers/thunderbolt/eeprom.c 277 */;
	struct tb_eeprom_ctl *cocci_id/* drivers/thunderbolt/eeprom.c 25 */;
	struct tb_cap_plug_events cocci_id/* drivers/thunderbolt/eeprom.c 246 */;
	struct tb_drom_entry_port {
		struct tb_drom_entry_header header;
		u8 dual_link_port_rid:4;
		u8 link_nr:1;
		u8 unknown1:2;
		bool has_dual_link_port:1;
		u8 dual_link_port_nr:6;
		u8 unknown2:2;
		u8 micro2:4;
		u8 micro1:4;
		u8 micro3;
		u8 peer_port_rid:4;
		u8 unknown3:3;
		bool has_peer_port:1;
		u8 peer_port_nr:6;
		u8 unknown4:2;
	}__packed cocci_id/* drivers/thunderbolt/eeprom.c 214 */;
	struct tb_drom_entry_generic {
		struct tb_drom_entry_header header;
		u8 data[0];
	}__packed cocci_id/* drivers/thunderbolt/eeprom.c 209 */;
	struct tb_drom_entry_header {
		u8 len;
		u8 index:6;
		bool port_disabled:1;
		enum tb_drom_entry_type type:1;
	}__packed cocci_id/* drivers/thunderbolt/eeprom.c 202 */;
	enum tb_drom_entry_type{TB_DROM_ENTRY_GENERIC=0U, TB_DROM_ENTRY_PORT,} cocci_id/* drivers/thunderbolt/eeprom.c 196 */;
	struct tb_drom_header {
		u8 uid_crc8;
		u64 uid;
		u32 data_crc32;
		u8 device_rom_revision;
		u16 data_len:10;
		u8 __unknown1:6;
		u16 vendor_id;
		u16 model_id;
		u8 model_rev;
		u8 eeprom_rev;
	}__packed cocci_id/* drivers/thunderbolt/eeprom.c 178 */;
	u32 cocci_id/* drivers/thunderbolt/eeprom.c 172 */;
	void *cocci_id/* drivers/thunderbolt/eeprom.c 172 */;
	size_t cocci_id/* drivers/thunderbolt/eeprom.c 172 */;
	u8 cocci_id/* drivers/thunderbolt/eeprom.c 160 */;
	u8 *cocci_id/* drivers/thunderbolt/eeprom.c 160 */;
	int cocci_id/* drivers/thunderbolt/eeprom.c 160 */;
}
