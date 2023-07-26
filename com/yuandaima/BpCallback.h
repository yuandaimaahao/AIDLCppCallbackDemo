#ifndef AIDL_GENERATED_COM_YUANDAIMA_BP_CALLBACK_H_
#define AIDL_GENERATED_COM_YUANDAIMA_BP_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <com/yuandaima/ICallback.h>

namespace com {

namespace yuandaima {

class BpCallback : public ::android::BpInterface<ICallback> {
public:
  explicit BpCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpCallback() = default;
  ::android::binder::Status onCallback(const ::android::String16& str) override;
};  // class BpCallback

}  // namespace yuandaima

}  // namespace com

#endif  // AIDL_GENERATED_COM_YUANDAIMA_BP_CALLBACK_H_
