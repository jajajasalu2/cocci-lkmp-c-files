cocci_test_suite() {
	enum iwl_phy_db_section_type{IWL_PHY_DB_CFG=1, IWL_PHY_DB_CALIB_NCH, IWL_PHY_DB_UNUSED, IWL_PHY_DB_CALIB_CHG_PAPD, IWL_PHY_DB_CALIB_CHG_TXP, IWL_PHY_DB_MAX,} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 99 */;
	struct iwl_phy_db {
		struct iwl_phy_db_entry cfg;
		struct iwl_phy_db_entry calib_nch;
		int n_group_papd;
		struct iwl_phy_db_entry *calib_ch_group_papd;
		int n_group_txp;
		struct iwl_phy_db_entry *calib_ch_group_txp;
		struct iwl_trans *trans;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 88 */;
	struct iwl_phy_db_entry {
		u16 size;
		u8 *data;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 72 */;
	u8 *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 423 */;
	struct iwl_host_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 359 */;
	struct iwl_phy_db_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 358 */;
	u32 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 327 */;
	u16 *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 327 */;
	u8 **cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 327 */;
	void *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 313 */;
	int cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 307 */;
	struct iwl_phy_db_chg_txp *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 306 */;
	struct iwl_phy_db *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 304 */;
	u8 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 275 */;
	u16 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 275 */;
	struct iwl_phy_db_entry cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 222 */;
	__le16 *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 215 */;
	struct iwl_calib_res_notif_phy_db *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 204 */;
	struct iwl_rx_packet *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 202 */;
	void cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 179 */;
	struct iwl_phy_db_entry *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 169 */;
	enum iwl_phy_db_section_type cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 166 */;
	struct iwl_phy_db cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 118 */;
	struct iwl_trans *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 116 */;
	struct iwl_phy_db_chg_txp {
		__le32 space;
		__le16 max_channel_idx;
	}__packed cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-phy-db.c 111 */;
}
