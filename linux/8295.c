cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 94 */;
	size_t cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 91 */;
	struct rtl_fw_phy_action *cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 90 */;
	bool cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 88 */;
	struct rtl_fw *cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 88 */;
	__le32 *cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 73 */;
	u8 cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 53 */;
	struct fw_info *cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 45 */;
	const struct firmware *cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 44 */;
	struct rtl_fw_phy_action cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 40 */;
	struct fw_info {
		u32 magic;
		char version[RTL_VER_SIZE];
		__le32 fw_start;
		__le32 fw_len;
		u8 chksum;
	}__packed cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 32 */;
	int cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 217 */;
	void cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 212 */;
	enum rtl_fw_opcode{PHY_READ=0x0, PHY_DATA_OR=0x1, PHY_DATA_AND=0x2, PHY_BJMPN=0x3, PHY_MDIO_CHG=0x4, PHY_CLEAR_READCOUNT=0x7, PHY_WRITE=0x8, PHY_READCOUNT_EQ_SKIP=0x9, PHY_COMP_EQ_SKIPN=0xa, PHY_COMP_NEQ_SKIPN=0xb, PHY_WRITE_PREVIOUS=0xc, PHY_SKIPN=0xd, PHY_DELAY_MS=0xe,} cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 16 */;
	enum rtl_fw_opcode cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 152 */;
	rtl_fw_read_t cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 144 */;
	rtl_fw_write_t cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 143 */;
	struct rtl8169_private *cocci_id/* drivers/net/ethernet/realtek/r8169_firmware.c 140 */;
}
