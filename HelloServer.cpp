#define LOG_TAG "aidl_cpp"
#include <log/log.h>
#include <stdlib.h>
#include <utils/RefBase.h>
#include <utils/Log.h>
#include <binder/TextOutput.h>
#include <binder/IInterface.h>
#include <binder/IBinder.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <binder/IPCThreadState.h>

#include "com/yuandaima/IHello.h"
#include "com/yuandaima/BnHello.h"
#include "com/yuandaima/ICallback.h"
#include "com/yuandaima/BpCallback.h"

using namespace android;

class IHelloServer : public com::yuandaima::BnHello
{
private:
    sp<com::yuandaima::ICallback> mCallback;
public:
    binder::Status hello() override
    {
        ALOGI("hello");
        return binder::Status();
    }

    binder::Status sum(int32_t v1, int32_t v2, int32_t *_aidl_return) override
    {
        ALOGI("server: sum: %d + %d", v1, v2);
        *_aidl_return = v1 + v2;

        if(mCallback.get() != nullptr) {
            mCallback->onCallback(String16("str from server"));
        }

        return binder::Status();
    }

    binder::Status registerCallback(const sp<::com::yuandaima::ICallback>& cb) override 
    {
        ALOGI("Server registerCallback");
        mCallback = cb;
        return binder::Status();
    }
};

int main(int argc, char const *argv[])
{   
    ALOGD("HelloServer is running");
    defaultServiceManager()->addService(String16("IHello"), new IHelloServer());
    ProcessState::self()->startThreadPool();
    IPCThreadState::self()->joinThreadPool();
    return 0;
}
