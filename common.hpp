//
//  common.hpp
//  Caffe
//
//  Created by woke on 2017/5/25.
//
//

#ifndef common_hpp
#define common_hpp

#include <stdio.h>

#endif /* common_hpp */
namespace caffeine{
    using boost::shared_ptr;
    class SyncedMemory{

        ~SyncedMemory();
        const void* cpu_data();
        const void* gpu_data();
        void*mutalble_cpu_data();
        void*mutalble_gpu_data();
    private:
        void to_cpu();
        void to_gpu();
        void* cpu_ptr_;
        void* gpu_ptr_;
        size_t size;
        enum SyncedHead{UNINITIALIZED,HEAD_AT_CPU,HEAD_AT_GPU,SYNCED};
        SyncedHead head_;
    };
}

endif
