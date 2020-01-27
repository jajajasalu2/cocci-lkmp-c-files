cocci_test_suite() {
	void cocci_id/* tools/lib/lockdep/preload.c 94 */(void);
	enum{none, prepare, done,} cocci_id/* tools/lib/lockdep/preload.c 93 */;
	int (*cocci_id/* tools/lib/lockdep/preload.c 86 */)(pthread_rwlock_t *rwlock);
	int (*cocci_id/* tools/lib/lockdep/preload.c 84 */)(pthread_rwlock_t *rwlock,
							    const pthread_rwlockattr_t *attr);
	int cocci_id/* tools/lib/lockdep/preload.c 68 */(pthread_rwlock_t *rwlock);
	int cocci_id/* tools/lib/lockdep/preload.c 67 */(pthread_rwlock_t *rwlock,
							 const pthread_rwlockattr_t *attr);
	int (*cocci_id/* tools/lib/lockdep/preload.c 62 */)(pthread_mutex_t *mutex);
	int (*cocci_id/* tools/lib/lockdep/preload.c 57 */)(pthread_mutex_t *mutex,
							    const pthread_mutexattr_t *attr);
	int cocci_id/* tools/lib/lockdep/preload.c 49 */(pthread_mutex_t *mutex);
	int cocci_id/* tools/lib/lockdep/preload.c 45 */(pthread_mutex_t *mutex,
							 const pthread_mutexattr_t *attr);
	pthread_rwlock_t cocci_id/* tools/lib/lockdep/preload.c 40 */;
	struct rb_root cocci_id/* tools/lib/lockdep/preload.c 39 */;
	pthread_rwlock_t *cocci_id/* tools/lib/lockdep/preload.c 340 */;
	const pthread_rwlockattr_t *cocci_id/* tools/lib/lockdep/preload.c 327 */;
	pthread_mutex_t *cocci_id/* tools/lib/lockdep/preload.c 311 */;
	unsigned long cocci_id/* tools/lib/lockdep/preload.c 256 */;
	const pthread_mutexattr_t *cocci_id/* tools/lib/lockdep/preload.c 221 */;
	struct lock_lookup *cocci_id/* tools/lib/lockdep/preload.c 212 */;
	void cocci_id/* tools/lib/lockdep/preload.c 212 */;
	struct lock_lookup {
		void *orig;
		struct lockdep_map dep_map;
		struct lock_class_key key;
		struct rb_node node;
#define LIBLOCKDEP_MAX_LOCK_NAME 22
		char name[LIBLOCKDEP_MAX_LOCK_NAME];
	} cocci_id/* tools/lib/lockdep/preload.c 20 */;
	struct lock_lookup cocci_id/* tools/lib/lockdep/preload.c 184 */;
	struct rb_node **cocci_id/* tools/lib/lockdep/preload.c 177 */;
	void *cocci_id/* tools/lib/lockdep/preload.c 175 */;
	bool cocci_id/* tools/lib/lockdep/preload.c 130 */;
	int cocci_id/* tools/lib/lockdep/preload.c 128 */;
	struct lock_lookup cocci_id/* tools/lib/lockdep/preload.c 127 */[LIBLOCKDEP_STATIC_ENTRIES];
}
