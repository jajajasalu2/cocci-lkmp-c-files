/* drivers/crypto/hisilicon/sec/sec_drv.c 205 */
struct sec_debug_bd_info {
#define SEC_DEBUG_BD_INFO_SOFT_ERR_CHECK_M	GENMASK(22, 0)
	u32 soft_err_check;
#define SEC_DEBUG_BD_INFO_HARD_ERR_CHECK_M	GENMASK(9, 0)
	u32 hard_err_check;
	u32 icv_mac1st_word;
#define SEC_DEBUG_BD_INFO_GET_ID_M		GENMASK(19, 0)
	u32 sec_get_id;
	/* W4---W15 */
	u32 reserv_left[12];
};
