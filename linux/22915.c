cocci_test_suite() {
	const char *const cocci_id/* sound/firewire/fireworks/fireworks_command.c 80 */[];
	enum efr_status{EFR_STATUS_OK=0, EFR_STATUS_BAD=1, EFR_STATUS_BAD_COMMAND=2, EFR_STATUS_COMM_ERR=3, EFR_STATUS_BAD_QUAD_COUNT=4, EFR_STATUS_UNSUPPORTED=5, EFR_STATUS_1394_TIMEOUT=6, EFR_STATUS_DSP_TIMEOUT=7, EFR_STATUS_BAD_RATE=8, EFR_STATUS_BAD_CLOCK=9, EFR_STATUS_BAD_CHANNEL=10, EFR_STATUS_BAD_PAN=11, EFR_STATUS_FLASH_BUSY=12, EFR_STATUS_BAD_MIRROR=13, EFR_STATUS_BAD_LED=14, EFR_STATUS_BAD_PARAMETER=15, EFR_STATUS_INCOMPLETE=0x80000000,} cocci_id/* sound/firewire/fireworks/fireworks_command.c 60 */;
	enum efc_cmd_hwctl{EFC_CMD_HWCTL_SET_CLOCK=0, EFC_CMD_HWCTL_GET_CLOCK=1, EFC_CMD_HWCTL_IDENTIFY=5,} cocci_id/* sound/firewire/fireworks/fireworks_command.c 53 */;
	enum efc_cmd_transport{EFC_CMD_TRANSPORT_SET_TX_MODE=0,} cocci_id/* sound/firewire/fireworks/fireworks_command.c 48 */;
	enum efc_cmd_hwinfo{EFC_CMD_HWINFO_GET_CAPS=0, EFC_CMD_HWINFO_GET_POLLED=1, EFC_CMD_HWINFO_SET_RESP_ADDR=2,} cocci_id/* sound/firewire/fireworks/fireworks_command.c 42 */;
	unsigned int *cocci_id/* sound/firewire/fireworks/fireworks_command.c 355 */;
	enum efc_category{EFC_CAT_HWINFO=0, EFC_CAT_TRANSPORT=2, EFC_CAT_HWCTL=3,} cocci_id/* sound/firewire/fireworks/fireworks_command.c 35 */;
	enum snd_efw_clock_source *cocci_id/* sound/firewire/fireworks/fireworks_command.c 343 */;
	unsigned int cocci_id/* sound/firewire/fireworks/fireworks_command.c 294 */;
	struct efc_clock cocci_id/* sound/firewire/fireworks/fireworks_command.c 281 */;
	__be32 *cocci_id/* sound/firewire/fireworks/fireworks_command.c 281 */;
	struct efc_clock {
		u32 source;
		u32 sampling_rate;
		u32 index;
	} cocci_id/* sound/firewire/fireworks/fireworks_command.c 28 */;
	struct snd_efw *cocci_id/* sound/firewire/fireworks/fireworks_command.c 274 */;
	struct efc_clock *cocci_id/* sound/firewire/fireworks/fireworks_command.c 274 */;
	int cocci_id/* sound/firewire/fireworks/fireworks_command.c 273 */;
	u32 *cocci_id/* sound/firewire/fireworks/fireworks_command.c 259 */;
	struct snd_efw_phys_meters *cocci_id/* sound/firewire/fireworks/fireworks_command.c 256 */;
	struct snd_efw_hwinfo *cocci_id/* sound/firewire/fireworks/fireworks_command.c 212 */;
	enum snd_efw_transport_mode cocci_id/* sound/firewire/fireworks/fireworks_command.c 203 */;
	__be32 cocci_id/* sound/firewire/fireworks/fireworks_command.c 184 */[2];
	u16 cocci_id/* sound/firewire/fireworks/fireworks_command.c 182 */;
	void *cocci_id/* sound/firewire/fireworks/fireworks_command.c 166 */;
	__be32 cocci_id/* sound/firewire/fireworks/fireworks_command.c 134 */;
	struct snd_efw_transaction cocci_id/* sound/firewire/fireworks/fireworks_command.c 113 */;
	u32 cocci_id/* sound/firewire/fireworks/fireworks_command.c 108 */;
	struct snd_efw_transaction *cocci_id/* sound/firewire/fireworks/fireworks_command.c 106 */;
	const __be32 *cocci_id/* sound/firewire/fireworks/fireworks_command.c 103 */;
}
