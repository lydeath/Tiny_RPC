aux_source_directory(. SRC_LIST)
aux_source_directory(./muduo SRC_LIST)
# set(SRC_LIST 
    # mprpcapplication.cc 
    # mprpcconfig.cc 
# #     rpcheader.pb.cc 
    # rpcprovider.cc 
# #     mprpcchannel.cc
# #     mprpccontroller.cc
# #     logger.cc
# #     zookeeperutil.cc
# )

add_library(mprpc SHARED ${SRC_LIST})
# target_link_libraries(mprpc muduo_net muduo_base pthread zookeeper_mt)
target_link_libraries(mprpc pthread zookeeper_mt)

add_subdirectory(muduo)