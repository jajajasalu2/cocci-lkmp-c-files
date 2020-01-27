@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 struct inode * cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['92']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
typedef bool,spinlock_t;
@@
 struct binder_proc {  struct hlist_node proc_node ;  struct rb_root threads ;  struct rb_root nodes ;  struct rb_root refs_by_desc ;  struct rb_root refs_by_node ;  struct list_head waiting_threads ;  int pid ;  struct task_struct * tsk ;  struct hlist_node deferred_work_node ;  int deferred_work ;  bool is_dead ;  struct list_head todo ;  struct binder_stats stats ;  struct list_head delivered_death ;  int max_threads ;  int requested_threads ;  int requested_threads_started ;  int tmp_ref ;  long default_priority ;  struct dentry * debugfs_entry ;  struct binder_alloc alloc ;  struct binder_context * context ;  spinlock_t inner_lock ;  spinlock_t outer_lock ;  struct dentry * binderfs_entry ; } cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['115', '141']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 struct binder_transaction cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['142']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct dentry * cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 long cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['103']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 struct binder_ref {  struct binder_ref_data data ;  struct rb_node rb_node_desc ;  struct rb_node rb_node_node ;  struct hlist_node node_entry ;  struct binder_proc * proc ;  struct binder_node * node ;  struct binder_ref_death * death ; } cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['154', '162']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
typedef u8,bool,binder_uintptr_t,spinlock_t;
@@
 struct binder_node {  int debug_id ;  spinlock_t lock ;  struct binder_work work ;  union {  struct rb_node rb_node ;  struct hlist_node dead_node ; } ;  struct binder_proc * proc ;  struct hlist_head refs ;  int internal_strong_refs ;  int local_weak_refs ;  int local_strong_refs ;  int tmp_refs ;  binder_uintptr_t ptr ;  binder_uintptr_t cookie ;  struct {  u8 has_strong_ref : 1 ;  u8 pending_strong_ref : 1 ;  u8 has_weak_ref : 1 ;  u8 pending_weak_ref : 1 ; } ;  struct {  u8 accept_fds : 1 ;  u8 txn_security_ctx : 1 ;  u8 min_priority ; } ;  bool has_async_transaction ;  struct list_head async_todo ; } cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['179', '208']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 enum { BINDER_DEBUG_USER_ERROR = 1U << 0 , BINDER_DEBUG_FAILED_TRANSACTION = 1U << 1 , BINDER_DEBUG_DEAD_TRANSACTION = 1U << 2 , BINDER_DEBUG_OPEN_CLOSE = 1U << 3 , BINDER_DEBUG_DEAD_BINDER = 1U << 4 , BINDER_DEBUG_DEATH_NOTIFICATION = 1U << 5 , BINDER_DEBUG_READ_WRITE = 1U << 6 , BINDER_DEBUG_USER_REFS = 1U << 7 , BINDER_DEBUG_THREADS = 1U << 8 , BINDER_DEBUG_TRANSACTION = 1U << 9 , BINDER_DEBUG_TRANSACTION_COMPLETE = 1U << 10 , BINDER_DEBUG_FREE_BUFFER = 1U << 11 , BINDER_DEBUG_INTERNAL_REFS = 1U << 12 , BINDER_DEBUG_PRIORITY_CAP = 1U << 13 , BINDER_DEBUG_SPINLOCKS = 1U << 14 , } cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
typedef vm_fault_t;
@@
 vm_fault_t cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['95']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 struct binder_object * cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['239']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
typedef binder_size_t;
@@
 binder_size_t * cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['146']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 struct binder_node cocci_id@p ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['65']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
@@
 struct binder_object cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['214']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
@@
 struct binder_fd_object * cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['177']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
typedef binder_uintptr_t;
@@
 binder_uintptr_t cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['213']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
@@
 struct binder_txn_fd_fixup * cocci_id@p ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['148']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
@@
 struct binder_proc * cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['18']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
typedef kuid_t,spinlock_t,binder_uintptr_t;
@@
 struct binder_transaction {  int debug_id ;  struct binder_work work ;  struct binder_thread * from ;  struct binder_transaction * from_parent ;  struct binder_proc * to_proc ;  struct binder_thread * to_thread ;  struct binder_transaction * to_parent ;  unsigned need_reply : 1 ;  struct binder_buffer * buffer ;  unsigned int code ;  unsigned int flags ;  long priority ;  long saved_priority ;  kuid_t sender_euid ;  struct list_head fd_fixups ;  binder_uintptr_t security_ctx ;  spinlock_t lock ; } cocci_id@p ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['37', '55']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
@@
 struct binder_object {  union {  struct binder_object_header hdr ;  struct flat_binder_object fbo ;  struct binder_fd_object fdo ;  struct binder_buffer_object bbo ;  struct binder_fd_array_object fdao ; } ; } cocci_id@p ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['24', '32']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
@@
 char cocci_id@p [ 11 ] ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['89']:
    rule_matches[20]['correct_lines'].append(p[0].line)
else:
    rule_matches[20]['other_lines'].append(p[0].line)

@ r21 @
symbol cocci_id;
position p;
@@
 struct rb_node * * cocci_id@p ;

@ script:python depends on r21 @
p << r21.p;
@@

if 21 not in rule_matches:
    rule_matches[21] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['257']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
@@
 struct binder_ref_death cocci_id@p ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['111']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
@@
 struct callback_head * cocci_id@p ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['229']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['19']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ r25 @
symbol cocci_id;
position p;
typedef atomic_t;
@@
 atomic_t cocci_id@p ;

@ script:python depends on r25 @
p << r25.p;
@@

if 25 not in rule_matches:
    rule_matches[25] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[25]['correct_lines'].append(p[0].line)
else:
    rule_matches[25]['other_lines'].append(p[0].line)

@ r26 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct binder_proc * proc , enum binder_deferred_state defer ) ;

@ script:python depends on r26 @
p << r26.p;
@@

if 26 not in rule_matches:
    rule_matches[26] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11', '12']:
    rule_matches[26]['correct_lines'].append(p[0].line)
else:
    rule_matches[26]['other_lines'].append(p[0].line)

@ r27 @
symbol cocci_id;
position p;
@@
 struct binder_node_debug_info cocci_id@p ;

@ script:python depends on r27 @
p << r27.p;
@@

if 27 not in rule_matches:
    rule_matches[27] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['97']:
    rule_matches[27]['correct_lines'].append(p[0].line)
else:
    rule_matches[27]['other_lines'].append(p[0].line)

@ r28 @
symbol cocci_id;
position p;
@@
 const char * constcocci_id [ ] ;

@ script:python depends on r28 @
p << r28.p;
@@

if 28 not in rule_matches:
    rule_matches[28] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['36']:
    rule_matches[28]['correct_lines'].append(p[0].line)
else:
    rule_matches[28]['other_lines'].append(p[0].line)

@ r29 @
symbol cocci_id;
position p;
@@
 unsigned int cocci_id@p ;

@ script:python depends on r29 @
p << r29.p;
@@

if 29 not in rule_matches:
    rule_matches[29] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['102']:
    rule_matches[29]['correct_lines'].append(p[0].line)
else:
    rule_matches[29]['other_lines'].append(p[0].line)

@ r30 @
symbol cocci_id;
position p;
@@
 const struct file_operations cocci_id@p ;

@ script:python depends on r30 @
p << r30.p;
@@

if 30 not in rule_matches:
    rule_matches[30] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['33']:
    rule_matches[30]['correct_lines'].append(p[0].line)
else:
    rule_matches[30]['other_lines'].append(p[0].line)

@ r31 @
symbol cocci_id;
position p;
@@
 struct binder_fd_object cocci_id@p ;

@ script:python depends on r31 @
p << r31.p;
@@

if 31 not in rule_matches:
    rule_matches[31] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['236']:
    rule_matches[31]['correct_lines'].append(p[0].line)
else:
    rule_matches[31]['other_lines'].append(p[0].line)

@ r32 @
symbol cocci_id;
position p;
@@
 struct binder_transaction_log * cocci_id@p ;

@ script:python depends on r32 @
p << r32.p;
@@

if 32 not in rule_matches:
    rule_matches[32] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['244']:
    rule_matches[32]['correct_lines'].append(p[0].line)
else:
    rule_matches[32]['other_lines'].append(p[0].line)

@ r33 @
symbol cocci_id;
position p;
typedef uint32_t;
@@
 uint32_t * cocci_id@p ;

@ script:python depends on r33 @
p << r33.p;
@@

if 33 not in rule_matches:
    rule_matches[33] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['210']:
    rule_matches[33]['correct_lines'].append(p[0].line)
else:
    rule_matches[33]['other_lines'].append(p[0].line)

@ r34 @
symbol cocci_id;
position p;
@@
 enum binder_stat_types { BINDER_STAT_PROC , BINDER_STAT_THREAD , BINDER_STAT_NODE , BINDER_STAT_REF , BINDER_STAT_DEATH , BINDER_STAT_TRANSACTION , BINDER_STAT_TRANSACTION_COMPLETE , BINDER_STAT_COUNT , } cocci_id@p ;

@ script:python depends on r34 @
p << r34.p;
@@

if 34 not in rule_matches:
    rule_matches[34] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['255']:
    rule_matches[34]['correct_lines'].append(p[0].line)
else:
    rule_matches[34]['other_lines'].append(p[0].line)

@ r35 @
symbol cocci_id;
position p;
@@
 struct binder_stats cocci_id@p ;

@ script:python depends on r35 @
p << r35.p;
@@

if 35 not in rule_matches:
    rule_matches[35] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['247']:
    rule_matches[35]['correct_lines'].append(p[0].line)
else:
    rule_matches[35]['other_lines'].append(p[0].line)

@ r36 @
symbol cocci_id;
position p;
@@
 unsigned long long cocci_id@p ;

@ script:python depends on r36 @
p << r36.p;
@@

if 36 not in rule_matches:
    rule_matches[36] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['222']:
    rule_matches[36]['correct_lines'].append(p[0].line)
else:
    rule_matches[36]['other_lines'].append(p[0].line)

@ r37 @
symbol cocci_id;
position p;
@@
 struct vm_fault * cocci_id@p ;

@ script:python depends on r37 @
p << r37.p;
@@

if 37 not in rule_matches:
    rule_matches[37] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['96']:
    rule_matches[37]['correct_lines'].append(p[0].line)
else:
    rule_matches[37]['other_lines'].append(p[0].line)

@ r38 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct binder_thread * thread ) ;

@ script:python depends on r38 @
p << r38.p;
@@

if 38 not in rule_matches:
    rule_matches[38] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[38]['correct_lines'].append(p[0].line)
else:
    rule_matches[38]['other_lines'].append(p[0].line)

@ r39 @
symbol cocci_id;
position p;
@@
 struct binder_proc cocci_id@p ;

@ script:python depends on r39 @
p << r39.p;
@@

if 39 not in rule_matches:
    rule_matches[39] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['62']:
    rule_matches[39]['correct_lines'].append(p[0].line)
else:
    rule_matches[39]['other_lines'].append(p[0].line)

@ r40 @
symbol cocci_id;
position p;
typedef atomic_t;
@@
 struct binder_stats {  atomic_t br [ _IOC_NR ( BR_FAILED_REPLY ) + 1 ] ;  atomic_t bc [ _IOC_NR ( BC_REPLY_SG ) + 1 ] ;  atomic_t obj_created [ BINDER_STAT_COUNT ] ;  atomic_t obj_deleted [ BINDER_STAT_COUNT ] ; } cocci_id@p ;

@ script:python depends on r40 @
p << r40.p;
@@

if 40 not in rule_matches:
    rule_matches[40] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['248', '253']:
    rule_matches[40]['correct_lines'].append(p[0].line)
else:
    rule_matches[40]['other_lines'].append(p[0].line)

@ r41 @
symbol cocci_id;
position p;
@@
 struct binder_transaction_data_secctx cocci_id@p ;

@ script:python depends on r41 @
p << r41.p;
@@

if 41 not in rule_matches:
    rule_matches[41] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['145']:
    rule_matches[41]['correct_lines'].append(p[0].line)
else:
    rule_matches[41]['other_lines'].append(p[0].line)

@ r42 @
symbol cocci_id;
position p;
@@
 struct binder_task_work_cb {  struct callback_head twork ;  struct file * file ; } cocci_id@p ;

@ script:python depends on r42 @
p << r42.p;
@@

if 42 not in rule_matches:
    rule_matches[42] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['230', '233']:
    rule_matches[42]['correct_lines'].append(p[0].line)
else:
    rule_matches[42]['other_lines'].append(p[0].line)

@ r43 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

@ script:python depends on r43 @
p << r43.p;
@@

if 43 not in rule_matches:
    rule_matches[43] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[43]['correct_lines'].append(p[0].line)
else:
    rule_matches[43]['other_lines'].append(p[0].line)

@ r44 @
symbol cocci_id;
position p;
@@
 const struct vm_operations_struct cocci_id@p ;

@ script:python depends on r44 @
p << r44.p;
@@

if 44 not in rule_matches:
    rule_matches[44] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['94']:
    rule_matches[44]['correct_lines'].append(p[0].line)
else:
    rule_matches[44]['other_lines'].append(p[0].line)

@ r45 @
symbol cocci_id;
position p;
typedef uint32_t;
@@
 uint32_t cocci_id@p ;

@ script:python depends on r45 @
p << r45.p;
@@

if 45 not in rule_matches:
    rule_matches[45] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['242']:
    rule_matches[45]['correct_lines'].append(p[0].line)
else:
    rule_matches[45]['other_lines'].append(p[0].line)

@ r46 @
symbol cocci_id;
position p;
typedef kuid_t;
@@
 kuid_t cocci_id@p ;

@ script:python depends on r46 @
p << r46.p;
@@

if 46 not in rule_matches:
    rule_matches[46] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['106']:
    rule_matches[46]['correct_lines'].append(p[0].line)
else:
    rule_matches[46]['other_lines'].append(p[0].line)

@ r47 @
symbol cocci_id;
position p;
@@
 struct binder_version cocci_id@p ;

@ script:python depends on r47 @
p << r47.p;
@@

if 47 not in rule_matches:
    rule_matches[47] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['99']:
    rule_matches[47]['correct_lines'].append(p[0].line)
else:
    rule_matches[47]['other_lines'].append(p[0].line)

@ r48 @
symbol cocci_id;
position p;
@@
 struct binder_transaction_data * cocci_id@p ;

@ script:python depends on r48 @
p << r48.p;
@@

if 48 not in rule_matches:
    rule_matches[48] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['144']:
    rule_matches[48]['correct_lines'].append(p[0].line)
else:
    rule_matches[48]['other_lines'].append(p[0].line)

@ r49 @
symbol cocci_id;
position p;
@@
 struct binder_ref cocci_id@p ;

@ script:python depends on r49 @
p << r49.p;
@@

if 49 not in rule_matches:
    rule_matches[49] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['64']:
    rule_matches[49]['correct_lines'].append(p[0].line)
else:
    rule_matches[49]['other_lines'].append(p[0].line)

@ r50 @
symbol cocci_id;
position p;
@@
 struct binder_error * cocci_id@p ;

@ script:python depends on r50 @
p << r50.p;
@@

if 50 not in rule_matches:
    rule_matches[50] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['114']:
    rule_matches[50]['correct_lines'].append(p[0].line)
else:
    rule_matches[50]['other_lines'].append(p[0].line)

@ r51 @
symbol cocci_id;
position p;
@@
 struct binder_context * cocci_id@p ;

@ script:python depends on r51 @
p << r51.p;
@@

if 51 not in rule_matches:
    rule_matches[51] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['66']:
    rule_matches[51]['correct_lines'].append(p[0].line)
else:
    rule_matches[51]['other_lines'].append(p[0].line)

@ r52 @
symbol cocci_id;
position p;
@@
 struct flat_binder_object cocci_id@p ;

@ script:python depends on r52 @
p << r52.p;
@@

if 52 not in rule_matches:
    rule_matches[52] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['237']:
    rule_matches[52]['correct_lines'].append(p[0].line)
else:
    rule_matches[52]['other_lines'].append(p[0].line)

@ r53 @
symbol cocci_id;
position p;
@@
 struct binder_transaction_data_sg cocci_id@p ;

@ script:python depends on r53 @
p << r53.p;
@@

if 53 not in rule_matches:
    rule_matches[53] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['164']:
    rule_matches[53]['correct_lines'].append(p[0].line)
else:
    rule_matches[53]['other_lines'].append(p[0].line)

@ r54 @
symbol cocci_id;
position p;
@@
 struct poll_table_struct * cocci_id@p ;

@ script:python depends on r54 @
p << r54.p;
@@

if 54 not in rule_matches:
    rule_matches[54] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['109']:
    rule_matches[54]['correct_lines'].append(p[0].line)
else:
    rule_matches[54]['other_lines'].append(p[0].line)

@ r55 @
symbol cocci_id;
position p;
@@
 const char * cocci_id@p ;

@ script:python depends on r55 @
p << r55.p;
@@

if 55 not in rule_matches:
    rule_matches[55] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['243']:
    rule_matches[55]['correct_lines'].append(p[0].line)
else:
    rule_matches[55]['other_lines'].append(p[0].line)

@ r56 @
symbol cocci_id;
position p;
@@
 struct binder_node_info_for_ref cocci_id@p ;

@ script:python depends on r56 @
p << r56.p;
@@

if 56 not in rule_matches:
    rule_matches[56] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['98']:
    rule_matches[56]['correct_lines'].append(p[0].line)
else:
    rule_matches[56]['other_lines'].append(p[0].line)

@ r57 @
symbol cocci_id;
position p;
@@
 struct binder_buffer_object cocci_id@p ;

@ script:python depends on r57 @
p << r57.p;
@@

if 57 not in rule_matches:
    rule_matches[57] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['235']:
    rule_matches[57]['correct_lines'].append(p[0].line)
else:
    rule_matches[57]['other_lines'].append(p[0].line)

@ r58 @
symbol cocci_id;
position p;
@@
 struct seq_file * cocci_id@p ;

@ script:python depends on r58 @
p << r58.p;
@@

if 58 not in rule_matches:
    rule_matches[58] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['34']:
    rule_matches[58]['correct_lines'].append(p[0].line)
else:
    rule_matches[58]['other_lines'].append(p[0].line)

@ r59 @
symbol cocci_id;
position p;
@@
 unsigned long cocci_id@p ;

@ script:python depends on r59 @
p << r59.p;
@@

if 59 not in rule_matches:
    rule_matches[59] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['240']:
    rule_matches[59]['correct_lines'].append(p[0].line)
else:
    rule_matches[59]['other_lines'].append(p[0].line)

@ r60 @
symbol cocci_id;
position p;
@@
 struct binder_task_work_cb cocci_id@p ;

@ script:python depends on r60 @
p << r60.p;
@@

if 60 not in rule_matches:
    rule_matches[60] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['224']:
    rule_matches[60]['correct_lines'].append(p[0].line)
else:
    rule_matches[60]['other_lines'].append(p[0].line)

@ r61 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct binder_node * node ) ;

@ script:python depends on r61 @
p << r61.p;
@@

if 61 not in rule_matches:
    rule_matches[61] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[61]['correct_lines'].append(p[0].line)
else:
    rule_matches[61]['other_lines'].append(p[0].line)

@ r62 @
symbol cocci_id;
position p;
@@
 struct binder_device cocci_id@p ;

@ script:python depends on r62 @
p << r62.p;
@@

if 62 not in rule_matches:
    rule_matches[62] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['90']:
    rule_matches[62]['correct_lines'].append(p[0].line)
else:
    rule_matches[62]['other_lines'].append(p[0].line)

@ r63 @
symbol cocci_id;
position p;
typedef u64;
@@
 u64 cocci_id@p ;

@ script:python depends on r63 @
p << r63.p;
@@

if 63 not in rule_matches:
    rule_matches[63] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['260']:
    rule_matches[63]['correct_lines'].append(p[0].line)
else:
    rule_matches[63]['other_lines'].append(p[0].line)

@ r64 @
symbol cocci_id;
position p;
typedef binder_size_t;
@@
 binder_size_t cocci_id@p ;

@ script:python depends on r64 @
p << r64.p;
@@

if 64 not in rule_matches:
    rule_matches[64] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['216']:
    rule_matches[64]['correct_lines'].append(p[0].line)
else:
    rule_matches[64]['other_lines'].append(p[0].line)

@ r65 @
symbol cocci_id;
position p;
@@
 struct binder_ref * cocci_id@p ;

@ script:python depends on r65 @
p << r65.p;
@@

if 65 not in rule_matches:
    rule_matches[65] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['256']:
    rule_matches[65]['correct_lines'].append(p[0].line)
else:
    rule_matches[65]['other_lines'].append(p[0].line)

@ r66 @
symbol cocci_id;
position p;
@@
 struct binder_buffer * cocci_id@p ;

@ script:python depends on r66 @
p << r66.p;
@@

if 66 not in rule_matches:
    rule_matches[66] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['215']:
    rule_matches[66]['correct_lines'].append(p[0].line)
else:
    rule_matches[66]['other_lines'].append(p[0].line)

@ r67 @
symbol cocci_id;
position p;
typedef uint32_t;
@@
 struct binder_ref_data {  int debug_id ;  uint32_t desc ;  int strong ;  int weak ; } cocci_id@p ;

@ script:python depends on r67 @
p << r67.p;
@@

if 67 not in rule_matches:
    rule_matches[67] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['166', '171']:
    rule_matches[67]['correct_lines'].append(p[0].line)
else:
    rule_matches[67]['other_lines'].append(p[0].line)

@ r68 @
symbol cocci_id;
position p;
@@
 struct file * cocci_id@p ;

@ script:python depends on r68 @
p << r68.p;
@@

if 68 not in rule_matches:
    rule_matches[68] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['87']:
    rule_matches[68]['correct_lines'].append(p[0].line)
else:
    rule_matches[68]['other_lines'].append(p[0].line)

@ r69 @
symbol cocci_id;
position p;
@@
 struct binder_ref_data cocci_id@p ;

@ script:python depends on r69 @
p << r69.p;
@@

if 69 not in rule_matches:
    rule_matches[69] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['165']:
    rule_matches[69]['correct_lines'].append(p[0].line)
else:
    rule_matches[69]['other_lines'].append(p[0].line)

@ r70 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r70 @
p << r70.p;
@@

if 70 not in rule_matches:
    rule_matches[70] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['20']:
    rule_matches[70]['correct_lines'].append(p[0].line)
else:
    rule_matches[70]['other_lines'].append(p[0].line)

@ r71 @
symbol cocci_id;
position p;
@@
 struct vm_area_struct * cocci_id@p ;

@ script:python depends on r71 @
p << r71.p;
@@

if 71 not in rule_matches:
    rule_matches[71] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['93']:
    rule_matches[71]['correct_lines'].append(p[0].line)
else:
    rule_matches[71]['other_lines'].append(p[0].line)

@ r72 @
symbol cocci_id;
position p;
@@
 struct binder_transaction_log_entry * cocci_id@p ;

@ script:python depends on r72 @
p << r72.p;
@@

if 72 not in rule_matches:
    rule_matches[72] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['209']:
    rule_matches[72]['correct_lines'].append(p[0].line)
else:
    rule_matches[72]['other_lines'].append(p[0].line)

@ r73 @
symbol cocci_id;
position p;
@@
 void * cocci_id@p ;

@ script:python depends on r73 @
p << r73.p;
@@

if 73 not in rule_matches:
    rule_matches[73] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['88']:
    rule_matches[73]['correct_lines'].append(p[0].line)
else:
    rule_matches[73]['other_lines'].append(p[0].line)

@ r74 @
symbol cocci_id;
position p;
@@
 struct binder_task_work_cb * cocci_id@p ;

@ script:python depends on r74 @
p << r74.p;
@@

if 74 not in rule_matches:
    rule_matches[74] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['223']:
    rule_matches[74]['correct_lines'].append(p[0].line)
else:
    rule_matches[74]['other_lines'].append(p[0].line)

@ r75 @
symbol cocci_id;
position p;
@@
 struct binder_node_info_for_ref * cocci_id@p ;

@ script:python depends on r75 @
p << r75.p;
@@

if 75 not in rule_matches:
    rule_matches[75] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['105']:
    rule_matches[75]['correct_lines'].append(p[0].line)
else:
    rule_matches[75]['other_lines'].append(p[0].line)

@ r76 @
symbol cocci_id;
position p;
@@
 struct list_head * cocci_id@p ;

@ script:python depends on r76 @
p << r76.p;
@@

if 76 not in rule_matches:
    rule_matches[76] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['14']:
    rule_matches[76]['correct_lines'].append(p[0].line)
else:
    rule_matches[76]['other_lines'].append(p[0].line)

@ r77 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r77 @
p << r77.p;
@@

if 77 not in rule_matches:
    rule_matches[77] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['147']:
    rule_matches[77]['correct_lines'].append(p[0].line)
else:
    rule_matches[77]['other_lines'].append(p[0].line)

@ r78 @
symbol cocci_id;
position p;
@@
 enum { BINDER_LOOPER_STATE_REGISTERED = 0x01 , BINDER_LOOPER_STATE_ENTERED = 0x02 , BINDER_LOOPER_STATE_EXITED = 0x04 , BINDER_LOOPER_STATE_INVALID = 0x08 , BINDER_LOOPER_STATE_WAITING = 0x10 , BINDER_LOOPER_STATE_POLL = 0x20 , } cocci_id@p ;

@ script:python depends on r78 @
p << r78.p;
@@

if 78 not in rule_matches:
    rule_matches[78] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['107']:
    rule_matches[78]['correct_lines'].append(p[0].line)
else:
    rule_matches[78]['other_lines'].append(p[0].line)

@ r79 @
symbol cocci_id;
position p;
@@
 struct binder_device * cocci_id@p ;

@ script:python depends on r79 @
p << r79.p;
@@

if 79 not in rule_matches:
    rule_matches[79] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['22']:
    rule_matches[79]['correct_lines'].append(p[0].line)
else:
    rule_matches[79]['other_lines'].append(p[0].line)

@ r80 @
symbol cocci_id;
position p;
typedef uint32_t;
@@
 struct binder_error {  struct binder_work work ;  uint32_t cmd ; } cocci_id@p ;

@ script:python depends on r80 @
p << r80.p;
@@

if 80 not in rule_matches:
    rule_matches[80] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['218', '221']:
    rule_matches[80]['correct_lines'].append(p[0].line)
else:
    rule_matches[80]['other_lines'].append(p[0].line)

@ r81 @
symbol cocci_id;
position p;
@@
 struct binder_buffer_object * cocci_id@p ;

@ script:python depends on r81 @
p << r81.p;
@@

if 81 not in rule_matches:
    rule_matches[81] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['217']:
    rule_matches[81]['correct_lines'].append(p[0].line)
else:
    rule_matches[81]['other_lines'].append(p[0].line)

@ r82 @
symbol cocci_id;
position p;
@@
 struct binder_error cocci_id@p ;

@ script:python depends on r82 @
p << r82.p;
@@

if 82 not in rule_matches:
    rule_matches[82] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['113']:
    rule_matches[82]['correct_lines'].append(p[0].line)
else:
    rule_matches[82]['other_lines'].append(p[0].line)

@ r83 @
symbol cocci_id;
position p;
@@
 struct binder_write_read cocci_id@p ;

@ script:python depends on r83 @
p << r83.p;
@@

if 83 not in rule_matches:
    rule_matches[83] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['108']:
    rule_matches[83]['correct_lines'].append(p[0].line)
else:
    rule_matches[83]['other_lines'].append(p[0].line)

@ r84 @
symbol cocci_id;
position p;
@@
 struct binder_object_header * cocci_id@p ;

@ script:python depends on r84 @
p << r84.p;
@@

if 84 not in rule_matches:
    rule_matches[84] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['238']:
    rule_matches[84]['correct_lines'].append(p[0].line)
else:
    rule_matches[84]['other_lines'].append(p[0].line)

@ r85 @
symbol cocci_id;
position p;
@@
 struct hlist_node * cocci_id@p ;

@ script:python depends on r85 @
p << r85.p;
@@

if 85 not in rule_matches:
    rule_matches[85] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['21']:
    rule_matches[85]['correct_lines'].append(p[0].line)
else:
    rule_matches[85]['other_lines'].append(p[0].line)

@ r86 @
symbol cocci_id;
position p;
@@
 size_t cocci_id@p ;

@ script:python depends on r86 @
p << r86.p;
@@

if 86 not in rule_matches:
    rule_matches[86] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['241']:
    rule_matches[86]['correct_lines'].append(p[0].line)
else:
    rule_matches[86]['other_lines'].append(p[0].line)

@ r87 @
symbol cocci_id;
position p;
@@
 struct binder_work * cocci_id@p ;

@ script:python depends on r87 @
p << r87.p;
@@

if 87 not in rule_matches:
    rule_matches[87] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['16']:
    rule_matches[87]['correct_lines'].append(p[0].line)
else:
    rule_matches[87]['other_lines'].append(p[0].line)

@ r88 @
symbol cocci_id;
position p;
@@
 struct binder_node * cocci_id@p ;

@ script:python depends on r88 @
p << r88.p;
@@

if 88 not in rule_matches:
    rule_matches[88] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['17']:
    rule_matches[88]['correct_lines'].append(p[0].line)
else:
    rule_matches[88]['other_lines'].append(p[0].line)

@ r89 @
symbol cocci_id;
position p;
typedef uintptr_t;
@@
 uintptr_t cocci_id@p ;

@ script:python depends on r89 @
p << r89.p;
@@

if 89 not in rule_matches:
    rule_matches[89] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['212']:
    rule_matches[89]['correct_lines'].append(p[0].line)
else:
    rule_matches[89]['other_lines'].append(p[0].line)

@ r90 @
symbol cocci_id;
position p;
@@
 enum binder_deferred_state { BINDER_DEFERRED_FLUSH = 0x01 , BINDER_DEFERRED_RELEASE = 0x02 , } cocci_id@p ;

@ script:python depends on r90 @
p << r90.p;
@@

if 90 not in rule_matches:
    rule_matches[90] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['153']:
    rule_matches[90]['correct_lines'].append(p[0].line)
else:
    rule_matches[90]['other_lines'].append(p[0].line)

@ r91 @
symbol cocci_id;
position p;
@@
 struct binder_proc * * cocci_id@p ;

@ script:python depends on r91 @
p << r91.p;
@@

if 91 not in rule_matches:
    rule_matches[91] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['211']:
    rule_matches[91]['correct_lines'].append(p[0].line)
else:
    rule_matches[91]['other_lines'].append(p[0].line)

@ r92 @
symbol cocci_id;
position p;
@@
 struct binder_work cocci_id@p ;

@ script:python depends on r92 @
p << r92.p;
@@

if 92 not in rule_matches:
    rule_matches[92] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15']:
    rule_matches[92]['correct_lines'].append(p[0].line)
else:
    rule_matches[92]['other_lines'].append(p[0].line)

@ r93 @
symbol cocci_id;
position p;
@@
 struct binder_fd_array_object cocci_id@p ;

@ script:python depends on r93 @
p << r93.p;
@@

if 93 not in rule_matches:
    rule_matches[93] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['234']:
    rule_matches[93]['correct_lines'].append(p[0].line)
else:
    rule_matches[93]['other_lines'].append(p[0].line)

@ r94 @
symbol cocci_id;
position p;
@@
 struct task_struct * cocci_id@p ;

@ script:python depends on r94 @
p << r94.p;
@@

if 94 not in rule_matches:
    rule_matches[94] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['143']:
    rule_matches[94]['correct_lines'].append(p[0].line)
else:
    rule_matches[94]['other_lines'].append(p[0].line)

@ r95 @
symbol cocci_id;
position p;
@@
 char * cocci_id@p ;

@ script:python depends on r95 @
p << r95.p;
@@

if 95 not in rule_matches:
    rule_matches[95] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['259']:
    rule_matches[95]['correct_lines'].append(p[0].line)
else:
    rule_matches[95]['other_lines'].append(p[0].line)

@ r96 @
symbol cocci_id;
position p;
@@
 struct binder_ref_data * cocci_id@p ;

@ script:python depends on r96 @
p << r96.p;
@@

if 96 not in rule_matches:
    rule_matches[96] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['254']:
    rule_matches[96]['correct_lines'].append(p[0].line)
else:
    rule_matches[96]['other_lines'].append(p[0].line)

@ r97 @
symbol cocci_id;
position p;
@@
 enum binder_stat_types cocci_id@p ;

@ script:python depends on r97 @
p << r97.p;
@@

if 97 not in rule_matches:
    rule_matches[97] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['246']:
    rule_matches[97]['correct_lines'].append(p[0].line)
else:
    rule_matches[97]['other_lines'].append(p[0].line)

@ r98 @
symbol cocci_id;
position p;
@@
 struct binder_stats * cocci_id@p ;

@ script:python depends on r98 @
p << r98.p;
@@

if 98 not in rule_matches:
    rule_matches[98] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['35']:
    rule_matches[98]['correct_lines'].append(p[0].line)
else:
    rule_matches[98]['other_lines'].append(p[0].line)

@ r99 @
symbol cocci_id;
position p;
@@
 struct binder_ref_death * cocci_id@p ;

@ script:python depends on r99 @
p << r99.p;
@@

if 99 not in rule_matches:
    rule_matches[99] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['112']:
    rule_matches[99]['correct_lines'].append(p[0].line)
else:
    rule_matches[99]['other_lines'].append(p[0].line)

@ r100 @
symbol cocci_id;
position p;
@@
 enum binder_deferred_state cocci_id@p ;

@ script:python depends on r100 @
p << r100.p;
@@

if 100 not in rule_matches:
    rule_matches[100] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['61']:
    rule_matches[100]['correct_lines'].append(p[0].line)
else:
    rule_matches[100]['other_lines'].append(p[0].line)

@ r101 @
symbol cocci_id;
position p;
@@
 struct binder_thread cocci_id@p ;

@ script:python depends on r101 @
p << r101.p;
@@

if 101 not in rule_matches:
    rule_matches[101] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['84']:
    rule_matches[101]['correct_lines'].append(p[0].line)
else:
    rule_matches[101]['other_lines'].append(p[0].line)

@ r102 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct binder_proc * proc ) ;

@ script:python depends on r102 @
p << r102.p;
@@

if 102 not in rule_matches:
    rule_matches[102] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[102]['correct_lines'].append(p[0].line)
else:
    rule_matches[102]['other_lines'].append(p[0].line)

@ r103 @
symbol cocci_id;
position p;
@@
 struct work_struct * cocci_id@p ;

@ script:python depends on r103 @
p << r103.p;
@@

if 103 not in rule_matches:
    rule_matches[103] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['63']:
    rule_matches[103]['correct_lines'].append(p[0].line)
else:
    rule_matches[103]['other_lines'].append(p[0].line)

@ r104 @
symbol cocci_id;
position p;
@@
 struct binder_fd_array_object * cocci_id@p ;

@ script:python depends on r104 @
p << r104.p;
@@

if 104 not in rule_matches:
    rule_matches[104] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['176']:
    rule_matches[104]['correct_lines'].append(p[0].line)
else:
    rule_matches[104]['other_lines'].append(p[0].line)

@ r105 @
symbol cocci_id;
position p;
typedef binder_uintptr_t;
@@
 struct binder_ref_death {  struct binder_work work ;  binder_uintptr_t cookie ; } cocci_id@p ;

@ script:python depends on r105 @
p << r105.p;
@@

if 105 not in rule_matches:
    rule_matches[105] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['172', '175']:
    rule_matches[105]['correct_lines'].append(p[0].line)
else:
    rule_matches[105]['other_lines'].append(p[0].line)

@ r106 @
symbol cocci_id;
position p;
@@
 struct flat_binder_object * cocci_id@p ;

@ script:python depends on r106 @
p << r106.p;
@@

if 106 not in rule_matches:
    rule_matches[106] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['262']:
    rule_matches[106]['correct_lines'].append(p[0].line)
else:
    rule_matches[106]['other_lines'].append(p[0].line)

@ r107 @
symbol cocci_id;
position p;
@@
 struct binder_transaction_log cocci_id@p ;

@ script:python depends on r107 @
p << r107.p;
@@

if 107 not in rule_matches:
    rule_matches[107] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['245']:
    rule_matches[107]['correct_lines'].append(p[0].line)
else:
    rule_matches[107]['other_lines'].append(p[0].line)

@ r108 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( struct seq_file * m , void * unused ) ;

@ script:python depends on r108 @
p << r108.p;
@@

if 108 not in rule_matches:
    rule_matches[108] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5', '6']:
    rule_matches[108]['correct_lines'].append(p[0].line)
else:
    rule_matches[108]['other_lines'].append(p[0].line)

@ r109 @
symbol cocci_id;
position p;
typedef bool,wait_queue_head_t,atomic_t;
@@
 struct binder_thread {  struct binder_proc * proc ;  struct rb_node rb_node ;  struct list_head waiting_thread_node ;  int pid ;  int looper ;  bool looper_need_return ;  struct binder_transaction * transaction_stack ;  struct list_head todo ;  bool process_todo ;  struct binder_error return_error ;  struct binder_error reply_error ;  wait_queue_head_t wait ;  struct binder_stats stats ;  atomic_t tmp_ref ;  bool is_dead ; } cocci_id@p ;

@ script:python depends on r109 @
p << r109.p;
@@

if 109 not in rule_matches:
    rule_matches[109] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['67', '83']:
    rule_matches[109]['correct_lines'].append(p[0].line)
else:
    rule_matches[109]['other_lines'].append(p[0].line)

@ r110 @
symbol cocci_id;
position p;
@@
 struct binder_node_debug_info * cocci_id@p ;

@ script:python depends on r110 @
p << r110.p;
@@

if 110 not in rule_matches:
    rule_matches[110] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['104']:
    rule_matches[110]['correct_lines'].append(p[0].line)
else:
    rule_matches[110]['other_lines'].append(p[0].line)

@ r111 @
symbol cocci_id;
position p;
@@
 struct binderfs_info * cocci_id@p ;

@ script:python depends on r111 @
p << r111.p;
@@

if 111 not in rule_matches:
    rule_matches[111] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['91']:
    rule_matches[111]['correct_lines'].append(p[0].line)
else:
    rule_matches[111]['other_lines'].append(p[0].line)

@ r112 @
symbol cocci_id;
position p;
@@
 struct binder_transaction * cocci_id@p ;

@ script:python depends on r112 @
p << r112.p;
@@

if 112 not in rule_matches:
    rule_matches[112] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['149']:
    rule_matches[112]['correct_lines'].append(p[0].line)
else:
    rule_matches[112]['other_lines'].append(p[0].line)

@ r113 @
symbol cocci_id;
position p;
@@
 struct rb_node * cocci_id@p ;

@ script:python depends on r113 @
p << r113.p;
@@

if 113 not in rule_matches:
    rule_matches[113] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['85']:
    rule_matches[113]['correct_lines'].append(p[0].line)
else:
    rule_matches[113]['other_lines'].append(p[0].line)

@ r114 @
symbol cocci_id;
position p;
@@
 struct binder_transaction_data cocci_id@p ;

@ script:python depends on r114 @
p << r114.p;
@@

if 114 not in rule_matches:
    rule_matches[114] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['163']:
    rule_matches[114]['correct_lines'].append(p[0].line)
else:
    rule_matches[114]['other_lines'].append(p[0].line)

@ r115 @
symbol cocci_id;
position p;
@@
 struct binder_txn_fd_fixup {  struct list_head fixup_entry ;  struct file * file ;  size_t offset ; } cocci_id@p ;

@ script:python depends on r115 @
p << r115.p;
@@

if 115 not in rule_matches:
    rule_matches[115] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['56', '60']:
    rule_matches[115]['correct_lines'].append(p[0].line)
else:
    rule_matches[115]['other_lines'].append(p[0].line)

@ r116 @
symbol cocci_id;
position p;
typedef fl_owner_t;
@@
 fl_owner_t cocci_id@p ;

@ script:python depends on r116 @
p << r116.p;
@@

if 116 not in rule_matches:
    rule_matches[116] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['86']:
    rule_matches[116]['correct_lines'].append(p[0].line)
else:
    rule_matches[116]['other_lines'].append(p[0].line)

@ r117 @
symbol cocci_id;
position p;
@@
 struct binder_thread * cocci_id@p ;

@ script:python depends on r117 @
p << r117.p;
@@

if 117 not in rule_matches:
    rule_matches[117] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[117]['correct_lines'].append(p[0].line)
else:
    rule_matches[117]['other_lines'].append(p[0].line)

@ r118 @
symbol cocci_id;
position p;
@@
 const struct kernel_param * cocci_id@p ;

@ script:python depends on r118 @
p << r118.p;
@@

if 118 not in rule_matches:
    rule_matches[118] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['258']:
    rule_matches[118]['correct_lines'].append(p[0].line)
else:
    rule_matches[118]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118]
for i in rules:
    if i not in rule_matches:
        print("FAILED %s: NO MATCHES" % (str(i)))
        continue
    elif rule_matches[i]['correct_lines']:
        if rule_matches[i]['other_lines']:
            print("PASSED %s: CORRECT MATCHES: %s INCORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['correct_lines']), str(rule_matches[i]['other_lines'])))
        else:
            print("PASSED %s: CORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['correct_lines'])))
    elif rule_matches[i]['other_lines']:
        print("FAILED %s: INCORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['other_lines'])))
    else:
        print("UNDEFINED %s" % str(i))

print("Total Number of cases: %s" % str(len(rules)))
