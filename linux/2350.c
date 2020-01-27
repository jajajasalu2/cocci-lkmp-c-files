cocci_test_suite() {
	struct ps3_system_bus_device *cocci_id/* drivers/ps3/ps3av.c 922 */;
	int cocci_id/* drivers/ps3/ps3av.c 915 */;
	u32 cocci_id/* drivers/ps3/ps3av.c 85 */[];
	const struct ps3av_pkt_av_get_hw_conf *cocci_id/* drivers/ps3/ps3av.c 796 */;
	struct ps3av *cocci_id/* drivers/ps3/ps3av.c 793 */;
	struct ps3av_info_monitor *cocci_id/* drivers/ps3/ps3av.c 754 */;
	struct ps3av_pkt_av_get_monitor_info cocci_id/* drivers/ps3/ps3av.c 753 */;
	struct ps3av_pkt_av_get_hw_conf *cocci_id/* drivers/ps3/ps3av.c 750 */;
	const struct ps3av_monitor_quirk *cocci_id/* drivers/ps3/ps3av.c 735 */;
	unsigned int cocci_id/* drivers/ps3/ps3av.c 734 */;
	void cocci_id/* drivers/ps3/ps3av.c 732 */;
	const struct ps3av_monitor_quirk {
		const char *monitor_name;
		u32 clear_60;
	} cocci_id/* drivers/ps3/ps3av.c 715 */[];
	char cocci_id/* drivers/ps3/ps3av.c 661 */[sizeof(info->monitor_id) * 3 + 1];
	const struct ps3av_info_audio *cocci_id/* drivers/ps3/ps3av.c 660 */;
	const struct ps3av_info_monitor *cocci_id/* drivers/ps3/ps3av.c 659 */;
	const struct ps3av_pkt_av_get_monitor_info *cocci_id/* drivers/ps3/ps3av.c 657 */;
	enum ps3av_mode_num cocci_id/* drivers/ps3/ps3av.c 625 */;
	const struct avset_video_mode {
		u32 cs;
		u32 fmt;
		u32 vid;
		u32 aspect;
		u32 x;
		u32 y;
	} cocci_id/* drivers/ps3/ps3av.c 60 */[];
	const struct {
		unsigned mask:19;
		unsigned id:4;
	} cocci_id/* drivers/ps3/ps3av.c 578 */[];
	struct work_struct *cocci_id/* drivers/ps3/ps3av.c 568 */;
	const struct avset_video_mode *cocci_id/* drivers/ps3/ps3av.c 485 */;
	struct ps3av_pkt_audio_mode cocci_id/* drivers/ps3/ps3av.c 410 */;
	struct ps3av_pkt_avb_param cocci_id/* drivers/ps3/ps3av.c 408 */;
	struct ps3av {
		struct mutex mutex;
		struct work_struct work;
		struct completion done;
		int open_count;
		struct ps3_system_bus_device *dev;
		int region;
		struct ps3av_pkt_av_get_hw_conf av_hw_conf;
		u32 av_port[PS3AV_AV_PORT_MAX + PS3AV_OPT_PORT_MAX];
		u32 opt_port[PS3AV_OPT_PORT_MAX];
		u32 head[PS3AV_HEAD_MAX];
		u32 audio_port;
		int ps3av_mode;
		int ps3av_mode_old;
		union {
			struct ps3av_reply_hdr reply_hdr;
			u8 raw[PS3AV_BUF_SIZE];
		} recv_buf;
	} *cocci_id/* drivers/ps3/ps3av.c 31 */;
	u32 *cocci_id/* drivers/ps3/ps3av.c 291 */;
	struct ps3av_send_hdr *cocci_id/* drivers/ps3/ps3av.c 288 */;
	u32 cocci_id/* drivers/ps3/ps3av.c 287 */;
	u16 cocci_id/* drivers/ps3/ps3av.c 287 */;
	size_t cocci_id/* drivers/ps3/ps3av.c 287 */;
	struct ps3av_reply_hdr *cocci_id/* drivers/ps3/ps3av.c 207 */;
	const struct ps3av_send_hdr *cocci_id/* drivers/ps3/ps3av.c 206 */;
	unsigned long cocci_id/* drivers/ps3/ps3av.c 185 */;
	void *cocci_id/* drivers/ps3/ps3av.c 184 */;
	const void *cocci_id/* drivers/ps3/ps3av.c 175 */;
	const struct ps3av_reply_hdr *cocci_id/* drivers/ps3/ps3av.c 151 */;
	void __exit cocci_id/* drivers/ps3/ps3av.c 1048 */;
	int __init cocci_id/* drivers/ps3/ps3av.c 1027 */;
	struct ps3_vuart_port_driver cocci_id/* drivers/ps3/ps3av.c 1019 */;
}
