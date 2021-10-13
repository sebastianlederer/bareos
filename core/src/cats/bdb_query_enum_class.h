/* autogenerated file by ./create_queryfiles.sh */
/* check-sources:disable-copyright-check */

#ifndef BAREOS_CATS_BDB_QUERY_ENUM_CLASS_H_
#define BAREOS_CATS_BDB_QUERY_ENUM_CLASS_H_

class BareosDbQueryEnum {
 public:
  enum class SQL_QUERY
  {
    get_restore_objects = 0,
    cleanup_created_job = 1,
    cleanup_running_job = 2,
    fill_jobhisto = 3,
    list_pool = 4,
    list_jobs = 5,
    list_jobs_long = 6,
    list_jobs_count = 7,
    list_jobs_last = 8,
    list_jobs_long_last = 9,
    sel_JobMedia = 10,
    drop_deltabs = 11,
    create_deltabs = 12,
    create_delindex = 13,
    uar_count_files = 14,
    uar_list_jobs = 15,
    uar_print_jobs = 16,
    uar_del_temp = 17,
    uar_del_temp1 = 18,
    uar_last_full = 19,
    uar_last_full_no_pool = 20,
    uar_full = 21,
    uar_dif = 22,
    uar_inc = 23,
    uar_list_jobs_by_idlist = 24,
    uar_sel_jobid_temp = 25,
    uar_sel_all_temp1 = 26,
    uar_sel_all_temp = 27,
    uar_sel_fileset = 28,
    uar_sel_filesetid = 29,
    uar_jobid_fileindex = 30,
    uar_jobids_fileindex = 31,
    uar_jobid_fileindex_from_table = 32,
    select_recent_version_with_basejob = 33,
    select_recent_version_with_basejob_and_delta = 34,
    select_recent_version = 35,
    create_temp_accurate_jobids = 36,
    create_temp_basefile = 37,
    create_temp_new_basefile = 38,
    uap_upgrade_copies_oldest_job = 39,
    uar_file = 40,
    uar_create_temp = 41,
    uar_create_temp1 = 42,
    uar_jobid_fileindex_from_dir = 43,
    sql_media_order_most_recently_written = 44,
    sql_get_max_connections = 45,
    bvfs_select = 46,
    bvfs_list_files = 47,
    batch_lock_path_query = 48,
    batch_lock_filename_query = 49,
    batch_unlock_tables_query = 50,
    batch_fill_path_query = 51,
    batch_fill_filename_query = 52,
    match_query = 53,
    match_query2 = 54,
    insert_counter_values = 55,
    select_counter_values = 56,
    update_counter_values = 57,
    get_quota_jobbytes = 58,
    get_quota_jobbytes_nofailed = 59,
    uar_sel_jobid_copies = 60,
    get_jobstatus_details = 61,
    bvfs_versions_6 = 62,
    bvfs_lsdirs_4 = 63,
    bvfs_clear_cache_0 = 64,
    bvfs_update_path_visibility_3 = 65,
    list_volumes_count_0 = 66,
    list_volumes_by_name_count_1 = 67,
    list_volumes_by_poolid_count_1 = 68,
    list_joblog_2 = 69,
    list_joblog_count_1 = 70,
    get_orphaned_paths_0 = 71,
    get_bad_paths_0 = 72,
    bvfs_ls_special_dirs_3 = 73,
    bvfs_ls_sub_dirs_5 = 74,
    list_volumes_select_0 = 75,
    list_volumes_select_long_0 = 76,
    bvfs_lock_pathhierarchy_0 = 77,
    bvfs_unlock_tables_0 = 78,
    subscription_sel_backup_unit_overview = 79,
    subscription_sel_backup_unit_total = 80,
    subscription_sel_unclassified_client_fileset = 81,
    subscription_sel_unclassified_amount_data = 82,
    SQL_QUERY_NUMBER = 83
  };
};

#endif  // BAREOS_CATS_BDB_QUERY_ENUM_CLASS_H_
