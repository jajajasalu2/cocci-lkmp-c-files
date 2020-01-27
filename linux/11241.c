cocci_test_suite() {
	bool cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 96 */;
	struct core_stats {
		struct mod_stats public;
		struct dc *dc;
		bool enabled;
		unsigned int entries;
		unsigned int event_entries;
		unsigned int entry_id;
		struct stats_time_cache *time;
		unsigned int index;
		struct stats_event_cache *events;
		unsigned int event_index;
	} cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 76 */;
	struct stats_event_cache {
		unsigned int entry_id;
		char event_string[MOD_STATS_EVENT_STRING_MAX];
	} cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 71 */;
	struct stats_time_cache {
		unsigned int entry_id;
		unsigned long flip_timestamp_in_ns;
		unsigned long vupdate_timestamp_in_ns;
		unsigned int render_time_in_us;
		unsigned int avg_render_time_in_us_last_ten;
		unsigned int v_sync_time_in_us[MOD_STATS_NUM_VSYNCS];
		unsigned int num_vsync_between_flips;
		unsigned int flip_to_vsync_time_in_us;
		unsigned int vsync_to_flip_time_in_us;
		unsigned int min_window;
		unsigned int max_window;
		unsigned int v_total_min;
		unsigned int v_total_max;
		unsigned int event_triggers;
		unsigned int lfc_mid_point_in_us;
		unsigned int num_frames_inserted;
		unsigned int inserted_duration_in_us;
		unsigned int flags;
	} cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 44 */;
	unsigned long cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 329 */;
	char *cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 297 */;
	struct log_entry cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 205 */;
	struct stats_event_cache *cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 201 */;
	struct stats_time_cache *cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 200 */;
	struct dal_logger *cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 198 */;
	void cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 184 */;
	struct stats_event_cache cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 153 */;
	struct stats_time_cache cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 145 */;
	struct core_stats cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 121 */;
	int cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 116 */;
	unsigned int cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 115 */;
	struct persistent_data_flag cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 114 */;
	struct core_stats *cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 113 */;
	struct mod_stats *cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 111 */;
	struct dc *cocci_id/* drivers/gpu/drm/amd/display/modules/stats/stats.c 111 */;
}
