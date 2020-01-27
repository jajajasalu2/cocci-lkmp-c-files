cocci_test_suite() {
	struct nfp_sensors cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_cmds.c 73 */;
	long *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_cmds.c 71 */;
	enum nfp_nsp_sensor_id cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_cmds.c 70 */;
	struct nfp_cpp *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_cmds.c 70 */;
	struct nfp_sensors {
		__le32 chip_temp;
		__le32 assembly_power;
		__le32 assembly_12v_power;
		__le32 assembly_3v3_power;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_cmds.c 63 */;
	int cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_cmds.c 27 */;
	struct nsp_identify *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_cmds.c 26 */;
	struct nfp_nsp_identify *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_cmds.c 23 */;
	struct nfp_nsp *cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_cmds.c 23 */;
	struct nsp_identify {
		u8 version[40];
		u8 flags;
		u8 br_primary;
		u8 br_secondary;
		u8 br_nsp;
		__le16 primary;
		__le16 secondary;
		__le16 nsp;
		u8 reserved[6];
		__le64 sensor_mask;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/nfpcore/nfp_nsp_cmds.c 10 */;
}
